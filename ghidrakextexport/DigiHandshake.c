#include "kext_defs.h"

// DigiHandshake::Stage1(long, long*, long*)

void DigiHandshake::Stage1(long param_1,long *param_2,long *param_3)

{
  *param_2 = (param_1 % 0x1f31d) * 0x41a7;
  *param_3 = param_1 / 0x1f31d;
  return;
}



// DigiHandshake::Stage4(long, long)

int DigiHandshake::Stage4(long param_1,long param_2)

{
  s3 = param_2;
  return param_1 % 0x2cf535 + 0x496143;
}



// DigiHandshake::Stage2(long)

int DigiHandshake::Stage2(long param_1)

{
  return param_1 * 0xb14;
}



// DigiHandshake::Stage3(long, long, long*)

void DigiHandshake::Stage3(long param_1,long param_2,long *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  *param_3 = iVar1;
  if (iVar1 < 0) {
    *param_3 = iVar1 + 0x7fffffff;
  }
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    _sDigiHandshakePropertyNameStrLen = _strlen("LatencyProfiler");
  }
  return;
}



// DigiHandshake::Do(long)

uint DigiHandshake::Do(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = sStage;
  }
  uVar2 = 0;
  sStage = uVar1;
  switch(uVar1) {
  case 0:
    uVar2 = 0;
    sStage = 1;
    s3 = 0;
    s2 = 0;
    s1 = 0;
    break;
  case 1:
    sStage = 2;
    s2 = param_1 / 0x1f31d;
    uVar2 = (param_1 % 0x1f31d) * 0x41a7;
    s1 = uVar2 ^ 0x41a7;
    break;
  case 2:
    s2 = s2 * 0xb14;
    sStage = 3;
    s3 = param_1 % 0x2cf535 + 0x496143;
    uVar2 = (int)s2 % 0xb14;
    break;
  case 3:
    sStage = 4;
    s3 = param_1 - s2;
    if ((int)s3 < 0) {
      s3 = s3 + 0x7fffffff;
    }
    s2 = s2 ^ s3;
    uVar2 = s3;
    s3 = (int)s3 % 0x1f31d;
    break;
  case 4:
    sStage = 0;
    s2 = (int)s1 % 0x41a7;
    uVar2 = param_1 % 0x2cf535 + 0x496143;
    s3 = (int)s2 % 0x1f31d;
  }
  return uVar2;
}



// HandleDigiHandshakeProperty(char const*)

undefined4 HandleDigiHandshakeProperty(char *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = _strncmp(param_1,"LatencyProfiler",_sDigiHandshakePropertyNameStrLen);
  uVar3 = 0;
  if (iVar1 == 0) {
    if (param_1[_sDigiHandshakePropertyNameStrLen] == '\0') {
      iVar1 = 0;
      iVar4 = 0;
    }
    else {
      lVar2 = _strtol(param_1 + _sDigiHandshakePropertyNameStrLen,(char **)0x0,10);
      iVar1 = DigiHandshake::Do(lVar2);
      iVar4 = iVar1 >> 0x1f;
    }
    uVar3 = OSNumber::withNumber(CONCAT44(iVar4,iVar1),0x20);
  }
  return uVar3;
}



void _ConvertGainInDbToFloat32(uint param_1,float *param_2)

{
  if (param_2 != (float *)0x0) {
    *param_2 = (float)(param_1 >> 8 & 0xff) + (float)(param_1 & 0xff) / 255.0;
  }
  return;
}



uint _ConvertGainInDbToIndex(int param_1)

{
  uint uVar1;
  float local_10 [3];
  
  uVar1 = 0x40;
  if (param_1 != 0) {
    local_10[0] = 1.0;
    _ConvertGainInDbToFloat32(param_1,local_10);
    uVar1 = 0;
    if ((-32.0 <= local_10[0]) && (uVar1 = 0x80, local_10[0] <= 32.0)) {
      return (int)(local_10[0] + 32.0 + local_10[0] + 32.0 + 0.5) & 0xffff;
    }
  }
  return uVar1;
}



void _ConvertSInt16LEToFloat32(short *param_1,float *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = 0;
    do {
      sVar1 = *param_1;
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
      *param_2 = (float)(int)sVar1 * 3.0517578e-05;
      param_2 = param_2 + 1;
    } while (param_3 != iVar2);
  }
  return;
}



