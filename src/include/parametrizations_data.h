/*
 *
 *    Copyright (c) 2016-2017
 *      SMASH Team
 *
 *    GNU General Public License (GPLv3 or later)
 *
 */
#ifndef SRC_INCLUDE_PARAMETRIZATIONS_DATA_H_
#define SRC_INCLUDE_PARAMETRIZATIONS_DATA_H_

#include <initializer_list>
#include <memory>

#include "interpolation.h"

namespace smash {

/// PDG data on K- p elastic cross section: momentum in lab frame.
const std::initializer_list<double> KMINUSP_ELASTIC_P_LAB = {
    0.03000,   0.05000,   0.06287,   0.07000,  0.07044,  0.07300,  0.08730,
    0.09000,   0.11000,   0.11000,   0.11210,  0.11300,  0.12262,  0.13000,
    0.13000,   0.13722,   0.14552,   0.15000,  0.15000,  0.15300,  0.15909,
    0.16269,   0.17000,   0.17000,   0.17470,  0.18768,  0.18916,  0.19000,
    0.19000,   0.19300,   0.20534,   0.21000,  0.21000,  0.21554,  0.22049,
    0.22500,   0.23000,   0.23000,   0.23300,  0.23500,  0.23944,  0.24500,
    0.24623,   0.25000,   0.25500,   0.26154,  0.26500,  0.27000,  0.27500,
    0.27618,   0.28227,   0.28500,   0.29000,  0.29290,  0.29300,  0.29500,
    0.30000,   0.30191,   0.30500,   0.31500,  0.32500,  0.33500,  0.34500,
    0.35000,   0.35012,   0.35500,   0.36500,  0.37500,  0.38500,  0.38700,
    0.38986,   0.39200,   0.39500,   0.40000,  0.40500,  0.41500,  0.42000,
    0.42500,   0.43400,   0.43407,   0.43500,  0.43600,  0.44500,  0.45500,
    0.45500,   0.46500,   0.47500,   0.49500,  0.51300,  0.51300,  0.51400,
    0.52228,   0.53400,   0.55400,   0.57300,  0.59700,  0.61000,  0.61700,
    0.62004,   0.63700,   0.64200,   0.65800,  0.66000,  0.67200,  0.67700,
    0.69900,   0.70000,   0.70300,   0.70800,  0.71900,  0.72500,  0.73000,
    0.74000,   0.74000,   0.74100,   0.75800,  0.75996,  0.76100,  0.76800,
    0.77300,   0.77700,   0.77700,   0.78000,  0.78500,  0.79300,  0.80200,
    0.80600,   0.80600,   0.81000,   0.82000,  0.82000,  0.83300,  0.83800,
    0.83800,   0.84999,   0.85300,   0.85300,  0.85600,  0.86000,  0.87000,
    0.87400,   0.87400,   0.87600,   0.89400,  0.89400,  0.89900,  0.90000,
    0.90400,   0.90400,   0.90500,   0.91600,  0.91600,  0.92200,  0.92500,
    0.93500,   0.93500,   0.93500,   0.94000,  0.94300,  0.94500,  0.95400,
    0.95400,   0.95500,   0.96000,   0.96500,  0.97000,  0.97000,  0.98000,
    0.99000,   0.99100,   0.99100,   1.00500,  1.02000,  1.02200,  1.02200,
    1.04000,   1.04400,   1.04400,   1.04500,  1.06000,  1.06100,  1.06100,
    1.08000,   1.08000,   1.08500,   1.10000,  1.10200,  1.10200,  1.11700,
    1.11700,   1.12500,   1.13400,   1.13400,  1.13800,  1.14000,  1.15000,
    1.15000,   1.15300,   1.15300,   1.16100,  1.16500,  1.17400,  1.17400,
    1.17900,   1.18000,   1.18300,   1.18300,  1.20100,  1.20500,  1.22000,
    1.22600,   1.22600,   1.23300,   1.24500,  1.25300,  1.26000,  1.26000,
    1.26300,   1.26300,   1.27600,   1.28500,  1.29600,  1.30000,  1.31600,
    1.31600,   1.32000,   1.32800,   1.34000,  1.35500,  1.36800,  1.36800,
    1.38000,   1.38300,   1.41500,   1.41500,  1.42300,  1.43300,  1.46200,
    1.46500,   1.48300,   1.51300,   1.51400,  1.53000,  1.53400,  1.54500,
    1.54600,   1.58400,   1.60600,   1.60600,  1.63400,  1.65200,  1.65300,
    1.68000,   1.68400,   1.70500,   1.70500,  1.73400,  1.73900,  1.74100,
    1.78400,   1.80000,   1.80000,   1.81500,  1.84300,  1.84300,  1.88400,
    1.93400,   1.93400,   1.98400,   2.00000,  2.03100,  2.03400,  2.08400,
    2.13400,   2.13500,   2.17500,   2.23400,  2.24000,  2.28400,  2.32500,
    2.33100,   2.37400,   2.41200,   2.51600,  2.66000,  2.66000,  2.98500,
    3.00000,   3.00000,   3.46000,   3.59000,  3.65000,  4.10000,  4.20000,
    4.60000,   5.00000,   5.50000,   6.00000,  7.20020,  9.00010,  10.12000,
    14.30000,  14.30000,  25.20000,  32.10000, 40.10000, 50.00000, 70.00000,
    100.00000, 140.00000, 147.00000, 175.00000};

/// PDG data on K- p elastic cross section: cross section.
const std::initializer_list<double> KMINUSP_ELASTIC_SIG = {
    313.50, 103.60, 113.00, 44.800, 58.500, 187.00, 92.000, 71.500, 92.800,
    87.290, 82.000, 105.00, 59.400, 40.400, 79.220, 82.000, 49.000, 41.400,
    69.610, 108.00, 53.900, 98.000, 75.760, 32.800, 45.000, 73.000, 66.000,
    59.090, 53.300, 68.000, 37.000, 53.300, 60.490, 48.000, 41.000, 65.410,
    62.900, 55.690, 50.000, 55.740, 41.200, 53.240, 37.000, 51.500, 49.220,
    43.600, 47.710, 58.060, 48.750, 30.000, 44.900, 39.420, 38.270, 47.800,
    48.200, 41.220, 44.500, 44.200, 40.360, 37.020, 40.280, 37.840, 37.260,
    34.000, 33.500, 34.770, 34.210, 36.670, 33.890, 31.900, 34.700, 34.000,
    38.470, 38.900, 32.060, 32.590, 48.400, 31.190, 30.600, 32.800, 26.830,
    25.800, 28.830, 23.800, 30.320, 31.990, 23.100, 21.500, 26.500, 27.600,
    21.700, 35.000, 19.300, 19.100, 17.500, 17.700, 17.660, 18.600, 16.000,
    16.000, 17.230, 16.400, 12.100, 16.220, 15.600, 15.200, 14.200, 15.220,
    13.500, 14.200, 11.500, 14.070, 15.900, 14.000, 11.600, 16.930, 16.700,
    17.300, 15.200, 18.600, 18.300, 18.700, 17.900, 19.370, 20.500, 19.300,
    20.000, 20.450, 20.670, 18.700, 19.300, 19.630, 19.800, 19.530, 22.400,
    19.100, 19.390, 19.780, 19.500, 21.360, 20.100, 20.310, 21.070, 21.600,
    21.660, 22.020, 21.500, 20.900, 20.710, 21.340, 20.850, 20.400, 22.340,
    20.940, 20.120, 20.100, 19.980, 21.800, 21.010, 19.330, 20.640, 20.700,
    20.610, 21.270, 20.340, 20.400, 20.720, 22.400, 21.220, 21.400, 22.150,
    21.750, 20.800, 22.100, 22.150, 23.300, 21.500, 21.460, 22.220, 21.200,
    20.600, 20.560, 18.700, 18.740, 19.830, 18.300, 18.600, 18.770, 17.600,
    17.820, 17.890, 17.000, 17.750, 15.700, 17.000, 18.300, 17.300, 17.200,
    17.230, 15.300, 15.390, 16.500, 16.460, 14.660, 16.800, 15.900, 15.890,
    12.680, 13.890, 15.700, 11.300, 11.810, 13.110, 12.320, 11.870, 15.200,
    14.000, 10.870, 10.870, 11.440, 10.960, 11.570, 12.000, 10.200, 11.200,
    10.260, 9.7400, 14.400, 9.5300, 10.300, 10.300, 16.600, 10.500, 8.8300,
    8.8300, 8.4200, 8.6000, 9.1100, 9.1100, 8.3000, 7.7000, 7.7000, 8.1500,
    8.8000, 8.0600, 8.0600, 8.7000, 8.8600, 8.8600, 9.2000, 8.4000, 8.4000,
    8.1900, 8.9000, 9.0800, 9.0800, 9.5000, 8.5100, 8.5100, 9.0000, 8.1300,
    8.1300, 6.9500, 7.8600, 7.8600, 9.0000, 7.9000, 7.4800, 7.8000, 7.4600,
    7.3100, 7.1000, 7.4000, 7.1000, 7.2600, 7.9000, 6.8700, 6.2000, 7.3000,
    6.5000, 6.7600, 6.6000, 6.3200, 6.2100, 5.7000, 6.0400, 4.9500, 5.0600,
    4.9500, 4.9400, 4.4000, 4.6000, 4.3000, 4.5000, 4.2000, 3.8400, 4.1000,
    3.6200, 4.2300, 3.9500, 3.2400, 2.9600, 3.0100, 2.4600, 2.5600, 2.3300,
    2.5400, 2.5300, 2.5100, 2.5200, 2.7400, 2.5900};

/// A null interpolation that gets filled using the KMINUSP_ELASTIC data
static std::unique_ptr<InterpolateDataLinear<double>>
    kminusp_elastic_interpolation = nullptr;

/// PDG data on K- p total cross section: momentum in lab frame.
const std::initializer_list<double> KMINUSP_TOT_PLAB = {
    0.245,   0.255,   0.265,   0.275,   0.285,   0.293,   0.293,   0.295,
    0.300,   0.305,   0.315,   0.325,   0.335,   0.345,   0.350,   0.350,
    0.355,   0.360,   0.365,   0.375,   0.385,   0.385,   0.387,   0.390,
    0.392,   0.395,   0.400,   0.405,   0.405,   0.415,   0.419,   0.425,
    0.434,   0.434,   0.435,   0.436,   0.440,   0.445,   0.446,   0.455,
    0.455,   0.464,   0.475,   0.475,   0.483,   0.494,   0.495,   0.506,
    0.506,   0.513,   0.513,   0.514,   0.520,   0.534,   0.534,   0.536,
    0.547,   0.554,   0.561,   0.566,   0.573,   0.574,   0.586,   0.590,
    0.596,   0.597,   0.599,   0.604,   0.612,   0.617,   0.620,   0.623,
    0.625,   0.627,   0.630,   0.637,   0.639,   0.653,   0.655,   0.657,
    0.658,   0.667,   0.677,   0.680,   0.686,   0.687,   0.693,   0.699,
    0.707,   0.708,   0.712,   0.719,   0.720,   0.725,   0.732,   0.736,
    0.740,   0.741,   0.744,   0.752,   0.756,   0.760,   0.761,   0.767,
    0.768,   0.768,   0.773,   0.777,   0.782,   0.793,   0.794,   0.795,
    0.802,   0.806,   0.819,   0.820,   0.822,   0.838,   0.839,   0.840,
    0.848,   0.850,   0.853,   0.860,   0.874,   0.874,   0.881,   0.894,
    0.894,   0.899,   0.900,   0.900,   0.904,   0.916,   0.925,   0.931,
    0.935,   0.936,   0.952,   0.954,   0.965,   0.969,   0.970,   0.975,
    0.978,   0.980,   0.987,   0.991,   0.991,   1.020,   1.022,   1.022,
    1.023,   1.030,   1.043,   1.044,   1.061,   1.067,   1.068,   1.070,
    1.080,   1.080,   1.093,   1.100,   1.101,   1.102,   1.115,   1.117,
    1.119,   1.130,   1.134,   1.144,   1.150,   1.153,   1.169,   1.169,
    1.174,   1.179,   1.183,   1.194,   1.219,   1.220,   1.226,   1.230,
    1.230,   1.244,   1.263,   1.270,   1.274,   1.283,   1.306,   1.316,
    1.320,   1.325,   1.328,   1.336,   1.350,   1.368,   1.370,   1.375,
    1.383,   1.384,   1.406,   1.415,   1.433,   1.434,   1.442,   1.462,
    1.480,   1.483,   1.485,   1.488,   1.509,   1.514,   1.521,   1.534,
    1.546,   1.549,   1.562,   1.583,   1.584,   1.600,   1.606,   1.614,
    1.634,   1.637,   1.653,   1.663,   1.684,   1.687,   1.705,   1.710,
    1.730,   1.734,   1.735,   1.741,   1.763,   1.784,   1.785,   1.800,
    1.805,   1.835,   1.840,   1.843,   1.855,   1.879,   1.884,   1.885,
    1.903,   1.924,   1.929,   1.934,   1.950,   1.953,   1.984,   1.985,
    2.005,   2.031,   2.034,   2.035,   2.052,   2.080,   2.084,   2.104,
    2.124,   2.134,   2.135,   2.159,   2.164,   2.175,   2.206,   2.207,
    2.234,   2.240,   2.250,   2.257,   2.284,   2.301,   2.308,   2.325,
    2.331,   2.350,   2.351,   2.356,   2.374,   2.392,   2.400,   2.404,
    2.423,   2.450,   2.467,   2.480,   2.500,   2.514,   2.550,   2.558,
    2.600,   2.608,   2.630,   2.650,   2.657,   2.660,   2.660,   2.670,
    2.700,   2.700,   2.750,   2.800,   2.850,   2.880,   2.900,   2.950,
    2.970,   2.980,   3.000,   3.000,   3.050,   3.090,   3.100,   3.150,
    3.190,   3.200,   3.250,   3.300,   3.300,   3.500,   3.710,   3.920,
    3.980,   4.000,   4.130,   4.200,   4.250,   4.340,   4.760,   5.180,
    5.500,   6.000,   6.650,   7.000,   7.000,   8.000,   8.500,   10.000,
    10.000,  10.000,  10.000,  10.000,  10.100,  11.500,  12.000,  12.000,
    12.600,  13.300,  13.400,  14.000,  14.500,  15.000,  15.800,  16.000,
    17.500,  18.000,  19.100,  20.000,  20.000,  20.000,  21.000,  21.000,
    23.000,  25.000,  25.000,  25.000,  27.500,  30.000,  30.000,  30.000,
    31.500,  32.000,  33.500,  35.000,  35.000,  35.500,  37.500,  40.000,
    40.000,  40.000,  40.000,  42.500,  45.000,  45.000,  45.000,  47.500,
    50.000,  50.000,  50.000,  50.000,  50.000,  52.500,  55.000,  55.000,
    55.000,  70.000,  100.000, 100.000, 100.000, 120.000, 147.000, 150.000,
    150.000, 170.000, 175.000, 200.000, 200.000, 240.000, 280.000, 310.000};

/// PDG data on K- p total cross section: cross section.
const std::initializer_list<double> KMINUSP_TOT_SIG = {
    113.80, 98.00, 94.00, 96.70, 75.10, 89.30, 90.70, 82.50, 79.40, 78.60,
    70.90,  76.00, 71.50, 71.30, 70.20, 69.30, 68.80, 69.32, 70.00, 81.80,
    100.19, 88.30, 69.60, 77.80, 80.60, 91.60, 76.20, 69.80, 76.60, 70.70,
    58.61,  66.70, 61.50, 62.80, 54.90, 56.70, 58.41, 55.70, 50.27, 57.20,
    48.60,  46.82, 45.30, 48.45, 44.19, 43.19, 42.30, 42.70, 44.71, 50.10,
    49.50,  40.70, 40.11, 40.50, 39.55, 42.15, 38.34, 39.30, 37.78, 39.10,
    35.60,  36.74, 36.32, 32.99, 37.80, 36.50, 36.03, 38.59, 35.07, 36.30,
    32.40,  34.40, 34.75, 36.36, 35.40, 32.70, 34.41, 34.31, 34.44, 35.40,
    34.90,  34.38, 33.70, 34.34, 35.33, 34.16, 34.81, 33.10, 34.63, 32.60,
    35.37,  35.40, 34.69, 33.30, 35.26, 35.64, 36.80, 31.90, 37.65, 36.40,
    38.84,  40.10, 38.10, 38.57, 38.50, 39.87, 40.60, 40.70, 40.31, 40.90,
    40.96,  40.53, 40.20, 41.30, 40.67, 39.70, 40.29, 37.30, 39.86, 36.10,
    40.58,  40.60, 38.10, 41.13, 41.75, 41.30, 42.36, 43.70, 42.70, 43.41,
    43.41,  52.00, 42.10, 43.20, 44.86, 44.10, 42.40, 45.46, 46.24, 42.90,
    47.33,  47.16, 43.20, 47.19, 47.96, 47.10, 45.30, 45.80, 49.79, 51.70,
    51.27,  47.70, 52.19, 48.40, 52.17, 51.90, 50.30, 49.40, 51.46, 49.30,
    50.51,  46.90, 46.13, 43.60, 44.50, 43.50, 44.18, 40.90, 42.23, 43.74,
    39.30,  39.80, 45.00, 40.50, 39.18, 38.67, 42.00, 39.01, 40.70, 36.92,
    35.21,  35.51, 33.40, 35.41, 33.80, 33.39, 32.36, 32.52, 32.11, 32.50,
    31.17,  29.68, 31.03, 30.60, 30.50, 31.12, 31.20, 32.61, 31.27, 30.90,
    31.20,  31.09, 31.63, 29.78, 31.90, 31.83, 32.28, 31.68, 32.50, 32.90,
    33.35,  32.83, 33.47, 29.87, 33.53, 33.80, 32.16, 34.00, 33.97, 34.17,
    34.20,  32.50, 33.19, 34.42, 34.20, 34.07, 32.79, 34.19, 33.80, 33.84,
    33.20,  33.66, 32.50, 33.20, 33.19, 33.42, 32.77, 32.30, 32.26, 32.94,
    31.92,  31.53, 31.19, 31.32, 30.72, 30.85, 30.40, 30.81, 30.18, 30.40,
    30.49,  30.14, 30.50, 30.46, 30.10, 30.17, 30.37, 30.71, 29.90, 29.99,
    29.86,  29.89, 29.80, 29.70, 29.81, 29.60, 31.77, 29.83, 29.79, 29.70,
    29.87,  30.05, 30.75, 29.79, 29.79, 29.46, 29.50, 29.63, 29.37, 29.30,
    31.89,  29.44, 29.38, 28.81, 28.90, 29.07, 29.10, 28.86, 28.88, 28.87,
    28.50,  26.90, 28.46, 28.37, 28.30, 28.13, 28.21, 27.88, 30.30, 28.10,
    27.96,  30.40, 30.20, 27.41, 28.02, 30.90, 27.83, 27.72, 27.73, 26.65,
    27.58,  27.51, 25.30, 27.76, 24.90, 27.42, 27.20, 26.25, 27.00, 26.98,
    26.75,  26.78, 26.70, 26.73, 27.00, 27.15, 26.90, 25.95, 25.40, 28.20,
    25.14,  25.40, 25.80, 25.84, 24.74, 24.03, 24.30, 24.00, 23.80, 25.00,
    23.50,  23.60, 24.60, 23.20, 22.90, 22.60, 22.67, 22.50, 22.50, 23.30,
    22.90,  21.60, 21.60, 22.10, 21.50, 21.50, 21.60, 21.60, 21.90, 21.30,
    21.90,  21.00, 21.60, 21.20, 21.02, 22.40, 21.16, 21.09, 20.89, 20.72,
    20.70,  20.81, 20.72, 21.30, 20.84, 20.57, 20.50, 19.90, 20.55, 20.80,
    20.54,  20.43, 20.39, 20.90, 20.59, 20.62, 20.49, 20.35, 20.60, 20.57,
    20.45,  20.45, 21.00, 20.48, 20.30, 20.25, 20.40, 20.32, 21.50, 20.49,
    20.23,  20.38, 20.80, 20.45, 20.41, 20.59, 21.50, 20.60, 20.57, 20.65,
    21.40,  20.79, 20.84, 21.30, 21.32, 21.45};

/// \todo unused
static std::unique_ptr<InterpolateDataLinear<double>>
    kminusp_total_interpolation = nullptr;

/// Center-of-mass energy list for K̅⁻ N⁺
const std::initializer_list<double> KMINUSP_RES_SQRTS = {
    1.4355, 1.4530, 1.4730, 1.4929, 1.5129, 1.5329, 1.5529, 1.5729,
    1.5929, 1.6128, 1.6328, 1.6528, 1.6728, 1.6928, 1.7127, 1.7327,
    1.7527, 1.7727, 1.7927, 1.8127, 1.8326, 1.8526, 1.8726, 1.8926,
    1.9126, 1.9325, 1.9525, 1.9725, 1.9925, 2.0125, 2.0325, 2.0524,
    2.0724, 2.0924, 2.1124, 2.1324, 2.1523, 2.1723, 2.1923, 2.2123,
    2.2323, 2.2523, 2.2722, 2.2922, 2.3122, 2.3322, 2.3522, 2.3721,
    2.3921, 2.4121, 2.4321, 2.4521, 2.4721, 2.4920, 2.5120, 2.5320};

/**
 * Elastic K̅⁻ N⁺ cross section contributions from decays.
 *
 * These need to be subtracted from the interpolation of the PDG data on
 * elastic cross sections. This data was generated using the SMASH analysis
 * suite and should be updated when strange resonances are changed or added.
 */
const std::initializer_list<double> KMINUSP_RES_SIG = {
    0.46856081097,  0.68994120313, 1.00475205957,  1.66469547655,
    5.63530052434,  4.17372028288, 4.50737036469,  8.00913400697,
    0.29205365102,  2.72859364291, 3.30822314603,  4.44740017628,
    4.95697831919,  5.05350905117, 4.87562017799,  7.48383422000,
    8.29845755438,  9.71940157530, 11.10200040600, 12.00610574630,
    10.06137989140, 7.47886042856, 6.11390219499,  5.19531126779,
    4.38090191191,  3.95316327084, 3.53446044755,  3.46497827089,
    3.63741875589,  3.77762079044, 0.87409952036,  4.19070149234,
    4.38097308237,  4.27752586136, 4.12637945445,  3.70027602474,
    3.31806303484,  2.88526838044, 2.58141493751,  2.36391939397,
    2.18133708906,  1.39193162095, 2.03247269918,  2.00726146262,
    2.13817978212,  2.16907178433, 2.08118209913,  1.83166338166,
    1.56038155638,  1.27216056674, 1.03167072054,  0.85006416230,
    0.39627220898,  0.57172926654, 0.51129452389,  0.44626386026};

/// A null interpolation that gets filled using the KMINUSP_RES data
static std::unique_ptr<InterpolateDataSpline>
    kminusp_elastic_res_interpolation = nullptr;

/**
 * PDG data on K+ n total cross section: momentum in lab frame.
 * One data point is ignored because it is an outlier and messes up the
 * smoothing.
 */
// clang-format off
const std::initializer_list<double> KPLUSN_TOT_PLAB = {
    0.770,   0.888,   0.939,   0.970,   0.989,   1.040,   1.091,   1.141,
    /*1.170,*/ 1.191,   1.242,   1.292,   1.300,   1.342,   1.392,   1.440,
    1.442,   1.492,   1.550,   1.593,   1.600,   1.643,   1.690,   1.693,
    1.700,   1.743,   1.750,   1.793,   1.800,   1.850,   1.893,   1.900,
    1.950,   1.970,   1.993,   2.000,   2.050,   2.093,   2.100,   2.150,
    2.193,   2.200,   2.260,   2.300,   2.350,   2.393,   2.400,   2.450,
    2.500,   2.550,   2.550,   2.600,   2.650,   2.700,   2.750,   2.800,
    2.830,   2.850,   2.900,   2.950,   3.000,   3.050,   3.100,   3.150,
    3.200,   3.250,   3.300,   6.000,   8.000,   10.000,  12.000,  14.000,
    15.000,  16.000,  18.000,  20.000,  20.000,  25.000,  30.000,  35.000,
    35.000,  40.000,  45.000,  50.000,  50.000,  50.000,  55.000,  70.000,
    100.000, 100.000, 120.000, 150.000, 150.000, 170.000, 200.000, 200.000,
    240.000, 280.000, 310.000};
// clang-format on

/**
 * PDG data on K+ n total cross section: cross section.
 * One data point is ignored because it is an outlier and messes up the
 * smoothing.
 */
const std::initializer_list<double> KPLUSN_TOT_SIG = {
    15.50, 16.85, 17.60, 17.80, 18.53, 18.91, 20.61, 21.25, /*18.20,*/ 20.87,
    20.26, 19.68, 18.50, 19.32, 19.22, 18.10, 19.07, 18.95, 18.91,
    18.79, 18.89, 18.67, 18.50, 18.69, 18.83, 18.88, 18.86, 18.73,
    18.53, 18.66, 18.50, 18.69, 18.70, 18.60, 18.55, 18.79, 18.54,
    18.67, 18.49, 18.43, 18.40, 18.40, 17.70, 18.27, 18.26, 18.63,
    18.09, 18.25, 18.11, 17.10, 18.17, 18.09, 18.02, 18.11, 18.06,
    18.01, 17.50, 17.95, 17.85, 17.81, 17.81, 17.83, 17.85, 17.61,
    17.61, 17.66, 17.55, 17.50, 17.60, 17.50, 17.60, 17.50, 17.87,
    17.40, 17.60, 17.94, 17.70, 17.78, 17.69, 18.29, 18.12, 18.15,
    18.30, 18.66, 18.56, 18.02, 18.43, 18.60, 19.04, 18.99, 19.23,
    19.63, 19.55, 19.74, 19.72, 19.82, 20.37, 20.61, 20.80};

/// A null interpolation that gets filled using the KPLUSN_TOT data
static std::unique_ptr<InterpolateDataLinear<double>>
    kplusn_total_interpolation = nullptr;

/// PDG data on K+ p total cross section: momentum in lab frame.
const std::initializer_list<double> KPLUSP_TOT_PLAB = {
    0.178,   0.265,   0.321,   0.351,   0.366,   0.405,   0.440,   0.451,
    0.475,   0.475,   0.506,   0.522,   0.536,   0.566,   0.569,   0.588,
    0.589,   0.592,   0.593,   0.596,   0.618,   0.620,   0.627,   0.643,
    0.644,   0.657,   0.668,   0.686,   0.698,   0.713,   0.717,   0.727,
    0.757,   0.768,   0.770,   0.786,   0.817,   0.823,   0.846,   0.864,
    0.864,   0.881,   0.891,   0.900,   0.904,   0.916,   0.938,   0.942,
    0.951,   0.969,   0.969,   0.970,   0.970,   0.985,   0.992,   1.020,
    1.029,   1.043,   1.055,   1.060,   1.084,   1.090,   1.094,   1.125,
    1.130,   1.140,   1.144,   1.160,   1.170,   1.189,   1.194,   1.207,
    1.210,   1.238,   1.245,   1.250,   1.293,   1.295,   1.300,   1.320,
    1.345,   1.347,   1.380,   1.395,   1.408,   1.440,   1.445,   1.455,
    1.468,   1.480,   1.495,   1.550,   1.563,   1.596,   1.600,   1.646,
    1.690,   1.696,   1.700,   1.746,   1.750,   1.796,   1.800,   1.850,
    1.896,   1.900,   1.945,   1.950,   1.960,   1.970,   1.996,   2.000,
    2.050,   2.096,   2.100,   2.150,   2.196,   2.200,   2.260,   2.300,
    2.350,   2.396,   2.400,   2.450,   2.473,   2.500,   2.530,   2.550,
    2.550,   2.600,   2.650,   2.700,   2.750,   2.760,   2.800,   2.830,
    2.850,   2.900,   2.950,   3.000,   3.050,   3.100,   3.150,   3.200,
    3.200,   3.250,   3.250,   3.300,   3.700,   4.000,   4.200,   4.750,
    5.000,   5.500,   6.000,   7.000,   7.000,   8.000,   8.200,   8.500,
    10.000,  10.000,  10.000,  10.000,  10.900,  11.500,  12.000,  12.500,
    13.400,  14.000,  15.000,  15.000,  16.000,  16.000,  16.900,  18.000,
    19.000,  20.000,  20.000,  25.000,  30.000,  32.000,  35.000,  35.000,
    40.000,  42.500,  45.000,  50.000,  50.000,  50.000,  52.200,  55.000,
    70.000,  100.000, 100.000, 100.000, 100.000, 120.000, 147.000, 150.000,
    150.000, 170.000, 175.000, 200.000, 200.000, 240.000, 280.000, 310.000};

/// PDG data on K+ p total cross section: cross section.
const std::initializer_list<double> KPLUSP_TOT_SIG = {
    11.40, 13.00, 14.00, 12.20, 13.20, 13.69, 12.81, 16.30, 12.70, 13.58, 13.02,
    15.20, 12.09, 13.20, 12.70, 12.60, 16.30, 14.36, 13.05, 13.04, 12.65, 12.91,
    12.18, 12.50, 12.88, 12.43, 13.10, 11.25, 12.60, 11.14, 11.10, 12.45, 12.65,
    11.65, 13.00, 12.80, 13.20, 12.97, 13.45, 14.07, 13.21, 13.90, 14.39, 13.10,
    14.23, 14.20, 14.59, 15.57, 14.95, 15.28, 15.63, 15.40, 15.25, 16.20, 15.97,
    16.10, 15.69, 17.39, 16.95, 16.40, 17.04, 17.60, 17.12, 17.55, 18.08, 18.02,
    18.09, 17.95, 18.10, 18.06, 18.47, 19.85, 18.58, 18.11, 18.54, 20.71, 18.44,
    18.61, 17.90, 19.33, 18.44, 18.27, 18.64, 18.27, 17.97, 18.10, 18.04, 18.20,
    17.94, 18.04, 17.93, 17.70, 17.66, 17.75, 17.71, 17.86, 17.50, 17.85, 17.73,
    17.80, 17.83, 17.80, 17.98, 17.77, 17.81, 17.79, 17.41, 17.75, 19.40, 16.90,
    17.60, 17.63, 17.72, 17.51, 17.56, 17.57, 17.54, 17.60, 17.10, 17.44, 17.52,
    17.55, 17.56, 17.48, 17.25, 17.49, 17.47, 17.10, 17.44, 17.50, 17.47, 17.41,
    17.41, 17.41, 17.40, 16.70, 17.30, 17.34, 17.30, 17.19, 17.14, 17.08, 17.15,
    17.13, 17.13, 17.13, 17.50, 17.14, 21.00, 17.60, 17.10, 21.30, 17.20, 17.90,
    17.00, 17.20, 18.40, 17.30, 17.20, 18.70, 17.20, 17.30, 18.80, 17.30, 18.10,
    19.00, 17.30, 18.30, 17.50, 17.40, 18.50, 17.31, 17.10, 17.00, 18.80, 17.10,
    17.30, 17.50, 17.42, 17.68, 17.72, 18.40, 17.82, 17.80, 18.05, 17.91, 17.88,
    18.06, 18.03, 18.37, 18.28, 18.17, 18.52, 18.40, 18.88, 18.70, 18.85, 19.14,
    19.52, 19.36, 19.33, 19.64, 18.20, 19.91, 19.84, 20.22, 20.45, 20.67};

/// A null interpolation that gets filled using the KPLUSP_TOT data
static std::unique_ptr<InterpolateDataLinear<double>>
    kplusp_total_interpolation = nullptr;

/// PDG data on pi- p elastic cross section: momentum in lab frame.
const std::initializer_list<double> PIMINUSP_ELASTIC_P_LAB = {
    0.09875, 0.14956, 0.21648, 0.21885, 0.22828, 0.24684, 0.25599, 0.26733,
    0.27071, 0.2752,  0.29303, 0.29303, 0.33138, 0.33571, 0.33788, 0.35052,
    0.378,   0.38261, 0.404,   0.40626, 0.408,   0.42188, 0.427,   0.44888,
    0.452,   0.471,   0.49008, 0.49008, 0.49008, 0.509,   0.523,   0.52845,
    0.53155, 0.547,   0.54911, 0.54911, 0.556,   0.565,   0.57281, 0.582,
    0.586,   0.609,   0.6139,  0.61698, 0.625,   0.64054, 0.657,   0.65793,
    0.658,   0.6753,  0.683,   0.687,   0.69061, 0.699,   0.70692, 0.71399,
    0.72628, 0.731,   0.73257, 0.74257, 0.75,    0.76189, 0.775,   0.77714,
    0.77714, 0.77827, 0.798,   0.82586, 0.83803, 0.848,   0.84954, 0.854,
    0.87466, 0.90386, 0.91903, 0.924,   0.95947, 1.03016, 1.106,   1.12339,
    1.164,   1.165,   1.174,   1.214,   1.21659, 1.23,    1.25,    1.26,
    1.279,   1.323,   1.339,   1.347,   1.355,   1.365,   1.375,   1.385,
    1.395,   1.405,   1.415,   1.425,   1.435,   1.445,   1.455,   1.465,
    1.475,   1.485,   1.495,   1.497,   1.499,   1.503,   1.5031,  1.509,
    1.567,   1.59,    1.6,     1.603,   1.71,    1.85,    2.1,     2.14,
    2.26,    2.29,    2.7,     2.75,    2.77,    2.7999,  3.,      3.15};

/// PDG data on pi- p elastic cross section: cross section
const std::initializer_list<double> PIMINUSP_ELASTIC_SIG = {
    1.847,  2.9,    9.6,    11.3,   12.8,   17.,    20.1,   21.4,   22.5,
    21.2,   22.5,   18.2,   19.5,   16.,    17.4,   15.1,   12.29,  12.4,
    10.1,   13.8,   10.41,  11.4,   9.,     10.3,   8.9,    9.2,    10.42,
    10.9,   10.8,   9.15,   9.8,    11.4,   11.4,   9.99,   13.,    13.,
    10.24,  10.8,   12.19,  16.2,   11.34,  12.86,  13.71,  13.9,   12.19,
    14.8,   13.92,  16.2,   15.32,  16.98,  18.9,   17.07,  18.86,  19.07,
    19.95,  20.5,   19.87,  18.9,   16.6,   19.4,   19.91,  18.94,  17.56,
    17.19,  17.82,  16.1,   14.91,  15.75,  14.9,   13.2,   14.1,   14.47,
    14.4,   14.8,   14.1,   18.8,   18.,    18.6,   17.95,  17.7,   13.66,
    15.01,  15.73,  12.45,  14.1,   14.6,   13.31,  13.8,   12.8,   13.09,
    12.627, 12.987, 12.763, 12.367, 12.852, 12.67,  12.126, 12.972, 12.478,
    12.594, 12.532, 11.801, 11.568, 11.413, 11.119, 11.643, 11.368, 11.523,
    11.163, 11.69,  10.,    10.39,  10.21,  9.65,   9.,     9.82,   10.4,
    11.1,   9.69,   9.3,    8.91,   8.5,    7.7,    7.2,    7.2,    7.8,
    7.57,   6.1};

/// A null interpolation that gets filled using the PIMINUSP_ELASTIC data
static std::unique_ptr<InterpolateDataLinear<double>>
    piminusp_elastic_interpolation = nullptr;

/// Center-of-mass energy list for π⁻ N⁺
const std::initializer_list<double> PIMINUSP_RES_SQRTS = {
    1.08, 1.10, 1.12, 1.14, 1.16, 1.18, 1.20, 1.22, 1.24, 1.26, 1.28, 1.30,
    1.32, 1.34, 1.36, 1.38, 1.40, 1.42, 1.44, 1.46, 1.48, 1.50, 1.52, 1.54,
    1.56, 1.58, 1.60, 1.62, 1.64, 1.66, 1.68, 1.70, 1.72, 1.74, 1.76, 1.78,
    1.80, 1.82, 1.84, 1.86, 1.88, 1.90, 1.92, 1.94, 1.96, 1.98, 2.00, 2.02,
    2.04, 2.06, 2.08, 2.10, 2.12, 2.14, 2.16, 2.18, 2.20};

/**
 * Elastic π⁻ N⁺ cross section contributions from decays.
 *
 * These need to be subtracted from the interpolation of the PDG data on
 * elastic cross sections. This data was generated using the SMASH analysis
 * suite and should be updated when strange resonances are changed or added.
 */
const std::initializer_list<double> PIMINUSP_RES_SIG = {
    0.132595,  0.40252,   1.178451,  2.760204,  5.730226,  10.782558, 17.245252,
    20.786286, 18.877248, 15.375461, 12.793756, 11.279813, 10.825084, 11.051209,
    11.562095, 12.129368, 12.290113, 12.228052, 12.286856, 13.229999, 15.355433,
    16.217831, 15.047059, 12.962125, 11.616049, 11.523171, 12.685314, 14.757287,
    17.408006, 19.193396, 18.636883, 16.105174, 13.008674, 10.569508, 8.845049,
    7.695193,  7.042515,  6.526963,  6.296451,  6.16313,   6.006575,  5.891764,
    5.694986,  5.432877,  5.117872,  4.64471,   4.184152,  3.679608,  3.128582,
    2.56838,   1.975527,  1.434032,  0.958996,  0.554314,  0.243301,  0.0644,
    0.};

/// A null interpolation that gets filled using the PIMINUSP_RES data
static std::unique_ptr<InterpolateDataSpline>
    piminusp_elastic_res_interpolation = nullptr;

/// PDG data on pi+ p elastic cross section: momentum in lab frame.
const std::initializer_list<double> PIPLUSP_ELASTIC_P_LAB = {
    0.09875, 0.13984, 0.14956, 0.33138, 0.378,   0.408,   0.4093,  0.427,
    0.42736, 0.453,   0.471,   0.49008, 0.509,   0.5214,  0.53155, 0.547,
    0.57281, 0.574,   0.586,   0.5891,  0.59,    0.591,   0.6139,  0.625,
    0.625,   0.635,   0.645,   0.645,   0.657,   0.65793, 0.6753,  0.687,
    0.698,   0.7,     0.70692, 0.725,   0.72628, 0.72628, 0.752,   0.752,
    0.77714, 0.807,   0.809,   0.82,    0.82586, 0.85,    0.895,   0.895,
    0.9,     0.91,    0.93926, 0.945,   0.945,   0.995,   0.995,   1.0029,
    1.02,    1.04,    1.04,    1.0402,  1.05,    1.12091, 1.12091, 1.195,
    1.207,   1.2217,  1.232,   1.375,   1.3925,  1.44384, 1.46,    1.493,
    1.5,     1.53,    1.585,   1.585,   1.6,     1.68881, 1.69,    1.77,
    1.8,     1.869,   1.9,     1.99,    2.,      2.0199,  2.07,    2.077,
    2.11,    2.19,    2.3,     2.35,    2.5,     2.77,    2.9,     3.,
    3.05,    3.56,    3.63,    3.65,    3.67,    3.9,     4.,      5.,
    5.,      6.,      6.8001,  8.,      8.04,    8.8,     10.8,    11.7,
    12.8,    14.8,    16.,     16.2,    16.7,    29.,     32.1,    43.,
    50.,     60.,     70.,     100.,    140.,    147.,    175.,    200.,
    250.};

/// PDG data on pi+ p elastic cross section: cross section
const std::initializer_list<double> PIPLUSP_ELASTIC_SIG = {
    6.15,  15.8,  20.4,  140.9, 91.6,  71.6,  67.5,  57.3,  60.19, 46.6,  40.8,
    38.74, 30.6,  29.6,  30.59, 24.74, 24.31, 28.16, 19.83, 20.4,  20.64, 20.63,
    19.55, 15.75, 18.5,  17.2,  14.85, 16.16, 14.71, 15.32, 14.38, 12.2,  12.93,
    12.96, 12.17, 11.6,  11.06, 11.5,  10.62, 10.55, 8.82,  9.36,  8.97,  9.1,
    8.02,  8.38,  8.37,  8.14,  11.1,  9.3,   11.,   10.32, 9.87,  11.7,  11.15,
    12.05, 11.1,  12.37, 11.83, 10.3,  12.8,  14.54, 15.3,  14.3,  13.59, 12.6,
    12.3,  17.87, 16.5,  19.31, 18.73, 16.68, 13.8,  15.86, 16.7,  16.7,  15.05,
    13.04, 13.57, 12.46, 12.3,  11.81, 10.9,  9.84,  10.6,  9.1,   9.52,  9.46,
    9.44,  9.15,  8.45,  10.2,  6.9,   7.7,   8.3,   7.84,  7.02,  6.93,  7.07,
    6.88,  7.15,  6.5,   6.4,   5.85,  5.79,  5.33,  5.47,  4.9,   4.9,   5.02,
    4.75,  4.2,   4.54,  4.46,  4.21,  4.21,  3.98,  3.19,  3.37,  3.16,  3.29,
    3.1,   3.35,  3.3,   3.39,  3.24,  3.37,  3.17,  3.3};

/// A null interpolation that gets filled using the PIPLUSP_ELASTIC_SIG data
static std::unique_ptr<InterpolateDataLinear<double>>
    piplusp_elastic_interpolation = nullptr;

/// Center-of-mass energy list for π⁺ N⁺
const std::initializer_list<double> PIPLUSP_RES_SQRTS = {
    1.08, 1.10, 1.12, 1.14, 1.16, 1.18, 1.20, 1.22, 1.24, 1.26, 1.28, 1.30,
    1.32, 1.34, 1.36, 1.38, 1.40, 1.42, 1.44, 1.46, 1.48, 1.50, 1.52, 1.54,
    1.56, 1.58, 1.60, 1.62, 1.64, 1.66, 1.68, 1.70, 1.72, 1.74, 1.76, 1.78,
    1.80, 1.82, 1.84, 1.86, 1.88, 1.90, 1.92, 1.94, 1.96, 1.98, 2.00, 2.02,
    2.04, 2.06, 2.08, 2.10, 2.12, 2.14, 2.16, 2.18, 2.20};

/**
 * Elastic π⁺ N⁺ cross section contributions from decays.
 *
 * These need to be subtracted from the interpolation of the PDG data on
 * elastic cross sections. This data was generated using the SMASH analysis
 * suite and should be updated when strange resonances are changed or added.
 */
const std::initializer_list<double> PIPLUSP_RES_SIG = {
    0.138618,   2.13515,    8.158391,   20.991292,  45.854734, 89.292892,
    145.033063, 172.723465, 151.669374, 114.877364, 84.588934, 63.360182,
    48.779878,  38.585331,  31.261638,  25.851079,  21.765201, 18.615565,
    16.163947,  14.240117,  12.740128,  11.592541,  10.752035, 10.244949,
    10.011848,  10.03972,   10.182104,  9.99584,    9.503257,  8.846592,
    8.155468,   7.45333,    7.01551,    6.87968,    6.995852,  7.357051,
    8.003923,   8.796652,   9.558371,   10.117875,  10.133957, 9.541971,
    8.50303,    7.217433,   5.980272,   4.895307,   3.946998,  3.17339,
    2.523094,   1.938636,   1.462639,   1.015587,   0.660593,  0.36496,
    0.163456,   0.039142,   0.};

/// A null interpolation that gets filled using the PIPLUSP_RES data
static std::unique_ptr<InterpolateDataSpline>
    piplusp_elastic_res_interpolation = nullptr;
}  // namespace smash

#endif  // SRC_INCLUDE_PARAMETRIZATIONS_DATA_H_
