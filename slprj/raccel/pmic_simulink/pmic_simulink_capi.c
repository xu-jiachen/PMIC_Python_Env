#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "pmic_simulink_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "pmic_simulink.h"
#include "pmic_simulink_capi.h"
#include "pmic_simulink_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"pmic_simulink/PWM Generator/Data Type Conversion2" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"pmic_simulink/PWM Generator1/Data Type Conversion2" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"pmic_simulink/PWM Generator2/Data Type Conversion2" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"pmic_simulink/PWM Generator3/Data Type Conversion2" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"pmic_simulink/PWM Generator4/Data Type Conversion2" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"pmic_simulink/PS-Simulink Converter/EVAL_KEY/RESHAPE" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"pmic_simulink/PS-Simulink Converter1/EVAL_KEY/RESHAPE" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"pmic_simulink/PS-Simulink Converter2/EVAL_KEY/RESHAPE" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"pmic_simulink/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"pmic_simulink/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"pmic_simulink/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"pmic_simulink/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"pmic_simulink/Solver Configuration/EVAL_KEY/INPUT_5_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"pmic_simulink/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"pmic_simulink/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( ""
) , 0 , 0 , 3 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"pmic_simulink/PWM Generator/Carrier counter/scale/Probe" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"pmic_simulink/PWM Generator1/Carrier counter/scale/Probe" ) , TARGET_STRING
( "" ) , 0 , 0 , 4 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"pmic_simulink/PWM Generator2/Carrier counter/scale/Probe" ) , TARGET_STRING
( "" ) , 0 , 0 , 4 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"pmic_simulink/PWM Generator3/Carrier counter/scale/Probe" ) , TARGET_STRING
( "" ) , 0 , 0 , 4 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"pmic_simulink/PWM Generator4/Carrier counter/scale/Probe" ) , TARGET_STRING
( "" ) , 0 , 0 , 4 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
 "pmic_simulink/PWM Generator/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Initial"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
 "pmic_simulink/PWM Generator/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1/Discrete/Initial"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
 "pmic_simulink/PWM Generator1/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Initial"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
 "pmic_simulink/PWM Generator1/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1/Discrete/Initial"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
 "pmic_simulink/PWM Generator2/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Initial"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
 "pmic_simulink/PWM Generator2/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1/Discrete/Initial"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
 "pmic_simulink/PWM Generator3/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Initial"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
 "pmic_simulink/PWM Generator3/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1/Discrete/Initial"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
 "pmic_simulink/PWM Generator4/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Initial"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
 "pmic_simulink/PWM Generator4/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1/Discrete/Initial"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 30 , TARGET_STRING (
"pmic_simulink/PWM Generator" ) , TARGET_STRING ( "Tper" ) , 0 , 0 , 0 } , {
31 , TARGET_STRING ( "pmic_simulink/PWM Generator" ) , TARGET_STRING (
"Tdelay" ) , 0 , 0 , 0 } , { 32 , TARGET_STRING (
"pmic_simulink/PWM Generator1" ) , TARGET_STRING ( "Tper" ) , 0 , 0 , 0 } , {
33 , TARGET_STRING ( "pmic_simulink/PWM Generator1" ) , TARGET_STRING (
"Tdelay" ) , 0 , 0 , 0 } , { 34 , TARGET_STRING (
"pmic_simulink/PWM Generator2" ) , TARGET_STRING ( "Tper" ) , 0 , 0 , 0 } , {
35 , TARGET_STRING ( "pmic_simulink/PWM Generator2" ) , TARGET_STRING (
"Tdelay" ) , 0 , 0 , 0 } , { 36 , TARGET_STRING (
"pmic_simulink/PWM Generator3" ) , TARGET_STRING ( "Tper" ) , 0 , 0 , 0 } , {
37 , TARGET_STRING ( "pmic_simulink/PWM Generator3" ) , TARGET_STRING (
"Tdelay" ) , 0 , 0 , 0 } , { 38 , TARGET_STRING (
"pmic_simulink/PWM Generator4" ) , TARGET_STRING ( "Tper" ) , 0 , 0 , 0 } , {
39 , TARGET_STRING ( "pmic_simulink/PWM Generator4" ) , TARGET_STRING (
"Tdelay" ) , 0 , 0 , 0 } , { 40 , TARGET_STRING ( "pmic_simulink/D_main" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 41 , TARGET_STRING (
"pmic_simulink/D_main_n" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 42 ,
TARGET_STRING ( "pmic_simulink/D_si_1" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 43 , TARGET_STRING ( "pmic_simulink/D_si_2" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 44 , TARGET_STRING ( "pmic_simulink/D_si_3" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 45 , TARGET_STRING (
"pmic_simulink/PWM Generator/Carrier counter" ) , TARGET_STRING ( "CarrCount"
) , 0 , 0 , 0 } , { 46 , TARGET_STRING (
"pmic_simulink/PWM Generator/Carrier counter" ) , TARGET_STRING ( "Range" ) ,
0 , 0 , 0 } , { 47 , TARGET_STRING (
"pmic_simulink/PWM Generator1/Carrier counter" ) , TARGET_STRING (
"CarrCount" ) , 0 , 0 , 0 } , { 48 , TARGET_STRING (
"pmic_simulink/PWM Generator1/Carrier counter" ) , TARGET_STRING ( "Range" )
, 0 , 0 , 0 } , { 49 , TARGET_STRING (
"pmic_simulink/PWM Generator2/Carrier counter" ) , TARGET_STRING (
"CarrCount" ) , 0 , 0 , 0 } , { 50 , TARGET_STRING (
"pmic_simulink/PWM Generator2/Carrier counter" ) , TARGET_STRING ( "Range" )
, 0 , 0 , 0 } , { 51 , TARGET_STRING (
"pmic_simulink/PWM Generator3/Carrier counter" ) , TARGET_STRING (
"CarrCount" ) , 0 , 0 , 0 } , { 52 , TARGET_STRING (
"pmic_simulink/PWM Generator3/Carrier counter" ) , TARGET_STRING ( "Range" )
, 0 , 0 , 0 } , { 53 , TARGET_STRING (
"pmic_simulink/PWM Generator4/Carrier counter" ) , TARGET_STRING (
"CarrCount" ) , 0 , 0 , 0 } , { 54 , TARGET_STRING (
"pmic_simulink/PWM Generator4/Carrier counter" ) , TARGET_STRING ( "Range" )
, 0 , 0 , 0 } , { 55 , TARGET_STRING (
 "pmic_simulink/PWM Generator/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 0 , 0 } , { 56 ,
TARGET_STRING (
 "pmic_simulink/PWM Generator/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)"
) , TARGET_STRING ( "x0" ) , 0 , 0 , 0 } , { 57 , TARGET_STRING (
 "pmic_simulink/PWM Generator/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 0 , 0 } , { 58 ,
TARGET_STRING ( "pmic_simulink/PWM Generator/Carrier counter/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING (
"pmic_simulink/PWM Generator/Carrier counter/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING (
"pmic_simulink/PWM Generator/Carrier counter/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 61 , TARGET_STRING (
"pmic_simulink/PWM Generator/Compare To Zero/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 62 , TARGET_STRING (
 "pmic_simulink/PWM Generator1/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 0 , 0 } , { 63 ,
TARGET_STRING (
 "pmic_simulink/PWM Generator1/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)"
) , TARGET_STRING ( "x0" ) , 0 , 0 , 0 } , { 64 , TARGET_STRING (
 "pmic_simulink/PWM Generator1/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 0 , 0 } , { 65 ,
TARGET_STRING ( "pmic_simulink/PWM Generator1/Carrier counter/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING (
"pmic_simulink/PWM Generator1/Carrier counter/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 67 , TARGET_STRING (
"pmic_simulink/PWM Generator1/Carrier counter/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING (
"pmic_simulink/PWM Generator1/Compare To Zero/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 69 , TARGET_STRING (
 "pmic_simulink/PWM Generator2/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 0 , 0 } , { 70 ,
TARGET_STRING (
 "pmic_simulink/PWM Generator2/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)"
) , TARGET_STRING ( "x0" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING (
 "pmic_simulink/PWM Generator2/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 0 , 0 } , { 72 ,
TARGET_STRING ( "pmic_simulink/PWM Generator2/Carrier counter/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 73 , TARGET_STRING (
"pmic_simulink/PWM Generator2/Carrier counter/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
"pmic_simulink/PWM Generator2/Carrier counter/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 75 , TARGET_STRING (
"pmic_simulink/PWM Generator2/Compare To Zero/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 76 , TARGET_STRING (
 "pmic_simulink/PWM Generator3/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 0 , 0 } , { 77 ,
TARGET_STRING (
 "pmic_simulink/PWM Generator3/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)"
) , TARGET_STRING ( "x0" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING (
 "pmic_simulink/PWM Generator3/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 0 , 0 } , { 79 ,
TARGET_STRING ( "pmic_simulink/PWM Generator3/Carrier counter/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING (
"pmic_simulink/PWM Generator3/Carrier counter/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING (
"pmic_simulink/PWM Generator3/Carrier counter/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 82 , TARGET_STRING (
"pmic_simulink/PWM Generator3/Compare To Zero/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING (
 "pmic_simulink/PWM Generator4/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 0 , 0 } , { 84 ,
TARGET_STRING (
 "pmic_simulink/PWM Generator4/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)"
) , TARGET_STRING ( "x0" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING (
 "pmic_simulink/PWM Generator4/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 0 , 0 } , { 86 ,
TARGET_STRING ( "pmic_simulink/PWM Generator4/Carrier counter/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 87 , TARGET_STRING (
"pmic_simulink/PWM Generator4/Carrier counter/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 88 , TARGET_STRING (
"pmic_simulink/PWM Generator4/Carrier counter/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 89 , TARGET_STRING (
"pmic_simulink/PWM Generator4/Compare To Zero/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 90 , TARGET_STRING (
"pmic_simulink/PWM Generator/Carrier counter/Limitation/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING (
"pmic_simulink/PWM Generator/Carrier counter/Limitation1/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 92 , TARGET_STRING (
"pmic_simulink/PWM Generator1/Carrier counter/Limitation/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING (
"pmic_simulink/PWM Generator1/Carrier counter/Limitation1/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 94 , TARGET_STRING (
"pmic_simulink/PWM Generator2/Carrier counter/Limitation/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 95 , TARGET_STRING (
"pmic_simulink/PWM Generator2/Carrier counter/Limitation1/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING (
"pmic_simulink/PWM Generator3/Carrier counter/Limitation/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 97 , TARGET_STRING (
"pmic_simulink/PWM Generator3/Carrier counter/Limitation1/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING (
"pmic_simulink/PWM Generator4/Carrier counter/Limitation/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 99 , TARGET_STRING (
"pmic_simulink/PWM Generator4/Carrier counter/Limitation1/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 100 , TARGET_STRING (
 "pmic_simulink/PWM Generator/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 101 , TARGET_STRING (
 "pmic_simulink/PWM Generator/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 102 , TARGET_STRING (
 "pmic_simulink/PWM Generator1/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 103 , TARGET_STRING (
 "pmic_simulink/PWM Generator1/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 104 , TARGET_STRING (
 "pmic_simulink/PWM Generator2/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING (
 "pmic_simulink/PWM Generator2/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 106 , TARGET_STRING (
 "pmic_simulink/PWM Generator3/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 107 , TARGET_STRING (
 "pmic_simulink/PWM Generator3/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 108 , TARGET_STRING (
 "pmic_simulink/PWM Generator4/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 109 , TARGET_STRING (
 "pmic_simulink/PWM Generator4/Carrier counter/Integrator with Wrapped State (Discrete or Continuous)1/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0
, 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 110 , 0
, TARGET_STRING ( "pmic_simulink/Output" ) , TARGET_STRING ( "V_o_0" ) , 1 ,
0 , 0 , 0 , 1 } , { 111 , 0 , TARGET_STRING ( "pmic_simulink/Output1" ) ,
TARGET_STRING ( "V_o_1" ) , 2 , 0 , 0 , 0 , 1 } , { 112 , 0 , TARGET_STRING (
"pmic_simulink/Output2" ) , TARGET_STRING ( "V_o_2" ) , 3 , 0 , 0 , 0 , 1 } ,
{ 113 , 0 , TARGET_STRING ( "pmic_simulink/Output3" ) , TARGET_STRING ( "" )
, 4 , 0 , 0 , 0 , 0 } , { 114 , 0 , TARGET_STRING ( "pmic_simulink/Output4" )
, TARGET_STRING ( "" ) , 5 , 0 , 0 , 0 , 0 } , { 115 , 0 , TARGET_STRING (
"pmic_simulink/Output5" ) , TARGET_STRING ( "" ) , 6 , 0 , 0 , 0 , 0 } , {
116 , 0 , TARGET_STRING ( "pmic_simulink/Output6" ) , TARGET_STRING ( "" ) ,
7 , 0 , 0 , 0 , 0 } , { 117 , 0 , TARGET_STRING ( "pmic_simulink/Output7" ) ,
TARGET_STRING ( "" ) , 8 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . nfa1ieecfm , & rtB . fxh4udczur ,
& rtB . nk1uhmwt1n , & rtB . ewmd2wegga , & rtB . kvpig12tyn , & rtB .
hylm1rbfel , & rtB . ge2sp0a0ty , & rtB . nootlevufh , & rtB . asx0ks2d0l [ 0
] , & rtB . ayrqcrieud [ 0 ] , & rtB . iqp23wcjzt [ 0 ] , & rtB . bv5i3f3rgt
[ 0 ] , & rtB . h1hb0r4ct0 [ 0 ] , & rtB . es5wnta2ki [ 0 ] , & rtB .
of5izgd2nh [ 0 ] , & rtB . bmq2skyotc [ 0 ] , & rtB . kjohml0ydc [ 0 ] , &
rtB . py2r1itzbv [ 0 ] , & rtB . ifhiyhymxq [ 0 ] , & rtB . eo3uatez0a [ 0 ]
, & rtB . i2avetyytp , & rtB . fdxn01rvgf , & rtB . epdqxd20p3 , & rtB .
azaujt5rtq , & rtB . d211xmj4vx , & rtB . pphouwueuk , & rtB . n3xiag5iab , &
rtB . lre4klrgga , & rtB . age5edt333 , & rtB . nkoasgdd2e , & rtP .
PWMGenerator_Tper , & rtP . PWMGenerator_Tdelay , & rtP . PWMGenerator1_Tper
, & rtP . PWMGenerator1_Tdelay , & rtP . PWMGenerator2_Tper , & rtP .
PWMGenerator2_Tdelay , & rtP . PWMGenerator3_Tper , & rtP .
PWMGenerator3_Tdelay , & rtP . PWMGenerator4_Tper , & rtP .
PWMGenerator4_Tdelay , & rtP . D_main_Value , & rtP . D_main_n_Value , & rtP
. D_si_1_Value , & rtP . D_si_2_Value , & rtP . D_si_3_Value , & rtP .
Carriercounter_CarrCount , & rtP . Carriercounter_Range , & rtP .
Carriercounter_CarrCount_ccnd30fhxr , & rtP . Carriercounter_Range_bgfczok2t5
, & rtP . Carriercounter_CarrCount_nlq1hz21k3 , & rtP .
Carriercounter_Range_dx20pwdeoq , & rtP . Carriercounter_CarrCount_f20soq4h5z
, & rtP . Carriercounter_Range_fzuqnnpgab , & rtP .
Carriercounter_CarrCount_eit53tw5h0 , & rtP . Carriercounter_Range_bwe3drtbjb
, & rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue , & rtP
. IntegratorwithWrappedStateDiscreteorContinuous_x0 , & rtP .
IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue , &
rtP . Constant3_Value , & rtP . Saturation_UpperSat , & rtP .
Saturation_LowerSat , & rtP . Constant_Value , & rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_evbtetgudb
, & rtP . IntegratorwithWrappedStateDiscreteorContinuous_x0_jpcp5p3x4d , &
rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_ppemyo5tni
, & rtP . Constant3_Value_fdh0kfnkgz , & rtP . Saturation_UpperSat_jhcxiltx5i
, & rtP . Saturation_LowerSat_bbdrzw2qys , & rtP . Constant_Value_ilyx3sxort
, & rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_d5dyvthcs4
, & rtP . IntegratorwithWrappedStateDiscreteorContinuous_x0_jbdq2s11ie , &
rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_kos5ps3goc
, & rtP . Constant3_Value_llyskhg1wi , & rtP . Saturation_UpperSat_agcdx2od5n
, & rtP . Saturation_LowerSat_epadsuqnyb , & rtP . Constant_Value_pa0axfuaby
, & rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_e15lhmtkyf
, & rtP . IntegratorwithWrappedStateDiscreteorContinuous_x0_m545ryqje2 , &
rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_gh1nl4mdaz
, & rtP . Constant3_Value_ca3jt2mcxg , & rtP . Saturation_UpperSat_ego33qyird
, & rtP . Saturation_LowerSat_mtozl4vgzg , & rtP . Constant_Value_dw5lwecznd
, & rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_kpvdirr0t4
, & rtP . IntegratorwithWrappedStateDiscreteorContinuous_x0_nvotyte21j , &
rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_fe1fa5l133
, & rtP . Constant3_Value_frwqtx1sbd , & rtP . Saturation_UpperSat_mmn4rnyigj
, & rtP . Saturation_LowerSat_om1ea1f4fz , & rtP . Constant_Value_izcbq3klps
, & rtP . Constant2_Value , & rtP . Constant2_Value_csuhh40fsp , & rtP .
Constant2_Value_pp0a1disph , & rtP . Constant2_Value_bhpllj300z , & rtP .
Constant2_Value_lqufvpapq4 , & rtP . Constant2_Value_nei4prnbsm , & rtP .
Constant2_Value_j1kboe2g4v , & rtP . Constant2_Value_dpgskevhhh , & rtP .
Constant2_Value_ljwuaakgzo , & rtP . Constant2_Value_gkqlrgad1a , & rtP .
Integrator_gainval , & rtP . Integrator_gainval_kxkpn5ktyp , & rtP .
Integrator_gainval_d3lkwgtuge , & rtP . Integrator_gainval_nml42p0n4g , & rtP
. Integrator_gainval_anntwrmt4d , & rtP . Integrator_gainval_prlifqcgec , &
rtP . Integrator_gainval_gsopvokafa , & rtP . Integrator_gainval_cx0xcinyfp ,
& rtP . Integrator_gainval_n0efa4a30f , & rtP . Integrator_gainval_p5ziwxx5xx
, & rtY . cyhrsve245 , & rtY . clfeez0y3v , & rtY . c5wedmtybf , & rtY .
kqqnlkbwxe , & rtY . katkqcgmut , & rtY . ain2f5zt2r , & rtY . dcajj3uovx , &
rtY . aqjl5sxt2y , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 4 , 1 , 3 , 1 , 24 , 1 , 2 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 1.0E-8 , 0.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 2 , ( uint8_T ) 0 } , { ( const void *
) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 0 , ( uint8_T ) 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 30 , rtRootInputs , 0 , rtRootOutputs , 8 }
, { rtBlockParameters , 80 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 723267604U , 1866956771U , 2882686808U ,
2799266740U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * pmic_simulink_GetCAPIStaticMap ( void
) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void pmic_simulink_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void pmic_simulink_host_InitializeDataMapInfo (
pmic_simulink_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
