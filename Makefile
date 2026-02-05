CC ?= clang
CFLAGS ?= -Wall -Wextra -O2
LDFLAGS ?= -framework IOKit -framework CoreFoundation

BIN_DIR := bin
TARGET := $(BIN_DIR)/maudio_iokit_loader
SRC := maudio_iokit_loader.c

.PHONY: all clean

all: $(TARGET)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(TARGET): $(SRC) | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $(SRC) $(LDFLAGS)

clean:
	rm -f $(TARGET)
