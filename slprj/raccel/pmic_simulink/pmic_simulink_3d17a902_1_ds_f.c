#include "ne_ds.h"
#include "pmic_simulink_3d17a902_1_ds_sys_struct.h"
#include "pmic_simulink_3d17a902_1_ds_f.h"
#include "pmic_simulink_3d17a902_1_ds.h"
#include "pmic_simulink_3d17a902_1_ds_externals.h"
#include "pmic_simulink_3d17a902_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pmic_simulink_3d17a902_1_ds_f ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t7 , NeDsMethodOutput * t8 ) { PmRealVector out ;
real_T Ideal_Semiconductor_Switch2_i ; real_T X_idx_0 ; real_T X_idx_1 ;
real_T X_idx_2 ; real_T X_idx_3 ; real_T X_idx_4 ; real_T X_idx_5 ; real_T
X_idx_6 ; real_T X_idx_7 ; real_T X_idx_8 ; real_T X_idx_9 ; real_T t1 ;
real_T t2 ; real_T t3 ; real_T t4 ; int32_T M_idx_0 ; int32_T M_idx_1 ;
int32_T M_idx_2 ; int32_T M_idx_3 ; int32_T M_idx_4 ; M_idx_0 = t7 -> mM . mX
[ 0 ] ; M_idx_1 = t7 -> mM . mX [ 1 ] ; M_idx_2 = t7 -> mM . mX [ 2 ] ;
M_idx_3 = t7 -> mM . mX [ 3 ] ; M_idx_4 = t7 -> mM . mX [ 4 ] ; X_idx_0 = t7
-> mX . mX [ 0 ] ; X_idx_1 = t7 -> mX . mX [ 1 ] ; X_idx_2 = t7 -> mX . mX [
2 ] ; X_idx_3 = t7 -> mX . mX [ 3 ] ; X_idx_4 = t7 -> mX . mX [ 4 ] ; X_idx_5
= t7 -> mX . mX [ 5 ] ; X_idx_6 = t7 -> mX . mX [ 6 ] ; X_idx_7 = t7 -> mX .
mX [ 7 ] ; X_idx_8 = t7 -> mX . mX [ 8 ] ; X_idx_9 = t7 -> mX . mX [ 9 ] ;
out = t8 -> mF ; t4 = ( - X_idx_3 - X_idx_7 ) + X_idx_8 * - 1.0E-9 ; t1 =
X_idx_2 * - 0.083333333333333329 + X_idx_6 * - 1.0000000833333333 ; t2 = (
X_idx_6 * 1.0E-6 - X_idx_9 ) + X_idx_2 ; t3 = X_idx_1 * - 0.14285714285714285
+ X_idx_5 * - 1.0000001428571428 ; X_idx_5 = ( X_idx_5 * 1.0E-6 - X_idx_9 ) +
X_idx_1 ; Ideal_Semiconductor_Switch2_i = X_idx_0 * - 0.025 + X_idx_4 * -
1.000000025 ; X_idx_6 = ( X_idx_4 * 1.0E-6 - X_idx_9 ) + X_idx_0 ; X_idx_1 =
X_idx_8 + X_idx_9 ; X_idx_3 = ( - X_idx_9 - X_idx_8 ) + 5.0 ; if ( M_idx_0 !=
0 ) { X_idx_2 = t2 - t1 * 0.001 ; } else { X_idx_2 = t2 - t1 / 1.0E-6 ; } if
( M_idx_1 != 0 ) { t1 = X_idx_5 - t3 * 0.001 ; } else { t1 = X_idx_5 - t3 /
1.0E-6 ; } if ( M_idx_2 != 0 ) { t2 = X_idx_6 - Ideal_Semiconductor_Switch2_i
* 0.001 ; } else { t2 = X_idx_6 - Ideal_Semiconductor_Switch2_i / 1.0E-6 ; }
if ( M_idx_3 != 0 ) { t3 = X_idx_3 - t4 * - 0.001 ; } else { t3 = X_idx_3 - -
t4 / 1.0E-6 ; } if ( M_idx_4 != 0 ) { t4 = X_idx_1 - X_idx_7 * 0.001 ; } else
{ t4 = X_idx_1 - X_idx_7 / 1.0E-6 ; } out . mX [ 0 ] = - 0.0 ; out . mX [ 1 ]
= - 0.0 ; out . mX [ 2 ] = - 0.0 ; out . mX [ 3 ] = - 0.0 ; out . mX [ 4 ] =
X_idx_2 / 1.0E+6 ; out . mX [ 5 ] = t1 / 1.0E+6 ; out . mX [ 6 ] = t2 /
1.0E+6 ; out . mX [ 7 ] = t3 / 1.0E+6 ; out . mX [ 8 ] = t4 / 1.0E+6 ; out .
mX [ 9 ] = - 0.0 ; ( void ) sys ; ( void ) t8 ; return 0 ; }
