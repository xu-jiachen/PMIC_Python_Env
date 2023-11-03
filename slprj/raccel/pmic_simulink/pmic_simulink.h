#ifndef RTW_HEADER_pmic_simulink_h_
#define RTW_HEADER_pmic_simulink_h_
#ifndef pmic_simulink_COMMON_INCLUDES_
#define pmic_simulink_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "pmic_simulink_3d17a902_1_gateway.h"
#endif
#include "pmic_simulink_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME pmic_simulink
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (8)     
#define NBLOCKIO (40) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (4)   
#elif NCSTATES != 4
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T bmq2skyotc [ 2 ] ; real_T i2avetyytp ; real_T
fdxn01rvgf ; real_T nfa1ieecfm ; real_T asx0ks2d0l [ 4 ] ; real_T py2r1itzbv
[ 2 ] ; real_T d211xmj4vx ; real_T pphouwueuk ; real_T nk1uhmwt1n ; real_T
ayrqcrieud [ 4 ] ; real_T ifhiyhymxq [ 2 ] ; real_T n3xiag5iab ; real_T
lre4klrgga ; real_T ewmd2wegga ; real_T iqp23wcjzt [ 4 ] ; real_T kjohml0ydc
[ 2 ] ; real_T epdqxd20p3 ; real_T azaujt5rtq ; real_T fxh4udczur ; real_T
bv5i3f3rgt [ 4 ] ; real_T eo3uatez0a [ 2 ] ; real_T age5edt333 ; real_T
nkoasgdd2e ; real_T kvpig12tyn ; real_T h1hb0r4ct0 [ 4 ] ; real_T of5izgd2nh
[ 24 ] ; real_T es5wnta2ki [ 3 ] ; real_T hylm1rbfel ; real_T ge2sp0a0ty ;
real_T nootlevufh ; } B ; typedef struct { real_T oojuyjmsnj ; real_T
gzqgja0x1h ; real_T k2dqyad4ny [ 2 ] ; real_T alcascjxvj ; real_T i0ag2pecni
; real_T kwgopg2t3n [ 2 ] ; real_T gafqzlu0w1 ; real_T d1silreffk ; real_T
fmszeehxmh [ 2 ] ; real_T ap2c33xwtr ; real_T dwdhz1iyjs ; real_T jv2z4afd5d
[ 2 ] ; real_T mt4f5rcj2x ; real_T afez0twrop ; real_T iyo3z45joh [ 2 ] ;
real_T macvu5ceax [ 15 ] ; real_T hoab3tltb1 ; void * c2jutzvux0 ; void *
bpkv1n1asy ; void * mcx5zjqfsd ; void * gtnniq0pkj ; void * kwy52cji5n ; void
* lhuj0bctl5 ; void * nbapp4ueof ; void * coyvz3lfin ; void * autxzinyto ;
void * ezxkpcegs1 ; struct { void * LoggedData [ 6 ] ; } idoc0kafzc ; struct
{ void * AQHandles ; } mj5scnghd3 ; struct { void * AQHandles ; } dekwg20dqc
; struct { void * AQHandles ; } it2e5qe3ze ; struct { void * LoggedData [ 5 ]
; } ox2n2i01ug ; struct { void * AQHandles ; } fmlixiproz ; struct { void *
AQHandles ; } mgiuugcto4 ; struct { void * AQHandles ; } hbz3b5xqf1 ; struct
{ void * AQHandles ; } gcjzyzozu4 ; struct { void * AQHandles ; } jgabfuqjst
; struct { void * AQHandles ; } ggqfpuivzp ; struct { void * AQHandles ; }
ji20xszv05 ; int_T du34yopqjb [ 5 ] ; int_T mj13pzrwqe ; boolean_T mnf1ndoeql
; boolean_T ebqjvgm4dm ; boolean_T j2jti0zyzr ; boolean_T oavruknmhk ;
boolean_T kqp0y3lfdl ; boolean_T pbkl0kvbgr ; boolean_T kznqm03ejv ;
boolean_T amkaphy2rl ; boolean_T frofzd5eub ; boolean_T nklfvnrvwt ;
boolean_T hxb4cv0j4z ; boolean_T ccab25k2ww ; } DW ; typedef struct { real_T
m3bhukyrsr [ 4 ] ; } X ; typedef struct { real_T m3bhukyrsr [ 4 ] ; } XDot ;
typedef struct { boolean_T m3bhukyrsr [ 4 ] ; } XDis ; typedef struct {
real_T m3bhukyrsr [ 4 ] ; } CStateAbsTol ; typedef struct { real_T m3bhukyrsr
[ 4 ] ; } CXPtMin ; typedef struct { real_T m3bhukyrsr [ 4 ] ; } CXPtMax ;
typedef struct { real_T a10ogvsngy ; real_T nfaie0o5wo ; real_T mkgfvkoubi ;
real_T i0113riltl ; real_T dni5faxoba ; } ZCV ; typedef struct { real_T
cyhrsve245 ; real_T clfeez0y3v ; real_T c5wedmtybf ; real_T kqqnlkbwxe ;
real_T katkqcgmut ; real_T ain2f5zt2r ; real_T dcajj3uovx ; real_T aqjl5sxt2y
; } ExtY ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T Carriercounter_CarrCount ; real_T
Carriercounter_CarrCount_nlq1hz21k3 ; real_T
Carriercounter_CarrCount_f20soq4h5z ; real_T
Carriercounter_CarrCount_ccnd30fhxr ; real_T
Carriercounter_CarrCount_eit53tw5h0 ; real_T Carriercounter_Range ; real_T
Carriercounter_Range_dx20pwdeoq ; real_T Carriercounter_Range_fzuqnnpgab ;
real_T Carriercounter_Range_bgfczok2t5 ; real_T
Carriercounter_Range_bwe3drtbjb ; real_T PWMGenerator_Tdelay ; real_T
PWMGenerator2_Tdelay ; real_T PWMGenerator3_Tdelay ; real_T
PWMGenerator1_Tdelay ; real_T PWMGenerator4_Tdelay ; real_T PWMGenerator_Tper
; real_T PWMGenerator1_Tper ; real_T PWMGenerator2_Tper ; real_T
PWMGenerator3_Tper ; real_T PWMGenerator4_Tper ; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue ;
real_T IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_d5dyvthcs4
; real_T
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_kos5ps3goc
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_e15lhmtkyf
; real_T
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_gh1nl4mdaz
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_evbtetgudb
; real_T
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_ppemyo5tni
; real_T
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_kpvdirr0t4
; real_T
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_fe1fa5l133
; real_T IntegratorwithWrappedStateDiscreteorContinuous_x0 ; real_T
IntegratorwithWrappedStateDiscreteorContinuous_x0_jbdq2s11ie ; real_T
IntegratorwithWrappedStateDiscreteorContinuous_x0_m545ryqje2 ; real_T
IntegratorwithWrappedStateDiscreteorContinuous_x0_jpcp5p3x4d ; real_T
IntegratorwithWrappedStateDiscreteorContinuous_x0_nvotyte21j ; real_T
Constant_Value ; real_T Constant_Value_ilyx3sxort ; real_T
Constant_Value_pa0axfuaby ; real_T Constant_Value_dw5lwecznd ; real_T
Constant_Value_izcbq3klps ; real_T D_si_1_Value ; real_T Integrator_gainval ;
real_T Constant2_Value ; real_T Integrator_gainval_kxkpn5ktyp ; real_T
Constant2_Value_csuhh40fsp ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T D_si_2_Value ; real_T
Integrator_gainval_anntwrmt4d ; real_T Constant2_Value_lqufvpapq4 ; real_T
Integrator_gainval_prlifqcgec ; real_T Constant2_Value_nei4prnbsm ; real_T
Saturation_UpperSat_agcdx2od5n ; real_T Saturation_LowerSat_epadsuqnyb ;
real_T D_si_3_Value ; real_T Integrator_gainval_gsopvokafa ; real_T
Constant2_Value_j1kboe2g4v ; real_T Integrator_gainval_cx0xcinyfp ; real_T
Constant2_Value_dpgskevhhh ; real_T Saturation_UpperSat_ego33qyird ; real_T
Saturation_LowerSat_mtozl4vgzg ; real_T D_main_Value ; real_T
Integrator_gainval_d3lkwgtuge ; real_T Constant2_Value_pp0a1disph ; real_T
Integrator_gainval_nml42p0n4g ; real_T Constant2_Value_bhpllj300z ; real_T
Saturation_UpperSat_jhcxiltx5i ; real_T Saturation_LowerSat_bbdrzw2qys ;
real_T D_main_n_Value ; real_T Integrator_gainval_n0efa4a30f ; real_T
Constant2_Value_ljwuaakgzo ; real_T Integrator_gainval_p5ziwxx5xx ; real_T
Constant2_Value_gkqlrgad1a ; real_T Saturation_UpperSat_mmn4rnyigj ; real_T
Saturation_LowerSat_om1ea1f4fz ; real_T Constant3_Value ; real_T
Constant3_Value_fdh0kfnkgz ; real_T Constant3_Value_llyskhg1wi ; real_T
Constant3_Value_ca3jt2mcxg ; real_T Constant3_Value_frwqtx1sbd ; } ; extern
const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern ExtY rtY ; extern P rtP ; extern mxArray *
mr_pmic_simulink_GetDWork ( ) ; extern void mr_pmic_simulink_SetDWork ( const
mxArray * ssDW ) ; extern mxArray *
mr_pmic_simulink_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * pmic_simulink_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
