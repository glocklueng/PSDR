#pragma once

#include "stm32f415xx.h"
#include "stm32f4xx.h"
//#include "core_cmInstr.h"
#include <stdio.h>
#include "stddef.h"
#include "diag/Trace.h"
#include "hal.h"
#include "adc.h"
#include "dds.h"
#include "Timer.h"
#include "BlinkLed.h"
//#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_hal_gpio.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9340.h"
#include "stm32f4xx_hal.h"
//#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_def.h"
#include "string.h"
#include "math.h"
#include "arm_math.h"
//#include "stm32f4xx_hal_rtc.h"
//#include "stm32f4xx_hal_adc.h"
#include "stm32f4xx_it.h"
#include "stm32f4xx_hal_tim.h"
#include "stm32f4xx_hal_cortex.h"
#include "misc.h"
#include "stm32f4xx_hal_dac.h"

#include "images.h"

TIM_HandleTypeDef    TimHandle;
TIM_HandleTypeDef    TimHandle4;
