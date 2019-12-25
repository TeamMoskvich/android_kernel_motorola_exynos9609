/*
 * Samsung Exynos SoC series FIMC-IS driver
 *
 * exynos fimc-is2 core functions
 *
 * Copyright (c) 2017 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_HW_DVFS_H
#define FIMC_IS_HW_DVFS_H

/* dvfs table idx ex.different dvfa table  pure bayer or dynamic bayer */
#define FIMC_IS_DVFS_TABLE_IDX_MAX 3
#define FIMC_IS_DVFS_CAPTURE_TICK (KEEP_FRAME_TICK_DEFAULT + 10)
#define FIMC_IS_DVFS_DUAL_CAPTURE_TICK (2 * FIMC_IS_DVFS_CAPTURE_TICK)

/* FIMC-IS DVFS SCENARIO enum */
enum FIMC_IS_SCENARIO_ID {
	FIMC_IS_SN_DEFAULT,
	FIMC_IS_SN_SECURE_FRONT,
	FIMC_IS_SN_FRONT_PREVIEW_FULL,
	FIMC_IS_SN_FRONT_PREVIEW_UHD,
	FIMC_IS_SN_FRONT_PREVIEW,
	FIMC_IS_SN_FRONT_CAPTURE,
	FIMC_IS_SN_FRONT_CAMCORDING,
	FIMC_IS_SN_FRONT_CAMCORDING_CAPTURE,
	FIMC_IS_SN_FRONT_WIDE_SELFIE,
	FIMC_IS_SN_FRONT_VT1,
	FIMC_IS_SN_FRONT_VT2,
	FIMC_IS_SN_FRONT_VT4,
	FIMC_IS_SN_FRONT_VIDEO_HIGH_SPEED_60FPS,
	FIMC_IS_SN_FRONT_VIDEO_HIGH_SPEED_120FPS,
	FIMC_IS_SN_FRONT_VIDEO_HIGH_SPEED_240FPS,
	FIMC_IS_SN_REAR2_PREVIEW_FHD,
	FIMC_IS_SN_REAR2_CAPTURE,
	FIMC_IS_SN_REAR2_CAMCORDING_FHD,
	FIMC_IS_SN_REAR2_CAMCORDING_FHD_CAPTURE,
	FIMC_IS_SN_REAR3_PREVIEW,
	FIMC_IS_SN_REAR3_CAPTURE,
	FIMC_IS_SN_REAR3_CAMCORDING,
	FIMC_IS_SN_REAR3_CAMCORDING_FHD_CAPTURE,
	FIMC_IS_SN_REAR3_CAMCORDING_HD_CAPTURE,
	FIMC_IS_SN_REAR_PREVIEW_FHD,
	FIMC_IS_SN_REAR_PREVIEW_HD,
	FIMC_IS_SN_REAR_PREVIEW_UHD,
	FIMC_IS_SN_REAR_PREVIEW_FULL,
	FIMC_IS_SN_REAR_CAPTURE,
	FIMC_IS_SN_REAR_CAMCORDING_FHD,
	FIMC_IS_SN_REAR_CAMCORDING_HD,
	FIMC_IS_SN_REAR_CAMCORDING_UHD,
	FIMC_IS_SN_REAR_CAMCORDING_FHD_CAPTURE,
	FIMC_IS_SN_REAR_CAMCORDING_HD_CAPTURE,
	FIMC_IS_SN_REAR_CAMCORDING_UHD_CAPTURE,
	FIMC_IS_SN_REAR_VIDEO_HIGH_SPEED_60FPS,
	FIMC_IS_SN_REAR_VIDEO_HIGH_SPEED_120FPS,
	FIMC_IS_SN_REAR_VIDEO_HIGH_SPEED_240FPS,
	FIMC_IS_SN_DUAL_PREVIEW,
	FIMC_IS_SN_DUAL_CAPTURE,
	FIMC_IS_SN_DUAL_FHD_CAMCORDING,
	FIMC_IS_SN_DUAL_FHD_CAMCORDING_CAPTURE,
	FIMC_IS_SN_DUAL_UHD_CAMCORDING,
	FIMC_IS_SN_DUAL_UHD_CAMCORDING_CAPTURE,
	FIMC_IS_SN_DUAL_SYNC_PREVIEW,
	FIMC_IS_SN_DUAL_SYNC_CAPTURE,
	FIMC_IS_SN_DUAL_SYNC_PREVIEW_WHD,
	FIMC_IS_SN_DUAL_SYNC_WHD_CAPTURE,
	FIMC_IS_SN_DUAL_SYNC_FHD_CAMCORDING,
	FIMC_IS_SN_DUAL_SYNC_FHD_CAMCORDING_CAPTURE,
	FIMC_IS_SN_DUAL_SYNC_UHD_CAMCORDING,
	FIMC_IS_SN_DUAL_SYNC_UHD_CAMCORDING_CAPTURE,
	FIMC_IS_SN_PIP_PREVIEW,
	FIMC_IS_SN_PIP_CAPTURE,
	FIMC_IS_SN_PIP_CAMCORDING,
	FIMC_IS_SN_PIP_CAMCORDING_CAPTURE,
	FIMC_IS_SN_PREVIEW_HIGH_SPEED_FPS,
	FIMC_IS_SN_VIDEO_HIGH_SPEED_480FPS,
	FIMC_IS_SN_VIDEO_HIGH_SPEED_60FPS_CAPTURE,
	FIMC_IS_SN_EXT_REAR,
	FIMC_IS_SN_EXT_FRONT,
	FIMC_IS_SN_EXT_SECURE,
	FIMC_IS_SN_MAX,
	FIMC_IS_SN_END,
};

/* for assign staic / dynamic scenario check logic data */
int fimc_is_hw_dvfs_init(void *dvfs_data);
#endif /* FIMC_IS_HW_DVFS_H */
