/* Core i gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007,
2008, 2009 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define BYTES_PER_MP_LIMB 8

/* 2667 MHz Core i7 */

/* Generated by tuneup.c, 2009-11-29, gcc 4.2 */

#define MUL_TOOM22_THRESHOLD             16
#define MUL_TOOM33_THRESHOLD             66
#define MUL_TOOM44_THRESHOLD            166

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_TOOM2_THRESHOLD              30
#define SQR_TOOM3_THRESHOLD             102
#define SQR_TOOM4_THRESHOLD             250

#define MUL_FFT_TABLE  { 336, 800, 1600, 2816, 7168, 20480, 81920, 196608, 0 }
#define MUL_FFT_MODF_THRESHOLD          400
#define MUL_FFT_THRESHOLD              3456

#define SQR_FFT_TABLE  { 336, 736, 1600, 2816, 7168, 20480, 49152, 196608, 786432, 0 }
#define SQR_FFT_MODF_THRESHOLD          368
#define SQR_FFT_THRESHOLD              2688

#define MULLO_BASECASE_THRESHOLD          3
#define MULLO_DC_THRESHOLD               21
#define MULLO_MUL_N_THRESHOLD          5472

#define MULMOD_BNM1_THRESHOLD            13

#define DC_DIV_QR_THRESHOLD              34
#define DC_DIVAPPR_Q_THRESHOLD          131
#define DC_BDIV_QR_THRESHOLD             31
#define DC_BDIV_Q_THRESHOLD              63
#define BINV_NEWTON_THRESHOLD           584
#define REDC_1_TO_REDC_2_THRESHOLD       10
#define REDC_2_TO_REDC_N_THRESHOLD       59

#define MATRIX22_STRASSEN_THRESHOLD      15
#define HGCD_THRESHOLD                  117
#define GCD_DC_THRESHOLD                361
#define GCDEXT_DC_THRESHOLD             403
#define JACOBI_BASE_METHOD                1

#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define MOD_1_1_THRESHOLD                 4
#define MOD_1_2_THRESHOLD                 5
#define MOD_1_4_THRESHOLD                12
#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  0
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */

#define GET_STR_DC_THRESHOLD             13
#define GET_STR_PRECOMPUTE_THRESHOLD     22
#define SET_STR_DC_THRESHOLD            294
#define SET_STR_PRECOMPUTE_THRESHOLD   1973

/* Generated 2009-01-12, gcc 4.2 */

#define MUL_FFT_TABLE2 {{1,4}, {273,5}, {545,6}, {1217,7}, {3201,8}, {6913,9}, {7681,8}, {8449,9}, {9729,8}, {10497,9}, {13825,10}, {15361,9}, {19969,10}, {23553,9}, {28161,11}, {30721,10}, {31745,9}, {34305,10}, {39937,9}, {42497,10}, {56321,11}, {63489,10}, {81409,11}, {92161,10}, {93185,11}, {96257,12}, {126977,11}, {131073,10}, {138241,11}, {167937,10}, {169473,11}, {169985,10}, {172033,11}, {195585,9}, {196097,11}, {198657,10}, {208897,11}, {217089,12}, {258049,11}, {261121,9}, {262657,10}, {275457,11}, {302081,10}, {307201,11}, {331777,12}, {389121,11}, {425985,13}, {516097,12}, {520193,11}, {598017,12}, {610305,11}, {614401,12}, {651265,11}, {653313,10}, {654337,11}, {673793,10}, {674817,11}, {677889,10}, {679937,11}, {718849,10}, {719873,12}, {782337,11}, {850945,12}, {913409,11}, {925697,13}, {1040385,12}, {1044481,11}, {1112065,12}, {1175553,11}, {1244161,12}, {1306625,11}, {1310721,12}, {1327105,11}, {1347585,12}, {1355777,11}, {1366017,12}, {1439745,13}, {1564673,12}, {1835009,14}, {1900545,12}, {1904641,14}, {2080769,13}, {2088961,12}, {2488321,13}, {2613249,12}, {2879489,13}, {2932737,12}, {2940929,13}, {3137537,12}, {3403777,13}, {3661825,12}, {3928065,14}, {4177921,13}, {4186113,12}, {4452353,13}, {4710401,12}, {4978689,13}, {5234689,12}, {5500929,13}, {5758977,14}, {6275073,13}, {7856129,15}, {8355841,14}, {8372225,13}, {9957377,14}, {MP_SIZE_T_MAX, 0}}

#define SQR_FFT_TABLE2 {{1,4}, {241,5}, {545,6}, {1345,7}, {3201,8}, {6913,9}, {7681,8}, {8961,9}, {9729,8}, {10497,9}, {13825,10}, {15361,9}, {19969,10}, {23553,9}, {28161,11}, {30721,10}, {31745,9}, {34305,10}, {55297,11}, {63489,10}, {80897,11}, {94209,10}, {97281,12}, {126977,11}, {129025,9}, {130049,10}, {138753,11}, {162817,9}, {164353,11}, {170497,10}, {178177,11}, {183297,10}, {184321,11}, {194561,10}, {208897,12}, {219137,11}, {221185,12}, {258049,11}, {261121,9}, {261633,10}, {267777,9}, {268289,11}, {270337,10}, {274945,9}, {276481,10}, {278529,11}, {292865,9}, {293377,10}, {295937,9}, {296449,10}, {306177,9}, {309249,10}, {310273,11}, {328705,12}, {331777,11}, {335873,12}, {344065,11}, {346113,12}, {352257,11}, {356353,12}, {389121,11}, {395265,10}, {398337,11}, {419841,10}, {421889,11}, {423937,13}, {516097,12}, {520193,11}, {546817,10}, {550913,11}, {561153,10}, {563201,11}, {579585,10}, {585729,11}, {621569,12}, {636929,11}, {638977,12}, {651265,11}, {714753,10}, {716801,11}, {718849,12}, {782337,11}, {849921,12}, {913409,11}, {954369,13}, {1040385,12}, {1044481,11}, {1112065,12}, {1175553,11}, {1243137,12}, {1306625,11}, {1374209,12}, {1437697,13}, {1564673,12}, {1961985,14}, {2080769,13}, {2088961,12}, {2486273,13}, {2613249,12}, {2879489,13}, {3137537,12}, {3272705,13}, {3661825,12}, {3928065,14}, {4177921,13}, {4186113,12}, {4452353,13}, {4710401,12}, {4976641,13}, {5234689,12}, {5320705,13}, {5324801,12}, {5447681,13}, {5455873,12}, {5500929,13}, {5758977,14}, {6275073,13}, {6283265,12}, {6549505,13}, {7856129,15}, {8355841,14}, {8372225,13}, {9953281,14}, {MP_SIZE_T_MAX, 0}}
