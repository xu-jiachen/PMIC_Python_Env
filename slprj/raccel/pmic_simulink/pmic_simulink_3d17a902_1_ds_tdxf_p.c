#include "ne_ds.h"
#include "pmic_simulink_3d17a902_1_ds_sys_struct.h"
#include "pmic_simulink_3d17a902_1_ds_tdxf_p.h"
#include "pmic_simulink_3d17a902_1_ds.h"
#include "pmic_simulink_3d17a902_1_ds_externals.h"
#include "pmic_simulink_3d17a902_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T pmic_simulink_3d17a902_1_ds_tdxf_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mTDXF_P ; out . mNumCol = 10ULL ; out .
mNumRow = 10ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 3 ; out . mJc [ 2 ]
= 6 ; out . mJc [ 3 ] = 9 ; out . mJc [ 4 ] = 12 ; out . mJc [ 5 ] = 15 ; out
. mJc [ 6 ] = 18 ; out . mJc [ 7 ] = 21 ; out . mJc [ 8 ] = 23 ; out . mJc [
9 ] = 27 ; out . mJc [ 10 ] = 32 ; out . mIr [ 0 ] = 0 ; out . mIr [ 1 ] = 6
; out . mIr [ 2 ] = 9 ; out . mIr [ 3 ] = 1 ; out . mIr [ 4 ] = 5 ; out . mIr
[ 5 ] = 9 ; out . mIr [ 6 ] = 2 ; out . mIr [ 7 ] = 4 ; out . mIr [ 8 ] = 9 ;
out . mIr [ 9 ] = 3 ; out . mIr [ 10 ] = 7 ; out . mIr [ 11 ] = 9 ; out . mIr
[ 12 ] = 0 ; out . mIr [ 13 ] = 6 ; out . mIr [ 14 ] = 9 ; out . mIr [ 15 ] =
1 ; out . mIr [ 16 ] = 5 ; out . mIr [ 17 ] = 9 ; out . mIr [ 18 ] = 2 ; out
. mIr [ 19 ] = 4 ; out . mIr [ 20 ] = 9 ; out . mIr [ 21 ] = 7 ; out . mIr [
22 ] = 8 ; out . mIr [ 23 ] = 3 ; out . mIr [ 24 ] = 7 ; out . mIr [ 25 ] = 8
; out . mIr [ 26 ] = 9 ; out . mIr [ 27 ] = 4 ; out . mIr [ 28 ] = 5 ; out .
mIr [ 29 ] = 6 ; out . mIr [ 30 ] = 7 ; out . mIr [ 31 ] = 8 ; ( void ) sys ;
( void ) t2 ; return 0 ; }
