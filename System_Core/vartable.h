/*----------------------------------------------------------------------------------------------------
#	THIS FILE IS PART OF XEROLYSKINNER'S PROJECT
#
#	THIS PROGRAM IS FREE SOFTWARE
#
#	E-mail:ZABBCCCBBAZ@163.com
#	QQ:2715099320
#
#	Copyright (c) 2022 XerolySkinner
#	All rights reserved.
*/

/*----------------------------------------------------------------------------------------------------
	����:vartable
	ʱ��:20220413-0014
	����Ա:��Դ��
	˵��:ȫ�ֱ�����
*/
#ifndef _XEROLYSKINNER_VARTABLE_H
#define _XEROLYSKINNER_VARTABLE_H
//////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------------
//	����
//	
#include "User.h"
#include "BasicDefine.h"
#include "main.h"
#include "dma.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

#include "stdio.h"
//////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------------
//	�궨��
//	

#define		KEY0			(PEin(4))
#define		KEY1			(PEin(3))
#define		oLED0			(PBout(5))
#define		oLED1			(PEout(5))
#define		iLED0			(PBin(5))
#define		iLED1			(PEin(5))
#define		swLED0()		(oLED0=!iLED0)
#define		swLED1()		(oLED1=!iLED1)
//////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------------
//	����
//	
void mainInit(void);
void mainCore(void);
#endif
