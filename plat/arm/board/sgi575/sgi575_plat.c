/*
 * Copyright (c) 2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <plat/common/platform.h>

unsigned int plat_arm_sgi_get_platform_id(void)
{
	return mmio_read_32(SSC_VERSION) & SSC_VERSION_PART_NUM_MASK;
}

unsigned int plat_arm_sgi_get_config_id(void)
{
	return (mmio_read_32(SSC_VERSION) >> SSC_VERSION_CONFIG_SHIFT)
			& SSC_VERSION_CONFIG_MASK;
}
