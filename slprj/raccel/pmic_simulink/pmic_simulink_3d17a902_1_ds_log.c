#include "ne_ds.h"
#include "pmic_simulink_3d17a902_1_ds_sys_struct.h"
#include "pmic_simulink_3d17a902_1_ds_log.h"
#include "pmic_simulink_3d17a902_1_ds.h"
#include "pmic_simulink_3d17a902_1_ds_externals.h"
#include "pmic_simulink_3d17a902_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pmic_simulink_3d17a902_1_ds_log ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t12 , NeDsMethodOutput * t13 ) { PmRealVector out ;
real_T Capacitor_p_v ; real_T Ideal_Semiconductor_Switch1_i ; real_T
Ideal_Semiconductor_Switch1_v ; real_T Ideal_Semiconductor_Switch2_i ; real_T
Ideal_Semiconductor_Switch2_v ; real_T Ideal_Semiconductor_Switch3_K_v ;
real_T Ideal_Semiconductor_Switch3_v ; real_T Ideal_Semiconductor_Switch_i ;
real_T Ideal_Semiconductor_Switch_v ; real_T Resistor1_i ; real_T Resistor2_i
; real_T Resistor_i ; real_T U_idx_0 ; real_T U_idx_1 ; real_T U_idx_2 ;
real_T U_idx_3 ; real_T U_idx_4 ; real_T X_idx_0 ; real_T X_idx_1 ; real_T
X_idx_2 ; real_T X_idx_3 ; real_T X_idx_4 ; real_T X_idx_5 ; real_T X_idx_6 ;
real_T X_idx_7 ; real_T X_idx_8 ; real_T X_idx_9 ; real_T t1 ; real_T t2 ;
real_T t3 ; U_idx_0 = t12 -> mU . mX [ 0 ] ; U_idx_1 = t12 -> mU . mX [ 1 ] ;
U_idx_2 = t12 -> mU . mX [ 2 ] ; U_idx_3 = t12 -> mU . mX [ 3 ] ; U_idx_4 =
t12 -> mU . mX [ 4 ] ; X_idx_0 = t12 -> mX . mX [ 0 ] ; X_idx_1 = t12 -> mX .
mX [ 1 ] ; X_idx_2 = t12 -> mX . mX [ 2 ] ; X_idx_3 = t12 -> mX . mX [ 3 ] ;
X_idx_4 = t12 -> mX . mX [ 4 ] ; X_idx_5 = t12 -> mX . mX [ 5 ] ; X_idx_6 =
t12 -> mX . mX [ 6 ] ; X_idx_7 = t12 -> mX . mX [ 7 ] ; X_idx_8 = t12 -> mX .
mX [ 8 ] ; X_idx_9 = t12 -> mX . mX [ 9 ] ; out = t13 -> mLOG ; Capacitor_p_v
= X_idx_4 * 1.0E-6 + X_idx_0 ; t1 = X_idx_5 * 1.0E-6 + X_idx_1 ; t2 = X_idx_6
* 1.0E-6 + X_idx_2 ; t3 = ( - X_idx_3 - X_idx_7 ) + X_idx_8 * - 1.0E-9 ;
Ideal_Semiconductor_Switch_i = X_idx_2 * - 0.083333333333333329 + X_idx_6 * -
1.0000000833333333 ; Ideal_Semiconductor_Switch_v = ( X_idx_6 * 1.0E-6 -
X_idx_9 ) + X_idx_2 ; Ideal_Semiconductor_Switch1_i = X_idx_1 * -
0.14285714285714285 + X_idx_5 * - 1.0000001428571428 ;
Ideal_Semiconductor_Switch1_v = ( X_idx_5 * 1.0E-6 - X_idx_9 ) + X_idx_1 ;
Ideal_Semiconductor_Switch2_i = X_idx_0 * - 0.025 + X_idx_4 * - 1.000000025 ;
Ideal_Semiconductor_Switch2_v = ( X_idx_4 * 1.0E-6 - X_idx_9 ) + X_idx_0 ;
Ideal_Semiconductor_Switch3_K_v = X_idx_8 + X_idx_9 ;
Ideal_Semiconductor_Switch3_v = ( - X_idx_9 - X_idx_8 ) + 5.0 ; Resistor_i =
X_idx_2 * 0.083333333333333329 + X_idx_6 * 8.3333333333333325E-8 ;
Resistor1_i = X_idx_1 * 0.14285714285714285 + X_idx_5 * 1.4285714285714285E-7
; Resistor2_i = X_idx_0 * 0.025 + X_idx_4 * 2.5E-8 ; out . mX [ 0 ] =
Capacitor_p_v ; out . mX [ 1 ] = X_idx_4 ; out . mX [ 2 ] = X_idx_4 * X_idx_4
* 1.0E-9 * 1000.0 ; out . mX [ 3 ] = Capacitor_p_v ; out . mX [ 4 ] = X_idx_0
; out . mX [ 5 ] = t1 ; out . mX [ 6 ] = X_idx_5 ; out . mX [ 7 ] = X_idx_5 *
X_idx_5 * 1.0E-9 * 1000.0 ; out . mX [ 8 ] = t1 ; out . mX [ 9 ] = X_idx_1 ;
out . mX [ 10 ] = t2 ; out . mX [ 11 ] = X_idx_6 ; out . mX [ 12 ] = X_idx_6
* X_idx_6 * 1.0E-9 * 1000.0 ; out . mX [ 13 ] = t2 ; out . mX [ 14 ] =
X_idx_2 ; out . mX [ 15 ] = t3 ; out . mX [ 16 ] = t2 ; out . mX [ 17 ] =
U_idx_0 ; out . mX [ 18 ] = X_idx_9 ; out . mX [ 19 ] =
Ideal_Semiconductor_Switch_i ; out . mX [ 20 ] = Ideal_Semiconductor_Switch_i
* Ideal_Semiconductor_Switch_v * 0.001 * 1000.0 ; out . mX [ 21 ] =
Ideal_Semiconductor_Switch_v ; out . mX [ 22 ] = U_idx_0 ; out . mX [ 23 ] =
t1 ; out . mX [ 24 ] = U_idx_1 ; out . mX [ 25 ] = X_idx_9 ; out . mX [ 26 ]
= Ideal_Semiconductor_Switch1_i ; out . mX [ 27 ] =
Ideal_Semiconductor_Switch1_i * Ideal_Semiconductor_Switch1_v * 0.001 *
1000.0 ; out . mX [ 28 ] = Ideal_Semiconductor_Switch1_v ; out . mX [ 29 ] =
U_idx_1 ; out . mX [ 30 ] = Capacitor_p_v ; out . mX [ 31 ] = U_idx_2 ; out .
mX [ 32 ] = X_idx_9 ; out . mX [ 33 ] = Ideal_Semiconductor_Switch2_i ; out .
mX [ 34 ] = Ideal_Semiconductor_Switch2_i * Ideal_Semiconductor_Switch2_v *
0.001 * 1000.0 ; out . mX [ 35 ] = Ideal_Semiconductor_Switch2_v ; out . mX [
36 ] = U_idx_2 ; out . mX [ 37 ] = U_idx_3 ; out . mX [ 38 ] =
Ideal_Semiconductor_Switch3_K_v ; out . mX [ 39 ] = - t3 ; out . mX [ 40 ] =
t3 * Ideal_Semiconductor_Switch3_v * - 0.001 * 1000.0 ; out . mX [ 41 ] =
Ideal_Semiconductor_Switch3_v ; out . mX [ 42 ] = U_idx_3 ; out . mX [ 43 ] =
Ideal_Semiconductor_Switch3_K_v ; out . mX [ 44 ] = U_idx_4 ; out . mX [ 45 ]
= X_idx_7 ; out . mX [ 46 ] = Ideal_Semiconductor_Switch3_K_v * X_idx_7 *
0.001 * 1000.0 ; out . mX [ 47 ] = Ideal_Semiconductor_Switch3_K_v ; out . mX
[ 48 ] = U_idx_4 ; out . mX [ 49 ] = X_idx_8 * 1.0E-9 + X_idx_3 ; out . mX [
50 ] = X_idx_9 ; out . mX [ 51 ] = Ideal_Semiconductor_Switch3_K_v ; out . mX
[ 52 ] = X_idx_8 ; out . mX [ 53 ] = X_idx_3 ; out . mX [ 54 ] = X_idx_8 *
X_idx_8 * 1.0000000000000002E-12 ; out . mX [ 55 ] = Resistor_i ; out . mX [
56 ] = t2 ; out . mX [ 57 ] = Resistor_i * 12.0 ; out . mX [ 58 ] =
Resistor_i * Resistor_i * 12.0 ; out . mX [ 59 ] = Resistor1_i ; out . mX [
60 ] = t1 ; out . mX [ 61 ] = Resistor1_i * 7.0 ; out . mX [ 62 ] =
Resistor1_i * Resistor1_i * 7.0 ; out . mX [ 63 ] = Resistor2_i ; out . mX [
64 ] = Capacitor_p_v ; out . mX [ 65 ] = Resistor2_i * 40.0 ; out . mX [ 66 ]
= Resistor2_i * Resistor2_i * 40.0 ; out . mX [ 67 ] = U_idx_1 ; out . mX [
68 ] = U_idx_2 ; out . mX [ 69 ] = U_idx_3 ; out . mX [ 70 ] = U_idx_4 ; out
. mX [ 71 ] = U_idx_0 ; out . mX [ 72 ] = t2 ; out . mX [ 73 ] = t2 ; out .
mX [ 74 ] = t1 ; out . mX [ 75 ] = t1 ; out . mX [ 76 ] = t1 ; out . mX [ 77
] = Capacitor_p_v ; out . mX [ 78 ] = Capacitor_p_v ; out . mX [ 79 ] =
Capacitor_p_v ; out . mX [ 80 ] = t2 ; ( void ) sys ; ( void ) t13 ; return 0
; }