void _ConvertSInt24LEToFloat32(uint *param_1,float *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 < 2) {
    *param_2 = (float)(int)(int3)*param_1 * 1.1920929e-07;
    return;
  }
  do {
    param_3 = param_3 - 1;
    uVar1 = *param_1 & 0xffffff;
    if (0x7fffff < uVar1) {
      uVar1 = uVar1 | 0xff000000;
    }
    param_1 = (uint *)((int)param_1 + 3);
    *param_2 = (float)(int)uVar1 * 1.1920929e-07;
    param_2 = param_2 + 1;
  } while (1 < param_3);
  *param_2 = (float)(int)*(int3 *)param_1 * 1.1920929e-07;
  return;
}



void _ConvertSInt32LEToFloat32(int *param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
      *param_2 = (float)iVar1 * 4.656613e-10;
      param_2 = param_2 + 1;
    } while (param_3 != iVar2);
  }
  return;
}



void _ClipFloat32ToSInt32BE(float *param_1,uint *param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  
  if (param_3 != 0) {
    iVar3 = 0;
    do {
      fVar1 = *param_1;
      fVar4 = 2.1474836e+09;
      if ((fVar1 <= 1.0) && (fVar4 = -2.1474836e+09, -1.0 <= fVar1)) {
        fVar4 = fVar1 * 2.1474836e+09;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
      uVar2 = (uint)(short)(int)fVar4;
      *param_2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      param_2 = param_2 + 1;
    } while (param_3 != iVar3);
  }
  return;
}



void _ConvertSInt24LEToFloat32InDriver(uint *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int local_24;
  
  if (*(uint *)(param_4 + 0x40) < 9) {
    uVar3 = 0;
    local_24 = 0;
    if (param_3 != 0) {
      do {
        if (*(char *)(param_4 + uVar3 * 8) == '\0') {
          fVar4 = (float)(*param_1 & 0xffffff) / 8388607.0;
          *param_2 = fVar4;
          uVar2 = *(ushort *)(param_4 + 2 + uVar3 * 8);
          if (((*(char *)(param_4 + 0x45) != '\0') && (uVar2 != 0x40)) && (uVar2 < 0x81)) {
            *param_2 = fVar4 * *(float *)(&_kGainDbToLinear + (uint)uVar2 * 4);
          }
          if (*(char *)(param_4 + 0x46) != '\0') {
            if (*(char *)(param_4 + uVar3 * 8) == '\0') {
              fVar4 = *param_2;
              if (fVar4 < 0.0) {
                if (fVar4 < -*(float *)(param_4 + 4 + uVar3 * 8)) {
                  fVar4 = -fVar4;
                  goto LAB_000147a2;
                }
              }
              else {
                pfVar1 = (float *)(param_4 + 4 + uVar3 * 8);
                if (*pfVar1 <= fVar4 && fVar4 != *pfVar1) {
LAB_000147a2:
                  *(float *)(param_4 + 4 + uVar3 * 8) = fVar4;
                }
              }
            }
            else {
              *(undefined4 *)(param_4 + 4 + uVar3 * 8) = 0;
            }
          }
          if ((uVar2 != 0x40) && (*(char *)(param_4 + 0x45) != '\0')) {
            fVar4 = *param_2;
            fVar5 = -1.0;
            if (-1.0 <= fVar4) {
              fVar5 = fVar4;
            }
            *param_2 = (float)(~-(uint)(fVar4 <= 1.0) & (uint)1.0 |
                              (uint)fVar5 & -(uint)(fVar4 <= 1.0));
          }
        }
        else {
          *param_2 = 0.0;
        }
        uVar3 = uVar3 + 1;
        param_1 = (uint *)((int)param_1 + 3);
        if (*(uint *)(param_4 + 0x40) <= uVar3) {
          uVar3 = 0;
        }
        local_24 = local_24 + 1;
        param_2 = param_2 + 1;
      } while (param_3 != local_24);
    }
  }
  return;
}



void _ClipFloat32ToSInt16LE(float *param_1,undefined2 *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  if (param_3 != 0) {
    iVar2 = 0;
    do {
      while ((fVar1 = *param_1, fVar3 = 32767.0, fVar1 <= 1.0 && (fVar3 = -32767.0, -1.0 <= fVar1)))
      {
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 1;
        *param_2 = (short)(int)(fVar1 * 32767.0);
        param_2 = param_2 + 1;
        if (param_3 == iVar2) {
          return;
        }
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
      *param_2 = (short)(int)fVar3;
      param_2 = param_2 + 1;
    } while (param_3 != iVar2);
  }
  return;
}



void _ClipFloat32ToSInt16BE(float *param_1,ushort *param_2,int param_3)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  float fVar4;
  
  if (param_3 != 0) {
    iVar3 = 0;
    do {
      while ((fVar1 = *param_1, fVar4 = 32767.0, fVar1 <= 1.0 && (fVar4 = -32767.0, -1.0 <= fVar1)))
      {
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 1;
        uVar2 = (ushort)(int)(fVar1 * 32767.0);
        *param_2 = uVar2 << 8 | uVar2 >> 8;
        param_2 = param_2 + 1;
        if (param_3 == iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
      *param_2 = (ushort)(int)fVar4 << 8 | (ushort)(int)fVar4 >> 8;
      param_2 = param_2 + 1;
    } while (param_3 != iVar3);
  }
  return;
}



void _ClipFloat32ToSInt24LE(float *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (3 < param_3) {
    fVar7 = 8388607.0;
    do {
      fVar6 = *param_1;
      fVar5 = fVar7;
      if ((1.0 < fVar6) || (fVar5 = -8388607.0, fVar6 < -1.0)) {
        fVar4 = param_1[1];
        uVar3 = (uint)fVar5;
        fVar6 = 8388607.0;
        if (fVar4 <= 1.0) goto LAB_000149e0;
LAB_00014935:
        fVar5 = param_1[2];
        uVar2 = (uint)fVar6;
        fVar6 = 8388607.0;
        if (1.0 < fVar5) goto LAB_0001494a;
LAB_00014a10:
        fVar6 = -8388607.0;
        if (fVar5 < -1.0) goto LAB_0001494a;
        fVar4 = param_1[3];
        fVar6 = fVar5 * 8388607.0;
      }
      else {
        fVar4 = param_1[1];
        uVar3 = (uint)(fVar6 * 8388607.0);
        fVar6 = fVar7;
        if (1.0 < fVar4) goto LAB_00014935;
LAB_000149e0:
        fVar6 = -8388607.0;
        if (fVar4 < -1.0) goto LAB_00014935;
        fVar5 = param_1[2];
        uVar2 = (uint)(fVar4 * 8388607.0);
        fVar6 = fVar7;
        if (fVar5 <= 1.0) goto LAB_00014a10;
LAB_0001494a:
        fVar4 = param_1[3];
      }
      fVar5 = 8388607.0;
      if ((fVar4 <= 1.0) && (fVar5 = -8388607.0, -1.0 <= fVar4)) {
        fVar5 = fVar4 * 8388607.0;
      }
      param_1 = param_1 + 4;
      param_2[1] = uVar2 >> 8 & 0xffff | (int)fVar6 << 0x10;
      *param_2 = uVar3 & 0xffffff | uVar2 << 0x18;
      param_2[2] = (uint)(int)fVar6 >> 0x10 & 0xff | (int)fVar5 << 8;
      param_2 = param_2 + 3;
      param_3 = param_3 - 4;
    } while (3 < param_3);
  }
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      while( true ) {
        fVar7 = *param_1;
        param_1 = param_1 + 1;
        fVar6 = 8388607.0;
        if ((1.0 < fVar7) || (fVar6 = -8388607.0, fVar7 < -1.0)) break;
        uVar3 = uVar3 + 1;
        iVar1 = (int)(fVar7 * 8388607.0);
        *(char *)param_2 = (char)iVar1;
        *(char *)((int)param_2 + 1) = (char)((uint)iVar1 >> 8);
        *(char *)((int)param_2 + 2) = (char)((uint)iVar1 >> 0x10);
        param_2 = (uint *)((int)param_2 + 3);
        if (param_3 == uVar3) {
          return;
        }
      }
      iVar1 = (int)fVar6;
      *(char *)param_2 = (char)iVar1;
      *(char *)((int)param_2 + 1) = (char)((uint)iVar1 >> 8);
      uVar3 = uVar3 + 1;
      *(char *)((int)param_2 + 2) = (char)((uint)iVar1 >> 0x10);
      param_2 = (uint *)((int)param_2 + 3);
    } while (param_3 != uVar3);
  }
  return;
}



void _ClipFloat32ToSInt24BE(float *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *local_38;
  uint local_2c;
  uint local_28;
  
  local_38 = param_2;
  if (param_3 >> 2 != 0) {
    local_28 = 0;
    do {
      fVar2 = *param_1 * 2.1474836e+09 + 128.0;
      fVar5 = param_1[1] * 2.1474836e+09 + 128.0;
      fVar4 = param_1[2] * 2.1474836e+09 + 128.0;
      fVar3 = param_1[3] * 2.1474836e+09 + 128.0;
      uVar8 = 0x7fffff;
      if ((fVar2 < 2.1474835e+09) && (uVar8 = 0xff800000, -2.1474836e+09 < fVar2)) {
        uVar8 = (int)fVar2 >> 8;
      }
      uVar9 = 0x7fffff;
      if ((fVar5 < 2.1474835e+09) && (uVar9 = 0xff800000, -2.1474836e+09 < fVar5)) {
        uVar9 = (int)fVar5 >> 8;
      }
      local_2c = 0x7fffff;
      if ((fVar4 < 2.1474835e+09) && (local_2c = 0xff800000, -2.1474836e+09 < fVar4)) {
        local_2c = (int)fVar4 >> 8;
      }
      uVar7 = 0x7fffff;
      if ((fVar3 < 2.1474835e+09) && (uVar7 = 0xff800000, -2.1474836e+09 < fVar3)) {
        uVar7 = (int)fVar3 >> 8;
      }
      param_1 = param_1 + 4;
      *local_38 = (uVar9 & 0xff0000) << 8 | (uVar8 & 0xff) << 0x10 | uVar8 & 0xff00 |
                  (int)(uVar8 & 0xff0000) >> 0x10;
      local_38[1] = (local_2c & 0xff00) << 0x10 | local_2c & 0xff0000 | (uVar9 & 0xff) << 8 |
                    uVar9 >> 8 & 0xff;
      local_38[2] = uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | (int)(uVar7 & 0xff0000) >> 8 |
                    local_2c & 0xff;
      local_38 = local_38 + 3;
      local_28 = local_28 + 1;
    } while (local_28 != param_3 >> 2);
  }
  iVar6 = (param_3 & 3) - 1;
  if (iVar6 != -1) {
    puVar1 = (uint *)((int)local_38 + iVar6 * 3 + 3);
    do {
      fVar2 = *param_1;
      iVar6 = 0x7fffff;
      param_1 = param_1 + 1;
      fVar2 = fVar2 * 2.1474836e+09 + 128.0;
      if ((fVar2 < 2.1474835e+09) && (iVar6 = -0x800000, -2.1474836e+09 < fVar2)) {
        iVar6 = (int)fVar2 >> 8;
      }
      *(char *)local_38 = (char)((uint)iVar6 >> 0x10);
      *(char *)((int)local_38 + 1) = (char)((uint)iVar6 >> 8);
      *(char *)((int)local_38 + 2) = (char)iVar6;
      local_38 = (uint *)((int)local_38 + 3);
    } while (puVar1 != local_38);
  }
  return;
}



void _ClipFloat32ToSInt16LE_4(float *param_1,undefined2 *param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = param_3 & 3;
  for (; uVar2 < param_3; param_3 = param_3 - 4) {
    fVar5 = *param_1;
    fVar4 = param_1[1];
    fVar3 = param_1[2];
    fVar1 = param_1[3];
    param_1 = param_1 + 4;
    fVar6 = 32767.0;
    if ((fVar5 <= 0.9999695) && (fVar6 = -32768.0, -1.0 <= fVar5)) {
      fVar6 = fVar5 * 32768.0;
    }
    fVar5 = 32767.0;
    if ((fVar4 <= 0.9999695) && (fVar5 = -32768.0, -1.0 <= fVar4)) {
      fVar5 = fVar4 * 32768.0;
    }
    fVar4 = 32767.0;
    if ((fVar3 <= 0.9999695) && (fVar4 = -32768.0, -1.0 <= fVar3)) {
      fVar4 = fVar3 * 32768.0;
    }
    fVar3 = 32767.0;
    if ((fVar1 <= 0.9999695) && (fVar3 = -32768.0, -1.0 <= fVar1)) {
      fVar3 = fVar1 * 32768.0;
    }
    *param_2 = (short)(int)fVar6;
    param_2[1] = (short)(int)fVar5;
    param_2[2] = (short)(int)fVar4;
    param_2[3] = (short)(int)fVar3;
    param_2 = param_2 + 4;
  }
  if (param_3 != 0) {
    uVar2 = 0;
    do {
      fVar5 = *param_1;
      param_1 = param_1 + 1;
      fVar4 = 32767.0;
      if ((fVar5 <= 0.9999695) && (fVar4 = -32768.0, -1.0 <= fVar5)) {
        fVar4 = fVar5 * 32768.0;
      }
      uVar2 = uVar2 + 1;
      *param_2 = (short)(int)fVar4;
      param_2 = param_2 + 1;
    } while (param_3 != uVar2);
  }
  return;
}



void _ClipFloat32ToSInt24LE_4(float *param_1,uint *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar5 = param_3 & 3;
  for (; uVar5 < param_3; param_3 = param_3 - 4) {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar3 = param_1[2];
    fVar4 = param_1[3];
    dVar10 = (double)fVar1;
    param_1 = param_1 + 4;
    if (0.9999998807907 < dVar10) {
      dVar10 = 0.9999998807907104;
LAB_00014f64:
      if (fVar2 <= 0.9999999) goto LAB_00015060;
LAB_00014f76:
      dVar9 = 0.9999998807907104;
LAB_00014f7a:
      if (fVar3 <= 0.9999999) goto LAB_00015090;
LAB_00014f8c:
      dVar7 = 0.9999998807907104;
LAB_00014f90:
      if (fVar4 <= 0.9999999) goto LAB_000150c0;
LAB_00014fa2:
      dVar8 = 0.9999998807907104;
    }
    else {
      if (-1.0 <= fVar1) goto LAB_00014f64;
      dVar10 = -1.0;
      if (0.9999999 < fVar2) goto LAB_00014f76;
LAB_00015060:
      dVar9 = (double)fVar2;
      if (-1.0 <= fVar2) goto LAB_00014f7a;
      dVar9 = -1.0;
      if (0.9999999 < fVar3) goto LAB_00014f8c;
LAB_00015090:
      dVar7 = (double)fVar3;
      if (-1.0 <= fVar3) goto LAB_00014f90;
      dVar7 = -1.0;
      if (0.9999999 < fVar4) goto LAB_00014fa2;
LAB_000150c0:
      dVar8 = (double)fVar4;
      if (fVar4 < -1.0) {
        dVar8 = -1.0;
      }
    }
    param_2[1] = ((int)(dVar7 * 2147483648.0) & 0xffff00U) << 8 |
                 (uint)(int)(dVar9 * 2147483648.0) >> 0x10;
    *param_2 = ((int)(dVar9 * 2147483648.0) & 0xff00U) << 0x10 |
               (uint)(int)(dVar10 * 2147483648.0) >> 8;
    param_2[2] = (int)(dVar8 * 2147483648.0) & 0xffffff00U |
                 (uint)(int)(dVar7 * 2147483648.0) >> 0x18;
    param_2 = param_2 + 3;
  }
  if (param_3 != 0) {
    uVar5 = 0;
    do {
      while( true ) {
        fVar1 = *param_1;
        param_1 = param_1 + 1;
        dVar10 = (double)fVar1;
        if (dVar10 <= 0.9999998807907) break;
        dVar10 = 0.9999998807907104;
LAB_00015124:
        iVar6 = (int)(dVar10 * 2147483648.0);
        *(char *)param_2 = (char)((uint)iVar6 >> 8);
        uVar5 = uVar5 + 1;
        *(char *)((int)param_2 + 1) = (char)((uint)iVar6 >> 0x10);
        *(char *)((int)param_2 + 2) = (char)((uint)iVar6 >> 0x18);
        param_2 = (uint *)((int)param_2 + 3);
        if (param_3 == uVar5) {
          return;
        }
      }
      if (-1.0 <= fVar1) goto LAB_00015124;
      uVar5 = uVar5 + 1;
      *(undefined1 *)param_2 = 0;
      *(undefined1 *)((int)param_2 + 1) = 0;
      *(undefined1 *)((int)param_2 + 2) = 0x80;
      param_2 = (uint *)((int)param_2 + 3);
    } while (param_3 != uVar5);
  }
  return;
}



void _ClipFloat32ToSInt32LE_4(float *param_1,int *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar5 = param_3 & 3;
  for (; uVar5 < param_3; param_3 = param_3 - 4) {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar3 = param_1[2];
    fVar4 = param_1[3];
    dVar9 = (double)fVar1;
    param_1 = param_1 + 4;
    if (0.999999881 < dVar9) {
      dVar9 = 0.9999998807907104;
LAB_000151d4:
      if (fVar2 <= 0.9999999) goto LAB_000152b0;
LAB_000151e6:
      dVar8 = 0.9999998807907104;
LAB_000151ea:
      if (fVar3 <= 0.9999999) goto LAB_000152e0;
LAB_000151fc:
      dVar7 = 0.9999998807907104;
LAB_00015200:
      if (fVar4 <= 0.9999999) goto LAB_00015310;
LAB_00015212:
      dVar6 = 0.9999998807907104;
    }
    else {
      if (-1.0 <= fVar1) goto LAB_000151d4;
      dVar9 = -1.0;
      if (0.9999999 < fVar2) goto LAB_000151e6;
LAB_000152b0:
      dVar8 = (double)fVar2;
      if (-1.0 <= fVar2) goto LAB_000151ea;
      dVar8 = -1.0;
      if (0.9999999 < fVar3) goto LAB_000151fc;
LAB_000152e0:
      dVar7 = (double)fVar3;
      if (-1.0 <= fVar3) goto LAB_00015200;
      dVar7 = -1.0;
      if (0.9999999 < fVar4) goto LAB_00015212;
LAB_00015310:
      dVar6 = (double)fVar4;
      if (fVar4 < -1.0) {
        dVar6 = -1.0;
      }
    }
    *param_2 = (int)(dVar9 * 2147483648.0);
    param_2[1] = (int)(dVar8 * 2147483648.0);
    param_2[2] = (int)(dVar7 * 2147483648.0);
    param_2[3] = (int)(dVar6 * 2147483648.0);
    param_2 = param_2 + 4;
  }
  if (param_3 != 0) {
    uVar5 = 0;
    do {
      while( true ) {
        fVar1 = *param_1;
        param_1 = param_1 + 1;
        dVar9 = (double)fVar1;
        if (dVar9 <= 0.999999881) break;
        dVar9 = 0.9999998807907104;
LAB_00015364:
        uVar5 = uVar5 + 1;
        *param_2 = (int)(dVar9 * 2147483648.0);
        param_2 = param_2 + 1;
        if (param_3 == uVar5) {
          return;
        }
      }
      if (-1.0 <= fVar1) goto LAB_00015364;
      uVar5 = uVar5 + 1;
      *param_2 = -0x80000000;
      param_2 = param_2 + 1;
    } while (param_3 != uVar5);
  }
  return;
}



void _ConvertSInt24BEToFloat32(uint *param_1,float *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    return;
  }
  iVar2 = 0;
  do {
    uVar1 = *param_1;
    iVar2 = iVar2 + 1;
    param_1 = (uint *)((int)param_1 + 3);
    *param_2 = (float)((int)((uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) >> 8)
               / 8388607.0;
    param_2 = param_2 + 1;
  } while (param_3 != iVar2);
  return;
}



void _ConvertSInt32BEToFloat32(uint *param_1,float *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    return;
  }
  iVar2 = 0;
  do {
    uVar1 = *param_1;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    *param_2 = (float)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                           uVar1 << 0x18) * 4.656613e-10;
    param_2 = param_2 + 1;
  } while (param_3 != iVar2);
  return;
}



