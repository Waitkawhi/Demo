//==============================================================================
//
// Title:		can.h
// Purpose:		A short description of the interface.
//
// Created on:	2019-09-03 at 11:34:25 by xuf.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

#ifndef __can_H__
#define __can_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

#include "cvidef.h"

//==============================================================================
// Constants
#define MAX_DATA_LEN           8
#define PACKAGE_NUM            32
		
#define CAN_DATA_START_ID      0x550
#define SEND_FLAG_FRAME_ID     0x570
		
#define FORWARD_LEFT_DATA_START_ID      0x010
#define FORWARD_LEFT_DATA_END_ID        0x02F
#define FORWARD_LEFT_FLAG_FRAME_ID      0x030
		
#define FORWARD_RIGHT_DATA_START_ID     0x040		
#define FORWARD_RIGHT_DATA_END_ID       0x05F
#define FORWARD_RIGHT_FLAG_FRAME_ID     0x060		
		
#define RANGE_BIT_LENGTH       13U		
#define ANGLE_BIT_LENGTH       11U
#define SPEED_BIT_LENGTH       14U
		
#define INSTALL_FORWARD        1
#define INSTALL_BACKWARD	   -1
#define INSTALL_LEFT           -1
#define INSTALL_RIGHT          1
//==============================================================================
// Types

//==============================================================================
// External variables

//==============================================================================
// Global functions

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __can_H__ */
