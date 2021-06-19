#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT(\
	K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
	K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D,      \
	K20, K21, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D,           \
	K30, K32, K33,      K34     ,       K35      , K36, K37, K38, K39          \
)\
{\
	{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
	{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, XXX }, \
	{ K20, K21, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, XXX, XXX }, \
	{ K30, K32, K33, XXX, XXX, K34, XXX, XXX, K35, XXX, XXX, K36, K37, K38, K39 } \
}
