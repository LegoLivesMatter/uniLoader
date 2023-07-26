/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2023, Duje Mihanović <duje.mihanovic@skole.hr>
 */

#include <soc/pxa1908.h>
#include <main.h>

void soc_init(void)
{
	/* S-Boot either doesn't enable the ARM system timer or disables it
	 * before running Linux, so we need to enable it here */

	/* Select 26MHz clock for timer */
	int tmp = *APBC_COUNTER_CLK_SEL;
	if ((tmp >> 16) == 0x319)
		writel(tmp | COUNTER_FREQ_26MHZ, APBC_COUNTER_CLK_SEL);

	/* Enable timer */
	writel(COUNTER_HALT_ON_DEBUG | COUNTER_START, COUNTER_BASE);
}
