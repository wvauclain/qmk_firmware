#ifndef M1_H
#define M1_H

#include "quantum.h"
#include "config.h"

// clang-format off
#define LAYOUT_m1( \
	K000, K001, K002, K003, K004, K005, \
	K100, K101, K102, K103, K104, K105, \
	K200, K201, K202, K203, K204, K205, \
	K300, K301, K302, K303, K304, K305  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305 }  \
}
// clang-format on

#endif
