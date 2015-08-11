/*
 * Copyright (C) 2014-2015 Intel Corporation.
 */

#ifndef __TRANSFORM_H__
#define __TRANSFORM_H__

#include "common.h"

#define CONVERT_GAUSS_TO_MICROTESLA(x)	((x) * 100)
#define CONVERT_MICROTESLA_TO_GAUSS(x)	((x) / 100)

void	select_transform	(int s);
float	acquire_immediate_float_value	(int s, int c);
uint64_t acquire_immediate_uint64_value	(int s, int c);

#endif



