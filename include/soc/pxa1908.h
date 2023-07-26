/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2023, Duje Mihanović <duje.mihanovic@skole.hr>
 */

#ifndef PXA1908_H_
#define PXA1908_H_

#define APBC_COUNTER_CLK_SEL	(unsigned int *) 0xd4015064
#define COUNTER_BASE		(unsigned int *) 0xd4101000
#define COUNTER_FREQ_26MHZ	(1 << 0)
#define COUNTER_HALT_ON_DEBUG	(1 << 1)
#define COUNTER_START		(1 << 0)

#endif // PXA1908_H_
