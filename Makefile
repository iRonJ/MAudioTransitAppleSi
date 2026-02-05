CC ?= clang
CFLAGS ?= -Wall -Wextra -O2 -pthread
LDFLAGS ?= -framework IOKit -framework CoreFoundation

BIN_DIR := bin
TARGET := $(BIN_DIR)/maudio_iokit_loader
SRC := maudio_iokit_loader.c
PREFIX ?= /usr/local
INSTALL_BIN := $(PREFIX)/bin/maudio_iokit_loader
LAUNCHD_PLIST := com.maudio.transit.fwloader.plist
LAUNCHD_DIR := /Library/LaunchDaemons
LAUNCHD_PATH := $(LAUNCHD_DIR)/$(LAUNCHD_PLIST)
LAUNCHCTL ?= /bin/launchctl
USER_BIN_DIR ?= $(HOME)/.local/bin
USER_INSTALL_BIN := $(USER_BIN_DIR)/maudio_iokit_loader
USER_LAUNCHD_DIR := $(HOME)/Library/LaunchAgents
USER_LAUNCHD_PLIST := $(USER_LAUNCHD_DIR)/com.maudio.transit.fwloader.plist
USER_PLIST_TEMPLATE := com.maudio.transit.fwloader.user.plist
USER_LOG := $(HOME)/Library/Logs/maudio_iokit_loader.log
USER_DOMAIN := gui/$(shell id -u)
empty :=
space := $(empty) $(empty)
FW_DIR_SRC ?= $(CURDIR)/extracted$(space)boot_fw_maudio
USER_FW_DIR ?= $(HOME)/Library/Application$(space)Support/MaudioTransit/firmware
SYSTEM_FW_DIR ?= /Library/Application$(space)Support/MaudioTransit/firmware
WATCH_DEBUG ?= 0
DEBUG_ARG :=
ifneq ($(WATCH_DEBUG),0)
DEBUG_ARG := --debug
endif
SYSTEM_LOG := /var/log/maudio_iokit_loader.log

.PHONY: all clean install uninstall install-user uninstall-user install-system uninstall-system

all: $(TARGET)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(TARGET): $(SRC) | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $(SRC) $(LDFLAGS)

clean:
	rm -f $(TARGET)

install: install-user

uninstall: uninstall-user

install-user: $(TARGET)
	mkdir -p "$(USER_BIN_DIR)" "$(USER_LAUNCHD_DIR)" "$(USER_FW_DIR)"
	cp -R "$(FW_DIR_SRC)/." "$(USER_FW_DIR)/"
	install -m 0755 $(TARGET) $(USER_INSTALL_BIN)
	sed -e "s#__BIN_PATH__#$(USER_INSTALL_BIN)#g" \
	    -e "s#__LOG_PATH__#$(USER_LOG)#g" \
	    -e "s#__FW_DIR__#$(USER_FW_DIR)#g" \
	    -e "s#__DEBUG_FLAG__#$(DEBUG_ARG)#g" \
	    $(USER_PLIST_TEMPLATE) | grep -v '<string></string>' > $(USER_LAUNCHD_PLIST)
	$(LAUNCHCTL) bootout $(USER_DOMAIN) $(USER_LAUNCHD_PLIST) 2>/dev/null || true
	$(LAUNCHCTL) bootstrap $(USER_DOMAIN) $(USER_LAUNCHD_PLIST)
	$(LAUNCHCTL) kickstart -k $(USER_DOMAIN)/com.maudio.transit.fwloader

uninstall-user:
	$(LAUNCHCTL) bootout $(USER_DOMAIN) $(USER_LAUNCHD_PLIST) 2>/dev/null || true
	rm -f $(USER_LAUNCHD_PLIST)
	rm -f $(USER_INSTALL_BIN)

install-system: $(TARGET)
	mkdir -p "$(SYSTEM_FW_DIR)"
	cp -R "$(FW_DIR_SRC)/." "$(SYSTEM_FW_DIR)/"
	install -m 0755 $(TARGET) $(INSTALL_BIN)
	sed -e "s#__BIN_PATH__#$(INSTALL_BIN)#g" \
	    -e "s#__LOG_PATH__#$(SYSTEM_LOG)#g" \
	    -e "s#__FW_DIR__#$(SYSTEM_FW_DIR)#g" \
	    -e "s#__DEBUG_FLAG__#$(DEBUG_ARG)#g" \
	    $(LAUNCHD_PLIST) | grep -v '<string></string>' > $(LAUNCHD_PATH)
	$(LAUNCHCTL) bootout system $(LAUNCHD_PATH) 2>/dev/null || true
	$(LAUNCHCTL) bootstrap system $(LAUNCHD_PATH)
	$(LAUNCHCTL) kickstart -k system/com.maudio.transit.fwloader

uninstall-system:
	$(LAUNCHCTL) bootout system $(LAUNCHD_PATH) 2>/dev/null || true
	rm -f $(LAUNCHD_PATH)
	rm -f $(INSTALL_BIN)