void _ConvertSInt16BEToFloat32(ushort *param_1,float *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    return;
  }
  iVar2 = 0;
  do {
    uVar1 = *param_1;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    *param_2 = (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) / 32767.0;
    param_2 = param_2 + 1;
  } while (param_3 != iVar2);
  return;
}



void _ConvertSInt16LEToFloat32InDriver(int param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (*(uint *)(param_4 + 0x40) < 9) {
    uVar3 = 0;
    iVar4 = 0;
    if (param_3 != 0) {
      do {
        if (*(char *)(param_4 + uVar3 * 8) == '\0') {
          fVar5 = (float)(int)*(short *)(param_1 + iVar4 * 2) / 32767.0;
          *param_2 = fVar5;
          uVar2 = *(ushort *)(param_4 + 2 + uVar3 * 8);
          if (((*(char *)(param_4 + 0x45) != '\0') && (uVar2 != 0x40)) && (uVar2 < 0x81)) {
            *param_2 = fVar5 * *(float *)(&_kGainDbToLinear + (uint)uVar2 * 4);
          }
          if (*(char *)(param_4 + 0x46) != '\0') {
            if (*(char *)(param_4 + uVar3 * 8) == '\0') {
              fVar5 = *param_2;
              if (fVar5 < 0.0) {
                if (fVar5 < -*(float *)(param_4 + 4 + uVar3 * 8)) {
                  fVar5 = -fVar5;
                  goto LAB_00015642;
                }
              }
              else {
                pfVar1 = (float *)(param_4 + 4 + uVar3 * 8);
                if (*pfVar1 <= fVar5 && fVar5 != *pfVar1) {
LAB_00015642:
                  *(float *)(param_4 + 4 + uVar3 * 8) = fVar5;
                }
              }
            }
            else {
              *(undefined4 *)(param_4 + 4 + uVar3 * 8) = 0;
            }
          }
          if ((uVar2 != 0x40) && (*(char *)(param_4 + 0x45) != '\0')) {
            fVar5 = *param_2;
            fVar6 = -1.0;
            if (-1.0 <= fVar5) {
              fVar6 = fVar5;
            }
            *param_2 = (float)(~-(uint)(fVar5 <= 1.0) & (uint)1.0 |
                              (uint)fVar6 & -(uint)(fVar5 <= 1.0));
          }
        }
        else {
          *param_2 = 0.0;
        }
        uVar3 = uVar3 + 1;
        if (*(uint *)(param_4 + 0x40) <= uVar3) {
          uVar3 = 0;
        }
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 1;
      } while (param_3 != iVar4);
    }
  }
  return;
}



