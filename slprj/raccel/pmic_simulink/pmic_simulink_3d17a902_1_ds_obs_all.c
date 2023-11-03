#include "ne_ds.h"
#include "pmic_simulink_3d17a902_1_ds_sys_struct.h"
#include "pmic_simulink_3d17a902_1_ds_obs_all.h"
#include "pmic_simulink_3d17a902_1_ds.h"
#include "pmic_simulink_3d17a902_1_ds_externals.h"
#include "pmic_simulink_3d17a902_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pmic_simulink_3d17a902_1_ds_obs_all ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t12 , NeDsMethodOutput * t13 ) { PmRealVector
out ; real_T t0 [ 103 ] ; real_T Capacitor_p_v ; real_T
Ideal_Semiconductor_Switch1_i ; real_T Ideal_Semiconductor_Switch1_v ; real_T
Ideal_Semiconductor_Switch2_i ; real_T Ideal_Semiconductor_Switch2_v ; real_T
Ideal_Semiconductor_Switch3_K_v ; real_T Ideal_Semiconductor_Switch3_v ;
real_T Ideal_Semiconductor_Switch_i ; real_T Ideal_Semiconductor_Switch_v ;
real_T Resistor1_i ; real_T Resistor2_i ; real_T Resistor_i ; real_T U_idx_0
; real_T U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T
X_idx_0 ; real_T X_idx_1 ; real_T X_idx_2 ; real_T X_idx_3 ; real_T X_idx_4 ;
real_T X_idx_5 ; real_T X_idx_6 ; real_T X_idx_7 ; real_T X_idx_8 ; real_T
X_idx_9 ; real_T t1 ; real_T t2 ; real_T t3 ; int32_T b ; U_idx_0 = t12 -> mU
. mX [ 0 ] ; U_idx_1 = t12 -> mU . mX [ 1 ] ; U_idx_2 = t12 -> mU . mX [ 2 ]
; U_idx_3 = t12 -> mU . mX [ 3 ] ; U_idx_4 = t12 -> mU . mX [ 4 ] ; X_idx_0 =
t12 -> mX . mX [ 0 ] ; X_idx_1 = t12 -> mX . mX [ 1 ] ; X_idx_2 = t12 -> mX .
mX [ 2 ] ; X_idx_3 = t12 -> mX . mX [ 3 ] ; X_idx_4 = t12 -> mX . mX [ 4 ] ;
X_idx_5 = t12 -> mX . mX [ 5 ] ; X_idx_6 = t12 -> mX . mX [ 6 ] ; X_idx_7 =
t12 -> mX . mX [ 7 ] ; X_idx_8 = t12 -> mX . mX [ 8 ] ; X_idx_9 = t12 -> mX .
mX [ 9 ] ; out = t13 -> mOBS_ALL ; Capacitor_p_v = X_idx_4 * 1.0E-6 + X_idx_0
; t1 = X_idx_5 * 1.0E-6 + X_idx_1 ; t2 = X_idx_6 * 1.0E-6 + X_idx_2 ; t3 = (
- X_idx_3 - X_idx_7 ) + X_idx_8 * - 1.0E-9 ; Ideal_Semiconductor_Switch_i =
X_idx_2 * - 0.083333333333333329 + X_idx_6 * - 1.0000000833333333 ;
Ideal_Semiconductor_Switch_v = ( X_idx_6 * 1.0E-6 - X_idx_9 ) + X_idx_2 ;
Ideal_Semiconductor_Switch1_i = X_idx_1 * - 0.14285714285714285 + X_idx_5 * -
1.0000001428571428 ; Ideal_Semiconductor_Switch1_v = ( X_idx_5 * 1.0E-6 -
X_idx_9 ) + X_idx_1 ; Ideal_Semiconductor_Switch2_i = X_idx_0 * - 0.025 +
X_idx_4 * - 1.000000025 ; Ideal_Semiconductor_Switch2_v = ( X_idx_4 * 1.0E-6
- X_idx_9 ) + X_idx_0 ; Ideal_Semiconductor_Switch3_K_v = X_idx_8 + X_idx_9 ;
Ideal_Semiconductor_Switch3_v = ( - X_idx_9 - X_idx_8 ) + 5.0 ; Resistor_i =
X_idx_2 * 0.083333333333333329 + X_idx_6 * 8.3333333333333325E-8 ;
Resistor1_i = X_idx_1 * 0.14285714285714285 + X_idx_5 * 1.4285714285714285E-7
; Resistor2_i = X_idx_0 * 0.025 + X_idx_4 * 2.5E-8 ; t0 [ 0ULL ] = 0.0 ; t0 [
1ULL ] = 0.0 ; t0 [ 2ULL ] = Capacitor_p_v ; t0 [ 3ULL ] = X_idx_4 ; t0 [
4ULL ] = X_idx_4 * X_idx_4 * 1.0E-9 * 1000.0 ; t0 [ 5ULL ] = Capacitor_p_v ;
t0 [ 6ULL ] = X_idx_0 ; t0 [ 7ULL ] = 0.0 ; t0 [ 8ULL ] = 0.0 ; t0 [ 9ULL ] =
t1 ; t0 [ 10ULL ] = X_idx_5 ; t0 [ 11ULL ] = X_idx_5 * X_idx_5 * 1.0E-9 *
1000.0 ; t0 [ 12ULL ] = t1 ; t0 [ 13ULL ] = X_idx_1 ; t0 [ 14ULL ] = 0.0 ; t0
[ 15ULL ] = 0.0 ; t0 [ 16ULL ] = t2 ; t0 [ 17ULL ] = X_idx_6 ; t0 [ 18ULL ] =
X_idx_6 * X_idx_6 * 1.0E-9 * 1000.0 ; t0 [ 19ULL ] = t2 ; t0 [ 20ULL ] =
X_idx_2 ; t0 [ 21ULL ] = t3 ; t0 [ 22ULL ] = 0.0 ; t0 [ 23ULL ] = 5.0 ; t0 [
24ULL ] = 5.0 ; t0 [ 25ULL ] = 0.0 ; t0 [ 26ULL ] = 0.0 ; t0 [ 27ULL ] = 0.0
; t0 [ 28ULL ] = 0.0 ; t0 [ 29ULL ] = t2 ; t0 [ 30ULL ] = U_idx_0 ; t0 [
31ULL ] = 0.0 ; t0 [ 32ULL ] = X_idx_9 ; t0 [ 33ULL ] =
Ideal_Semiconductor_Switch_i ; t0 [ 34ULL ] = Ideal_Semiconductor_Switch_i *
Ideal_Semiconductor_Switch_v * 0.001 * 1000.0 ; t0 [ 35ULL ] =
Ideal_Semiconductor_Switch_v ; t0 [ 36ULL ] = U_idx_0 ; t0 [ 37ULL ] = t1 ;
t0 [ 38ULL ] = U_idx_1 ; t0 [ 39ULL ] = 0.0 ; t0 [ 40ULL ] = X_idx_9 ; t0 [
41ULL ] = Ideal_Semiconductor_Switch1_i ; t0 [ 42ULL ] =
Ideal_Semiconductor_Switch1_i * Ideal_Semiconductor_Switch1_v * 0.001 *
1000.0 ; t0 [ 43ULL ] = Ideal_Semiconductor_Switch1_v ; t0 [ 44ULL ] =
U_idx_1 ; t0 [ 45ULL ] = Capacitor_p_v ; t0 [ 46ULL ] = U_idx_2 ; t0 [ 47ULL
] = 0.0 ; t0 [ 48ULL ] = X_idx_9 ; t0 [ 49ULL ] =
Ideal_Semiconductor_Switch2_i ; t0 [ 50ULL ] = Ideal_Semiconductor_Switch2_i
* Ideal_Semiconductor_Switch2_v * 0.001 * 1000.0 ; t0 [ 51ULL ] =
Ideal_Semiconductor_Switch2_v ; t0 [ 52ULL ] = U_idx_2 ; t0 [ 53ULL ] = 5.0 ;
t0 [ 54ULL ] = U_idx_3 ; t0 [ 55ULL ] = 0.0 ; t0 [ 56ULL ] =
Ideal_Semiconductor_Switch3_K_v ; t0 [ 57ULL ] = - t3 ; t0 [ 58ULL ] = t3 *
Ideal_Semiconductor_Switch3_v * - 0.001 * 1000.0 ; t0 [ 59ULL ] =
Ideal_Semiconductor_Switch3_v ; t0 [ 60ULL ] = U_idx_3 ; t0 [ 61ULL ] =
Ideal_Semiconductor_Switch3_K_v ; t0 [ 62ULL ] = U_idx_4 ; t0 [ 63ULL ] = 0.0
; t0 [ 64ULL ] = 0.0 ; t0 [ 65ULL ] = X_idx_7 ; t0 [ 66ULL ] =
Ideal_Semiconductor_Switch3_K_v * X_idx_7 * 0.001 * 1000.0 ; t0 [ 67ULL ] =
Ideal_Semiconductor_Switch3_K_v ; t0 [ 68ULL ] = U_idx_4 ; t0 [ 69ULL ] =
X_idx_8 * 1.0E-9 + X_idx_3 ; t0 [ 70ULL ] = X_idx_9 ; t0 [ 71ULL ] =
Ideal_Semiconductor_Switch3_K_v ; t0 [ 72ULL ] = X_idx_8 ; t0 [ 73ULL ] =
X_idx_3 ; t0 [ 74ULL ] = Resistor_i ; t0 [ 75ULL ] = 0.0 ; t0 [ 76ULL ] = t2
; t0 [ 77ULL ] = Resistor_i * 12.0 ; t0 [ 78ULL ] = Resistor1_i ; t0 [ 79ULL
] = 0.0 ; t0 [ 80ULL ] = t1 ; t0 [ 81ULL ] = Resistor1_i * 7.0 ; t0 [ 82ULL ]
= Resistor2_i ; t0 [ 83ULL ] = 0.0 ; t0 [ 84ULL ] = Capacitor_p_v ; t0 [
85ULL ] = Resistor2_i * 40.0 ; t0 [ 86ULL ] = U_idx_1 ; t0 [ 87ULL ] =
U_idx_2 ; t0 [ 88ULL ] = U_idx_3 ; t0 [ 89ULL ] = U_idx_4 ; t0 [ 90ULL ] =
U_idx_0 ; t0 [ 91ULL ] = t2 ; t0 [ 92ULL ] = 0.0 ; t0 [ 93ULL ] = t2 ; t0 [
94ULL ] = t1 ; t0 [ 95ULL ] = 0.0 ; t0 [ 96ULL ] = t1 ; t0 [ 97ULL ] = t1 ;
t0 [ 98ULL ] = Capacitor_p_v ; t0 [ 99ULL ] = 0.0 ; t0 [ 100ULL ] =
Capacitor_p_v ; t0 [ 101ULL ] = Capacitor_p_v ; t0 [ 102ULL ] = t2 ; for ( b
= 0 ; b < 103 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) sys ; ( void
) t13 ; return 0 ; }
