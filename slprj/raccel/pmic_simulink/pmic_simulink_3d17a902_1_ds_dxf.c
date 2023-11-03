#include "ne_ds.h"
#include "pmic_simulink_3d17a902_1_ds_sys_struct.h"
#include "pmic_simulink_3d17a902_1_ds_dxf.h"
#include "pmic_simulink_3d17a902_1_ds.h"
#include "pmic_simulink_3d17a902_1_ds_externals.h"
#include "pmic_simulink_3d17a902_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pmic_simulink_3d17a902_1_ds_dxf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t24 , NeDsMethodOutput * t25 ) { PmRealVector out ;
real_T t9 [ 16 ] ; real_T t12 [ 5 ] ; real_T t0 ; real_T t1 ; real_T t17 ;
real_T t19 ; real_T t2 ; real_T t20 ; real_T t3 ; real_T t5 ; real_T t6 ;
size_t t15 ; int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_2 ; int32_T
M_idx_3 ; int32_T M_idx_4 ; M_idx_0 = t24 -> mM . mX [ 0 ] ; M_idx_1 = t24 ->
mM . mX [ 1 ] ; M_idx_2 = t24 -> mM . mX [ 2 ] ; M_idx_3 = t24 -> mM . mX [ 3
] ; M_idx_4 = t24 -> mM . mX [ 4 ] ; out = t25 -> mDXF ; if ( M_idx_2 != 0 )
{ t0 = 1.000025 ; } else { t0 = 25001.000000000004 ; } if ( M_idx_1 != 0 ) {
t1 = 1.0001428571428572 ; } else { t1 = 142858.14285714287 ; } if ( M_idx_0
!= 0 ) { t2 = 1.0000833333333334 ; } else { t2 = 83334.333333333328 ; } if (
M_idx_3 != 0 ) { t3 = - 0.001 ; } else { t3 = - 1.0E+6 ; } if ( M_idx_2 != 0
) { t20 = 0.001001000025 ; } else { t20 = 1.0000000250010001E+6 ; } if (
M_idx_1 != 0 ) { t5 = 0.0010010001428571427 ; } else { t5 =
1.0000001428581428E+6 ; } if ( M_idx_0 != 0 ) { t6 = 0.0010010000833333332 ;
} else { t6 = 1.0000000833343334E+6 ; } if ( M_idx_3 != 0 ) { t17 = - 0.001 ;
} else { t17 = - 1.0E+6 ; } if ( M_idx_3 != 0 ) { t19 = - 1.000000000001 ; }
else { t19 = - 1.001 ; } t12 [ 0ULL ] = - 1.0E-6 ; t12 [ 1ULL ] = - 1.0E-6 ;
t12 [ 2ULL ] = - 1.0E-6 ; t12 [ 3ULL ] = - 1.0E-6 ; t12 [ 4ULL ] = 1.0E-6 ;
t9 [ 0ULL ] = t0 / 1.0E+6 ; t9 [ 1ULL ] = t1 / 1.0E+6 ; t9 [ 2ULL ] = t2 /
1.0E+6 ; t9 [ 3ULL ] = t3 / 1.0E+6 ; t9 [ 4ULL ] = t20 / 1.0E+6 ; t9 [ 5ULL ]
= t5 / 1.0E+6 ; t9 [ 6ULL ] = t6 / 1.0E+6 ; t9 [ 7ULL ] = t17 / 1.0E+6 ; t9 [
8ULL ] = ( M_idx_4 != 0 ? - 0.001 : - 1.0E+6 ) / 1.0E+6 ; t9 [ 9ULL ] = t19 /
1.0E+6 ; t9 [ 10ULL ] = 1.0E-6 ; for ( t15 = 0ULL ; t15 < 5ULL ; t15 ++ ) {
t9 [ t15 + 11ULL ] = t12 [ t15 ] ; } out . mX [ 0 ] = t9 [ 0 ] ; out . mX [ 1
] = t9 [ 1 ] ; out . mX [ 2 ] = t9 [ 2 ] ; out . mX [ 3 ] = t9 [ 3 ] ; out .
mX [ 4 ] = t9 [ 4 ] ; out . mX [ 5 ] = t9 [ 5 ] ; out . mX [ 6 ] = t9 [ 6 ] ;
out . mX [ 7 ] = t9 [ 7 ] ; out . mX [ 8 ] = t9 [ 8 ] ; out . mX [ 9 ] = t9 [
9 ] ; out . mX [ 10 ] = t9 [ 10 ] ; out . mX [ 11 ] = t9 [ 11 ] ; out . mX [
12 ] = t9 [ 12 ] ; out . mX [ 13 ] = t9 [ 13 ] ; out . mX [ 14 ] = t9 [ 14 ]
; out . mX [ 15 ] = t9 [ 15 ] ; ( void ) sys ; ( void ) t25 ; return 0 ; }
