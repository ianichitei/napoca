/*
* Copyright (c) 2020 Bitdefender
* SPDX-License-Identifier: Apache-2.0
*/

#ifndef _NAPOCA_COMPATIBILITY_H_
#define _NAPOCA_COMPATIBILITY_H_

// WINGUESTDLL<->WINGUEST.SYS
#define WINGUESTDLL_VERSION_REQUIRED_BY_WINGUESTSYS_MJ  1
#define WINGUESTDLL_VERSION_REQUIRED_BY_WINGUESTSYS_MN  12
#define WINGUESTDLL_VERSION_REQUIRED_BY_WINGUESTSYS_REV 0
#define WINGUESTDLL_VERSION_REQUIRED_BY_WINGUESTSYS_BLD 0

#define WINGUESTDLL_VERSION_REQUIRED_BY_WINGUESTSYS     WINGUESTDLL_VERSION_REQUIRED_BY_WINGUESTSYS_MJ,WINGUESTDLL_VERSION_REQUIRED_BY_WINGUESTSYS_MN,WINGUESTDLL_VERSION_REQUIRED_BY_WINGUESTSYS_REV,WINGUESTDLL_VERSION_REQUIRED_BY_WINGUESTSYS_BLD

#define WINGUESTSYS_VERSION_REQUIRED_BY_WINGUESTDLL_MJ  1
#define WINGUESTSYS_VERSION_REQUIRED_BY_WINGUESTDLL_MN  12
#define WINGUESTSYS_VERSION_REQUIRED_BY_WINGUESTDLL_REV 0
#define WINGUESTSYS_VERSION_REQUIRED_BY_WINGUESTDLL_BLD 0

#define WINGUESTSYS_VERSION_REQUIRED_BY_WINGUESTDLL     WINGUESTSYS_VERSION_REQUIRED_BY_WINGUESTDLL_MJ,WINGUESTSYS_VERSION_REQUIRED_BY_WINGUESTDLL_MN,WINGUESTSYS_VERSION_REQUIRED_BY_WINGUESTDLL_REV,WINGUESTSYS_VERSION_REQUIRED_BY_WINGUESTDLL_BLD

// WINGUEST.SYS<->NAPOCA.BIN
#define WINGUESTSYS_VERSION_REQUIRED_BY_NAPOCA_MJ       1
#define WINGUESTSYS_VERSION_REQUIRED_BY_NAPOCA_MN       12
#define WINGUESTSYS_VERSION_REQUIRED_BY_NAPOCA_REV      0
#define WINGUESTSYS_VERSION_REQUIRED_BY_NAPOCA_BLD      0

#define WINGUESTSYS_VERSION_REQUIRED_BY_NAPOCA          WINGUESTSYS_VERSION_REQUIRED_BY_NAPOCA_MJ,WINGUESTSYS_VERSION_REQUIRED_BY_NAPOCA_MN,WINGUESTSYS_VERSION_REQUIRED_BY_NAPOCA_REV,WINGUESTSYS_VERSION_REQUIRED_BY_NAPOCA_BLD

#define NAPOCA_VERSION_REQUIRED_BY_WINGUESTSYS_MJ       1
#define NAPOCA_VERSION_REQUIRED_BY_WINGUESTSYS_MN       12
#define NAPOCA_VERSION_REQUIRED_BY_WINGUESTSYS_REV      0
#define NAPOCA_VERSION_REQUIRED_BY_WINGUESTSYS_BLD      0

#define NAPOCA_VERSION_REQUIRED_BY_WINGUESTSYS          NAPOCA_VERSION_REQUIRED_BY_WINGUESTSYS_MJ,NAPOCA_VERSION_REQUIRED_BY_WINGUESTSYS_MN, NAPOCA_VERSION_REQUIRED_BY_WINGUESTSYS_REV,NAPOCA_VERSION_REQUIRED_BY_WINGUESTSYS_BLD

// FALX.SYS <-> NAPOCA.BIN
#define FALXSYS_VERSION_REQUIRED_BY_NAPOCA_MJ           1
#define FALXSYS_VERSION_REQUIRED_BY_NAPOCA_MN           12
#define FALXSYS_VERSION_REQUIRED_BY_NAPOCA_REV          0
#define FALXSYS_VERSION_REQUIRED_BY_NAPOCA_BLD          0

#define FALXSYS_VERSION_REQUIRED_BY_NAPOCA              FALXSYS_VERSION_REQUIRED_BY_NAPOCA_MJ,FALXSYS_VERSION_REQUIRED_BY_NAPOCA_MN,FALXSYS_VERSION_REQUIRED_BY_NAPOCA_REV,FALXSYS_VERSION_REQUIRED_BY_NAPOCA_BLD

#define NAPOCA_VERSION_REQUIRED_BY_FALXSYS_MJ           1
#define NAPOCA_VERSION_REQUIRED_BY_FALXSYS_MN           12
#define NAPOCA_VERSION_REQUIRED_BY_FALXSYS_REV          0
#define NAPOCA_VERSION_REQUIRED_BY_FALXSYS_BLD          0

#define NAPOCA_VERSION_REQUIRED_BY_FALXSYS              NAPOCA_VERSION_REQUIRED_BY_FALXSYS_MJ,NAPOCA_VERSION_REQUIRED_BY_FALXSYS_MN,NAPOCA_VERSION_REQUIRED_BY_FALXSYS_REV,NAPOCA_VERSION_REQUIRED_BY_FALXSYS_BLD

// FALXDLL<->FALX.SYS
#define FALXDLL_VERSION_REQUIRED_BY_FALXSYS_MJ          1
#define FALXDLL_VERSION_REQUIRED_BY_FALXSYS_MN          12
#define FALXDLL_VERSION_REQUIRED_BY_FALXSYS_REV         0
#define FALXDLL_VERSION_REQUIRED_BY_FALXSYS_BLD         0

#define FALXDLL_VERSION_REQUIRED_BY_FALXSYS             FALXDLL_VERSION_REQUIRED_BY_FALXSYS_MJ,FALXDLL_VERSION_REQUIRED_BY_FALXSYS_MN,FALXDLL_VERSION_REQUIRED_BY_FALXSYS_REV,FALXDLL_VERSION_REQUIRED_BY_FALXSYS_BLD

#define FALXSYS_VERSION_REQUIRED_BY_FALXDLL_MJ          1
#define FALXSYS_VERSION_REQUIRED_BY_FALXDLL_MN          12
#define FALXSYS_VERSION_REQUIRED_BY_FALXDLL_REV         0
#define FALXSYS_VERSION_REQUIRED_BY_FALXDLL_BLD         0

#define FALXSYS_VERSION_REQUIRED_BY_FALXDLL             FALXSYS_VERSION_REQUIRED_BY_FALXDLL_MJ,FALXSYS_VERSION_REQUIRED_BY_FALXDLL_MN,FALXSYS_VERSION_REQUIRED_BY_FALXDLL_REV,FALXSYS_VERSION_REQUIRED_BY_FALXDLL_BLD

//
// Intro supported version range (min <= supported
//
#define INTRO_MIN_SUPPORTED_MAJOR           1
#define INTRO_MIN_SUPPORTED_MINOR           126

#endif // _NAPOCA_COMPATIBILITY_H_