void __start(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _OSRuntimeInitializeCPP(param_1,param_2);
  if ((iVar1 == 0) && (__realmain != GetControlInterfaceClass)) {
                    // WARNING: Could not recover jumptable at 0x00015681. Too many branches
                    // WARNING: Treating indirect jump as call
    (*__realmain)();
    return;
  }
  return;
}



void __stop(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _OSRuntimeFinalizeCPP(param_1,param_2);
  if ((iVar1 == 0) && (__antimain != GetControlInterfaceClass)) {
                    // WARNING: Could not recover jumptable at 0x000156be. Too many branches
                    // WARNING: Treating indirect jump as call
    (*__antimain)();
    return;
  }
  return;
}



undefined8 ___umoddi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_28;
  undefined4 local_20;
  
  local_20 = param_1;
  if (param_4 == 0) {
    if (param_2 < param_3) {
      param_1 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)param_3);
      param_2 = 0;
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      param_1 = (uint)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                      (ulonglong)param_3);
      param_2 = 0;
    }
  }
  else if (param_4 <= param_2) {
    uVar4 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    if ((uVar4 ^ 0x1f) != 0) {
      bVar3 = (byte)(uVar4 ^ 0x1f);
      local_28 = 0x20 - bVar3;
      uVar7 = param_4 << (bVar3 & 0x1f) | param_3 >> (local_28 & 0x1f);
      param_3 = param_3 << (bVar3 & 0x1f);
      uVar4 = param_1 << (bVar3 & 0x1f);
      uVar1 = CONCAT44(param_2 >> (local_28 & 0x1f),
                       param_2 << (bVar3 & 0x1f) | param_1 >> (local_28 & 0x1f));
      uVar5 = (uint)(uVar1 % (ulonglong)uVar7);
      lVar2 = (uVar1 / uVar7 & 0xffffffff) * (ulonglong)param_3;
      uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
      if ((uVar5 < uVar6) || (uVar4 < (uint)lVar2 && uVar5 == uVar6)) {
        lVar2 = lVar2 - CONCAT44(uVar7,param_3);
      }
      uVar5 = (uVar5 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(uVar4 < (uint)lVar2);
      return CONCAT44(uVar5 >> (bVar3 & 0x1f),
                      uVar4 - (uint)lVar2 >> (bVar3 & 0x1f) | uVar5 << (local_28 & 0x1f));
    }
    if (param_4 < param_2 || param_3 <= param_1) {
      local_20 = param_1 - param_3;
      param_2 = (param_2 - param_4) - (uint)(param_1 < param_3);
    }
    return CONCAT44(param_2,local_20);
  }
  return CONCAT44(param_2,param_1);
}


