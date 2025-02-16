/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2012~2015 Lex Hsieh <lex_hsieh@sensortek.com.tw>
 *
 */
#ifndef __STK3X1X_H__
#define __STK3X1X_H__

/* platform data */
struct stk3x1x_platform_data {
	uint8_t state_reg;
	uint8_t psctrl_reg;
	uint8_t alsctrl_reg;
	uint8_t ledctrl_reg;
	uint8_t	wait_reg;
	uint16_t ps_thd_h;
	uint16_t ps_thd_l;
	int int_pin;
	uint32_t transmittance;
	uint32_t int_flags;
};

#endif // __STK3X1X_H__
