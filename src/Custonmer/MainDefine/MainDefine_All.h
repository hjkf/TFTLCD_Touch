/*
 * MainDefine_All.h
 *
 *  Created on: 2020��2��15��
 *      Author: HJKF
 */

#ifndef CUSTONMER_MAINDEFINE_MAINDEFINE_ALL_H_
#define CUSTONMER_MAINDEFINE_MAINDEFINE_ALL_H_


#include "../../CustomerDataSetting.h"

#if Customer==TFTLCD_Touch
#include "MainDefine_1.h"
#endif

#if Customer==FLASH_EEPROM
#include "MainDefine_2.h"
#endif

#if Customer==MALLOC
#include "MainDefine_3.h"
#endif



#endif /* CUSTONMER_MAINDEFINE_MAINDEFINE_ALL_H_ */
