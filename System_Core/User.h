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
	名字:User
	时间:20220413-0021
	程序员:梁源康
	说明:用户设置表
*/
#ifndef _XEROLYSKINNER_USER_H
#define _XEROLYSKINNER_USER_H
//////////////////////////////////////////////////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------------
//	定义
//	
//<<< Use Configuration Wizard in Context Menu >>>
//<h>调试模式设置
//<e>开发者调试模式
//</e>
//<i>仅供开发者开启该选项
#define				__DEBUG__				1
//</h>
//<<< end of configuration section >>>
//////////////////////////////////////////////////////////////////////////////////////////////////////
//====================================================================================================
//	宏定义解析
	#if				__DEBUG__
		#define		text(format, ...)	printf(format, ##__VA_ARGS__)
	#else
		#define		text(format, ...)
	#endif
#endif
