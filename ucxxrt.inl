/*
 * PROJECT:   Universal C++ RunTime (UCXXRT)
 * FILE:      ucxxrt.inl
 * DATA:      2021/05/03
 *
 * PURPOSE:   Universal C++ RunTime
 *
 * LICENSE:   Relicensed under The MIT License from The CC BY 4.0 License
 *
 * DEVELOPER: MiroKaku (miro.kaku AT Outlook.com)
 */

#pragma once

#define _VCRT_BUILD
#define _CRT_ENABLE_SELECTANY_NOTHROW

#if __has_include(<wdm.h>)
#   ifndef  _KERNEL_MODE
#       define  _KERNEL_MODE 1
#   endif

#   include <wdm.h>
#   include <ntddk.h>
#else
#   include <Windows.h>
#endif

#include <stddef.h>
#include <stdlib.h>
#include <minwindef.h>

#include "ucxxrt.h"
