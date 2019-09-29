/* Nehalem gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2019 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define GMP_LIMB_BYTES 8

/* 2933-3200 MHz Intel Xeon X3470 Nehalem */
/* FFT tuning limit = 0.5 M */
/* Generated by tuneup.c, 2019-09-24, gcc 8.3 */

#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          3
#define MOD_1U_TO_MOD_1_1_THRESHOLD          2
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        11
#define MOD_1_2_TO_MOD_1_4_THRESHOLD        16
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD      7
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_1_NORM_THRESHOLD              1
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD               8
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           17

#define DIV_1_VS_MUL_1_PERCENT             301

#define MUL_TOOM22_THRESHOLD                18
#define MUL_TOOM33_THRESHOLD                66
#define MUL_TOOM44_THRESHOLD               169
#define MUL_TOOM6H_THRESHOLD               228
#define MUL_TOOM8H_THRESHOLD               333

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      97
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     114
#define MUL_TOOM42_TO_TOOM53_THRESHOLD     105
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     113
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     147

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 28
#define SQR_TOOM3_THRESHOLD                 98
#define SQR_TOOM4_THRESHOLD                250
#define SQR_TOOM6_THRESHOLD                327
#define SQR_TOOM8_THRESHOLD                478

#define MULMID_TOOM42_THRESHOLD             28

#define MULMOD_BNM1_THRESHOLD               13
#define SQRMOD_BNM1_THRESHOLD               13

#define MUL_FFT_MODF_THRESHOLD             380  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    380, 5}, {     19, 6}, {     10, 5}, {     21, 6}, \
    {     21, 7}, {     11, 6}, {     23, 7}, {     21, 8}, \
    {     11, 7}, {     24, 8}, {     13, 7}, {     27, 8}, \
    {     15, 7}, {     31, 8}, {     21, 9}, {     11, 8}, \
    {     27, 9}, {     15, 8}, {     33, 9}, {     19, 8}, \
    {     39, 9}, {     23, 8}, {     47, 9}, {     27,10}, \
    {     15, 9}, {     39,10}, {     23, 9}, {     51,11}, \
    {     15,10}, {     31, 9}, {     67,10}, {     39, 9}, \
    {     83,10}, {     47, 9}, {     95,11}, {     31,10}, \
    {     79,11}, {     47,10}, {     95,12}, {     31,11}, \
    {     63,10}, {    127, 9}, {    255,10}, {    135,11}, \
    {     79,10}, {    159, 9}, {    319,11}, {     95,10}, \
    {    191, 9}, {    383,11}, {    111,12}, {     63,11}, \
    {    127,10}, {    255, 9}, {    511,11}, {    143,10}, \
    {    287, 9}, {    575,10}, {    303,11}, {    159,10}, \
    {    319,12}, {     95,11}, {    191,10}, {    383,13}, \
    {   8192,14}, {  16384,15}, {  32768,16}, {  65536,17}, \
    { 131072,18}, { 262144,19}, { 524288,20}, {1048576,21}, \
    {2097152,22}, {4194304,23}, {8388608,24} }
#define MUL_FFT_TABLE3_SIZE 75
#define MUL_FFT_THRESHOLD                 4224

#define SQR_FFT_MODF_THRESHOLD             332  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    332, 5}, {     19, 6}, {     10, 5}, {     21, 6}, \
    {     21, 7}, {     11, 6}, {     23, 7}, {     21, 8}, \
    {     11, 7}, {     24, 8}, {     13, 7}, {     27, 8}, \
    {     15, 7}, {     31, 8}, {     21, 9}, {     11, 8}, \
    {     27, 9}, {     15, 8}, {     33, 9}, {     19, 8}, \
    {     39, 9}, {     23, 8}, {     47, 9}, {     27,10}, \
    {     15, 9}, {     39,10}, {     23, 9}, {     47,11}, \
    {     15,10}, {     31, 9}, {     67,10}, {     39, 9}, \
    {     79,10}, {     47,11}, {     31,10}, {     79,11}, \
    {     47,10}, {     95,12}, {     31,11}, {     63,10}, \
    {    127, 9}, {    255, 8}, {    511,10}, {    135,11}, \
    {     79, 9}, {    319,11}, {     95,10}, {    191, 9}, \
    {    383,12}, {     63,11}, {    127,10}, {    255, 9}, \
    {    511,10}, {    271, 9}, {    543,11}, {    143,10}, \
    {    287, 9}, {    575,10}, {    319, 9}, {    639,12}, \
    {     95,11}, {    191,10}, {    383,13}, {   8192,14}, \
    {  16384,15}, {  32768,16}, {  65536,17}, { 131072,18}, \
    { 262144,19}, { 524288,20}, {1048576,21}, {2097152,22}, \
    {4194304,23}, {8388608,24} }
#define SQR_FFT_TABLE3_SIZE 74
#define SQR_FFT_THRESHOLD                 3200

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  50
#define MULLO_MUL_N_THRESHOLD             8397
#define SQRLO_BASECASE_THRESHOLD            10
#define SQRLO_DC_THRESHOLD                  11
#define SQRLO_SQR_THRESHOLD               6253

#define DC_DIV_QR_THRESHOLD                 47
#define DC_DIVAPPR_Q_THRESHOLD             149
#define DC_BDIV_QR_THRESHOLD                40
#define DC_BDIV_Q_THRESHOLD                 28

#define INV_MULMOD_BNM1_THRESHOLD           34
#define INV_NEWTON_THRESHOLD               181
#define INV_APPR_THRESHOLD                 156

#define BINV_NEWTON_THRESHOLD              262
#define REDC_1_TO_REDC_N_THRESHOLD          48

#define MU_DIV_QR_THRESHOLD               1334
#define MU_DIVAPPR_Q_THRESHOLD            1334
#define MUPI_DIV_QR_THRESHOLD               85
#define MU_BDIV_QR_THRESHOLD              1142
#define MU_BDIV_Q_THRESHOLD               1187

#define POWM_SEC_TABLE  1,64,90,356,1167

#define GET_STR_DC_THRESHOLD                13
#define GET_STR_PRECOMPUTE_THRESHOLD        20
#define SET_STR_DC_THRESHOLD               140
#define SET_STR_PRECOMPUTE_THRESHOLD       998

#define FAC_DSC_THRESHOLD                  182
#define FAC_ODD_THRESHOLD                    0  /* always */

#define MATRIX22_STRASSEN_THRESHOLD         21
#define HGCD2_DIV1_METHOD                    5  /* 2.29% faster than 3 */
#define HGCD_THRESHOLD                     125
#define HGCD_APPR_THRESHOLD                155
#define HGCD_REDUCE_THRESHOLD             2479
#define GCD_DC_THRESHOLD                   361
#define GCDEXT_DC_THRESHOLD                361
#define JACOBI_BASE_METHOD                   4  /* 3.29% faster than 1 */
