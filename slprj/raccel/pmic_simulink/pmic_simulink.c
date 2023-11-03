#include "pmic_simulink.h"
#include "rtwtypes.h"
#include "mwmathutil.h"
#include <string.h>
#include <stddef.h>
#include "pmic_simulink_private.h"
#include "rt_logging_mmi.h"
#include "pmic_simulink_capi.h"
#include "pmic_simulink_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "10.7 (R2023a) 19-Nov-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; ExtY rtY ; static SimStruct model_S ; SimStruct *
const rtS = & model_S ; void MdlInitialize ( void ) { rtDW . oojuyjmsnj = rtB
. i2avetyytp ; rtDW . gzqgja0x1h = rtB . fdxn01rvgf ; rtDW . alcascjxvj = rtB
. d211xmj4vx ; rtDW . i0ag2pecni = rtB . pphouwueuk ; rtDW . gafqzlu0w1 = rtB
. n3xiag5iab ; rtDW . d1silreffk = rtB . lre4klrgga ; rtDW . ap2c33xwtr = rtB
. epdqxd20p3 ; rtDW . dwdhz1iyjs = rtB . azaujt5rtq ; rtDW . mt4f5rcj2x = rtB
. age5edt333 ; rtDW . afez0twrop = rtB . nkoasgdd2e ; } void MdlStart ( void
) { CXPtMax * _rtXPerturbMax ; CXPtMin * _rtXPerturbMin ; NeModelParameters
modelParameters ; NeModelParameters modelParameters_p ; NeslSimulationData *
simulationData ; NeslSimulator * tmp ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char *
msg_e ; char * msg_p ; real_T tmp_m [ 20 ] ; real_T time ; real_T tmp_e ;
int32_T tmp_i ; int_T tmp_g [ 6 ] ; boolean_T tmp_p ; boolean_T val ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "V_o_1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "V_o_1" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"pmic_simulink/Output1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" )
; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "V_o_1" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . mj5scnghd3 .
AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo .
mmi . InstanceMap . fullPath , "4e6f3e38-7ecf-480e-bafb-78db2b89a7e8" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "V" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . mj5scnghd3 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . mj5scnghd3 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . mj5scnghd3 . AQHandles , "Continuous" ,
0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . mj5scnghd3 .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . mj5scnghd3 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
mj5scnghd3 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
mj5scnghd3 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetSignalDomainType ( rtDW . mj5scnghd3 . AQHandles , "outport" )
; sdiAsyncRepoSetSignalExportOrder ( rtDW . mj5scnghd3 . AQHandles , 2 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "V_o_2" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "V_o_2" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"pmic_simulink/Output2" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" )
; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "V_o_2" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . dekwg20dqc .
AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo .
mmi . InstanceMap . fullPath , "09a3cdac-85f0-4f8f-97e5-8af47fbb122e" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "V" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . dekwg20dqc . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . dekwg20dqc . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . dekwg20dqc . AQHandles , "Continuous" ,
0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . dekwg20dqc .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . dekwg20dqc . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
dekwg20dqc . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
dekwg20dqc . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetSignalDomainType ( rtDW . dekwg20dqc . AQHandles , "outport" )
; sdiAsyncRepoSetSignalExportOrder ( rtDW . dekwg20dqc . AQHandles , 3 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "V_o_0" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "V_o_0" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"pmic_simulink/Output" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ;
sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU
sigName = sdiGetLabelFromChars ( "V_o_0" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; rtDW . it2e5qe3ze . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"9476ddd3-d7e3-4d8a-b3cf-9aca338fb656" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . it2e5qe3ze . AQHandles , hDT , & srcInfo ) ; if ( rtDW . it2e5qe3ze .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . it2e5qe3ze . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
it2e5qe3ze . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . it2e5qe3ze .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . it2e5qe3ze . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . it2e5qe3ze . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetSignalDomainType ( rtDW . it2e5qe3ze . AQHandles , "outport" )
; sdiAsyncRepoSetSignalExportOrder ( rtDW . it2e5qe3ze . AQHandles , 1 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "pmic_simulink/Output6" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. fmlixiproz . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"611e7f22-eb0e-4a4a-9980-dbe32d0ccfa1" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . fmlixiproz . AQHandles , hDT , & srcInfo ) ; if ( rtDW . fmlixiproz .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . fmlixiproz . AQHandles ,
"1e-08" , 1.0E-8 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
fmlixiproz . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . fmlixiproz .
AQHandles , ssGetTaskTime ( rtS , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . fmlixiproz . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . fmlixiproz . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetSignalDomainType ( rtDW . fmlixiproz . AQHandles , "outport" )
; sdiAsyncRepoSetSignalExportOrder ( rtDW . fmlixiproz . AQHandles , 7 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "pmic_simulink/Output4" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. mgiuugcto4 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"3a9ac172-465e-47fa-babf-e1bb9bd48617" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . mgiuugcto4 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . mgiuugcto4 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . mgiuugcto4 . AQHandles ,
"1e-08" , 1.0E-8 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
mgiuugcto4 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . mgiuugcto4 .
AQHandles , ssGetTaskTime ( rtS , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . mgiuugcto4 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . mgiuugcto4 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetSignalDomainType ( rtDW . mgiuugcto4 . AQHandles , "outport" )
; sdiAsyncRepoSetSignalExportOrder ( rtDW . mgiuugcto4 . AQHandles , 5 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "pmic_simulink/Output5" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. hbz3b5xqf1 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"53ee52f4-9eb2-4c17-af33-456ce98ba3e2" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . hbz3b5xqf1 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . hbz3b5xqf1 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . hbz3b5xqf1 . AQHandles ,
"1e-08" , 1.0E-8 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
hbz3b5xqf1 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . hbz3b5xqf1 .
AQHandles , ssGetTaskTime ( rtS , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . hbz3b5xqf1 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . hbz3b5xqf1 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetSignalDomainType ( rtDW . hbz3b5xqf1 . AQHandles , "outport" )
; sdiAsyncRepoSetSignalExportOrder ( rtDW . hbz3b5xqf1 . AQHandles , 6 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "pmic_simulink/Output7" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. gcjzyzozu4 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"6d556ffc-d129-4f0f-a1f5-c6a05df39dc8" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . gcjzyzozu4 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . gcjzyzozu4 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . gcjzyzozu4 . AQHandles ,
"1e-08" , 1.0E-8 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
gcjzyzozu4 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . gcjzyzozu4 .
AQHandles , ssGetTaskTime ( rtS , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . gcjzyzozu4 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . gcjzyzozu4 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetSignalDomainType ( rtDW . gcjzyzozu4 . AQHandles , "outport" )
; sdiAsyncRepoSetSignalExportOrder ( rtDW . gcjzyzozu4 . AQHandles , 8 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "pmic_simulink/Output3" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. jgabfuqjst . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"9e0a6941-cb25-4808-90f8-e69456721b08" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "V" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . jgabfuqjst . AQHandles , hDT , & srcInfo ) ; if ( rtDW . jgabfuqjst .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . jgabfuqjst . AQHandles ,
"1e-08" , 1.0E-8 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
jgabfuqjst . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . jgabfuqjst .
AQHandles , ssGetTaskTime ( rtS , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . jgabfuqjst . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . jgabfuqjst . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetSignalDomainType ( rtDW . jgabfuqjst . AQHandles , "outport" )
; sdiAsyncRepoSetSignalExportOrder ( rtDW . jgabfuqjst . AQHandles , 4 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"pmic_simulink/PWM Generator2" ) ; sdiLabelU blockSID = sdiGetLabelFromChars
( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ggqfpuivzp . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ddcaa892-5937-4f87-b284-c147d5090214" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . ggqfpuivzp . AQHandles , hDT , & srcInfo ) ; if ( rtDW . ggqfpuivzp .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ggqfpuivzp . AQHandles ,
"1e-08" , 1.0E-8 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ggqfpuivzp . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ggqfpuivzp .
AQHandles , ssGetTaskTime ( rtS , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ggqfpuivzp . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ggqfpuivzp . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"pmic_simulink/PWM Generator3" ) ; sdiLabelU blockSID = sdiGetLabelFromChars
( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ji20xszv05 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"1bff935a-4bc1-4fae-9810-afad802842ed" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . ji20xszv05 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . ji20xszv05 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ji20xszv05 . AQHandles ,
"1e-08" , 1.0E-8 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ji20xszv05 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ji20xszv05 .
AQHandles , ssGetTaskTime ( rtS , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ji20xszv05 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ji20xszv05 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } rtB . bmq2skyotc [ 0 ] = 1.0E-8 ;
rtB . bmq2skyotc [ 1 ] = 0.0 ; rtB . i2avetyytp = rtP .
IntegratorwithWrappedStateDiscreteorContinuous_x0 ; rtDW . mnf1ndoeql = true
; rtB . fdxn01rvgf = rtP . PWMGenerator_Tdelay ; rtDW . ebqjvgm4dm = true ;
rtB . py2r1itzbv [ 0 ] = 1.0E-8 ; rtB . py2r1itzbv [ 1 ] = 0.0 ; rtB .
d211xmj4vx = rtP .
IntegratorwithWrappedStateDiscreteorContinuous_x0_jbdq2s11ie ; rtDW .
j2jti0zyzr = true ; rtB . pphouwueuk = rtP . PWMGenerator2_Tdelay ; rtDW .
oavruknmhk = true ; rtB . ifhiyhymxq [ 0 ] = 1.0E-8 ; rtB . ifhiyhymxq [ 1 ]
= 0.0 ; rtB . n3xiag5iab = rtP .
IntegratorwithWrappedStateDiscreteorContinuous_x0_m545ryqje2 ; rtDW .
kqp0y3lfdl = true ; rtB . lre4klrgga = rtP . PWMGenerator3_Tdelay ; rtDW .
pbkl0kvbgr = true ; rtB . kjohml0ydc [ 0 ] = 1.0E-8 ; rtB . kjohml0ydc [ 1 ]
= 0.0 ; rtB . epdqxd20p3 = rtP .
IntegratorwithWrappedStateDiscreteorContinuous_x0_jpcp5p3x4d ; rtDW .
kznqm03ejv = true ; rtB . azaujt5rtq = rtP . PWMGenerator1_Tdelay ; rtDW .
amkaphy2rl = true ; rtB . eo3uatez0a [ 0 ] = 1.0E-8 ; rtB . eo3uatez0a [ 1 ]
= 0.0 ; rtB . age5edt333 = rtP .
IntegratorwithWrappedStateDiscreteorContinuous_x0_nvotyte21j ; rtDW .
frofzd5eub = true ; rtB . nkoasgdd2e = rtP . PWMGenerator4_Tdelay ; rtDW .
nklfvnrvwt = true ; tmp = nesl_lease_simulator (
"pmic_simulink/Solver Configuration_1" , 0 , 0 ) ; rtDW . c2jutzvux0 = ( void
* ) tmp ; tmp_p = pointer_is_null ( rtDW . c2jutzvux0 ) ; if ( tmp_p ) {
pmic_simulink_3d17a902_1_gateway ( ) ; tmp = nesl_lease_simulator (
"pmic_simulink/Solver Configuration_1" , 0 , 0 ) ; rtDW . c2jutzvux0 = ( void
* ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"pmic_simulink/Solver Configuration_100" , ( void * * ) ( & rtDW . c2jutzvux0
) , 0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
simulationData = nesl_create_simulation_data ( ) ; rtDW . bpkv1n1asy = ( void
* ) simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
mcx5zjqfsd = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverAbsTol = 0.001 ;
modelParameters . mSolverRelTol = 0.001 ; modelParameters .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ; modelParameters . mStartTime
= 0.0 ; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_OFF ; modelParameters .
mRTWModifiedTimeStamp = 6.1827039E+8 ; modelParameters . mZcDisabled = false
; modelParameters . mUseModelRefSolver = false ; tmp_e = 0.001 ;
modelParameters . mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters .
mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters . mVariableStepSolver
= tmp_p ; tmp_p = false ; modelParameters . mIsUsingODEN = tmp_p ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; val = ssGetGlobalInitialStatesAvailable
( rtS ) ; if ( tmp_p ) { val = ( val && ssIsFirstInitCond ( rtS ) ) ; }
modelParameters . mLoadInitialState = val ; modelParameters . mZcDisabled =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . mcx5zjqfsd ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . c2jutzvux0
, & modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . bpkv1n1asy ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . m3bhukyrsr [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 15 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . macvu5ceax [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
du34yopqjb [ 0 ] ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp_p ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS
) ; tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . asx0ks2d0l [ 0 ] ; tmp_m [ 1 ] = rtB . asx0ks2d0l [ 1 ] ;
tmp_m [ 2 ] = rtB . asx0ks2d0l [ 2 ] ; tmp_m [ 3 ] = rtB . asx0ks2d0l [ 3 ] ;
tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . ayrqcrieud [ 0 ] ; tmp_m [ 5 ] = rtB .
ayrqcrieud [ 1 ] ; tmp_m [ 6 ] = rtB . ayrqcrieud [ 2 ] ; tmp_m [ 7 ] = rtB .
ayrqcrieud [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . iqp23wcjzt [ 0 ] ;
tmp_m [ 9 ] = rtB . iqp23wcjzt [ 1 ] ; tmp_m [ 10 ] = rtB . iqp23wcjzt [ 2 ]
; tmp_m [ 11 ] = rtB . iqp23wcjzt [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
rtB . bv5i3f3rgt [ 0 ] ; tmp_m [ 13 ] = rtB . bv5i3f3rgt [ 1 ] ; tmp_m [ 14 ]
= rtB . bv5i3f3rgt [ 2 ] ; tmp_m [ 15 ] = rtB . bv5i3f3rgt [ 3 ] ; tmp_g [ 4
] = 16 ; tmp_m [ 16 ] = rtB . h1hb0r4ct0 [ 0 ] ; tmp_m [ 17 ] = rtB .
h1hb0r4ct0 [ 1 ] ; tmp_m [ 18 ] = rtB . h1hb0r4ct0 [ 2 ] ; tmp_m [ 19 ] = rtB
. h1hb0r4ct0 [ 3 ] ; tmp_g [ 5 ] = 20 ; simulationData -> mData ->
mInputValues . mN = 20 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 6 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mNumjacDxLo . mN = 4 ; simulationData -> mData ->
mNumjacDxLo . mX = & _rtXPerturbMin -> m3bhukyrsr [ 0 ] ; simulationData ->
mData -> mNumjacDxHi . mN = 4 ; simulationData -> mData -> mNumjacDxHi . mX =
& _rtXPerturbMax -> m3bhukyrsr [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . mcx5zjqfsd ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . c2jutzvux0 ,
NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus
( rtS , msg_p ) ; } } tmp = nesl_lease_simulator (
"pmic_simulink/Solver Configuration_1" , 1 , 0 ) ; rtDW . lhuj0bctl5 = ( void
* ) tmp ; tmp_p = pointer_is_null ( rtDW . lhuj0bctl5 ) ; if ( tmp_p ) {
pmic_simulink_3d17a902_1_gateway ( ) ; tmp = nesl_lease_simulator (
"pmic_simulink/Solver Configuration_1" , 1 , 0 ) ; rtDW . lhuj0bctl5 = ( void
* ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"pmic_simulink/Solver Configuration_110" , ( void * * ) ( & rtDW . lhuj0bctl5
) , 0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
simulationData = nesl_create_simulation_data ( ) ; rtDW . nbapp4ueof = ( void
* ) simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
coyvz3lfin = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverAbsTol = 0.001 ;
modelParameters_p . mSolverRelTol = 0.001 ; modelParameters_p .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ; modelParameters_p .
mStartTime = 0.0 ; modelParameters_p . mLoadInitialState = false ;
modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_OFF
; modelParameters_p . mRTWModifiedTimeStamp = 6.1827039E+8 ;
modelParameters_p . mZcDisabled = false ; modelParameters_p .
mUseModelRefSolver = false ; tmp_e = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_p . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_p . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_p . mIsUsingODEN = tmp_p ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; val = ssGetGlobalInitialStatesAvailable
( rtS ) ; if ( tmp_p ) { val = ( val && ssIsFirstInitCond ( rtS ) ) ; }
modelParameters_p . mLoadInitialState = val ; modelParameters_p . mZcDisabled
= false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . coyvz3lfin ;
diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * )
rtDW . lhuj0bctl5 , & modelParameters_p , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p
) { msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS
, msg_e ) ; } } MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { real_T
gprjp501ze ; real_T m3yq5uqwc3 ; real_T gmdyhzlrpn ; real_T g0a53myg0s ;
real_T lv4vvyeoz0 ; NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_p ; real_T
tmp_m [ 44 ] ; real_T tmp_p [ 20 ] ; real_T boy11ziqir ; real_T jr0sqgitzr ;
real_T time ; real_T time_e ; real_T time_i ; real_T time_p ; int32_T tmp_i ;
int_T tmp_g [ 7 ] ; int_T tmp_e [ 6 ] ; boolean_T tmp ; if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { if ( rtDW . mnf1ndoeql ) { rtDW . mnf1ndoeql = false ; rtB
. i2avetyytp = rtP . IntegratorwithWrappedStateDiscreteorContinuous_x0 ; }
else { rtB . i2avetyytp = rtDW . oojuyjmsnj - muDoubleScalarFloor ( 1.0 / (
rtP . PWMGenerator_Tper - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue ) * (
rtDW . oojuyjmsnj - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue ) ) * (
rtP . PWMGenerator_Tper - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue ) ; }
if ( ( rtDW . oojuyjmsnj < rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue ) || (
rtDW . oojuyjmsnj >= rtP . PWMGenerator_Tper ) ) { rtDW . oojuyjmsnj = rtB .
i2avetyytp ; } gprjp501ze = rtDW . oojuyjmsnj ; boy11ziqir = rtP .
PWMGenerator_Tper / ( rtP . PWMGenerator_Tper - rtB . bmq2skyotc [ 0 ] ) *
gprjp501ze ; jr0sqgitzr = rtB . bmq2skyotc [ 0 ] + rtP . PWMGenerator_Tper ;
if ( rtDW . ebqjvgm4dm ) { rtDW . ebqjvgm4dm = false ; rtB . fdxn01rvgf = rtP
. PWMGenerator_Tdelay ; } else { rtB . fdxn01rvgf = rtDW . gzqgja0x1h -
muDoubleScalarFloor ( 1.0 / ( 2.0 * rtP . PWMGenerator_Tper - rtP .
IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue ) * (
rtDW . gzqgja0x1h - rtP .
IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue ) ) *
( 2.0 * rtP . PWMGenerator_Tper - rtP .
IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue ) ; }
if ( ( rtDW . gzqgja0x1h < rtP .
IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue ) || (
rtDW . gzqgja0x1h >= 2.0 * rtP . PWMGenerator_Tper ) ) { rtDW . gzqgja0x1h =
rtB . fdxn01rvgf ; } switch ( ( int32_T ) rtP . Carriercounter_CarrCount ) {
case 1 : boy11ziqir -= muDoubleScalarFloor ( boy11ziqir / jr0sqgitzr ) *
jr0sqgitzr ; break ; case 2 : boy11ziqir = rtP . PWMGenerator_Tper - (
boy11ziqir - muDoubleScalarFloor ( boy11ziqir / jr0sqgitzr ) * jr0sqgitzr ) ;
break ; default : boy11ziqir = 2.0 * rtP . PWMGenerator_Tper - rtDW .
gzqgja0x1h ; if ( rtDW . gzqgja0x1h > rtP . PWMGenerator_Tper ) { jr0sqgitzr
= rtP . Constant2_Value ; } else { jr0sqgitzr = rtDW . gzqgja0x1h ; } if (
boy11ziqir > rtP . PWMGenerator_Tper ) { boy11ziqir = rtP .
Constant2_Value_csuhh40fsp ; } boy11ziqir += jr0sqgitzr ; break ; }
boy11ziqir *= 1.0 / rtP . PWMGenerator_Tper ; if ( boy11ziqir > rtP .
Saturation_UpperSat ) { boy11ziqir = rtP . Saturation_UpperSat ; } else if (
boy11ziqir < rtP . Saturation_LowerSat ) { boy11ziqir = rtP .
Saturation_LowerSat ; } rtB . nfa1ieecfm = ( ( rtP . D_si_1_Value != rtP .
Constant_Value ) && ( rtP . D_si_1_Value >= rtP . Carriercounter_Range *
boy11ziqir + ( - rtP . Carriercounter_Range + 1.0 ) ) ) ; } rtB . asx0ks2d0l
[ 0 ] = rtB . nfa1ieecfm ; rtB . asx0ks2d0l [ 1 ] = 0.0 ; rtB . asx0ks2d0l [
2 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . k2dqyad4ny [ 0 ] = ! (
rtB . asx0ks2d0l [ 0 ] == rtDW . k2dqyad4ny [ 1 ] ) ; rtDW . k2dqyad4ny [ 1 ]
= rtB . asx0ks2d0l [ 0 ] ; } rtB . asx0ks2d0l [ 0 ] = rtDW . k2dqyad4ny [ 1 ]
; rtB . asx0ks2d0l [ 3 ] = rtDW . k2dqyad4ny [ 0 ] ; if ( ssIsSampleHit ( rtS
, 2 , 0 ) ) { if ( rtDW . j2jti0zyzr ) { rtDW . j2jti0zyzr = false ; rtB .
d211xmj4vx = rtP .
IntegratorwithWrappedStateDiscreteorContinuous_x0_jbdq2s11ie ; } else { rtB .
d211xmj4vx = rtDW . alcascjxvj - muDoubleScalarFloor ( 1.0 / ( rtP .
PWMGenerator2_Tper - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_d5dyvthcs4
) * ( rtDW . alcascjxvj - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_d5dyvthcs4
) ) * ( rtP . PWMGenerator2_Tper - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_d5dyvthcs4
) ; } if ( ( rtDW . alcascjxvj < rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_d5dyvthcs4
) || ( rtDW . alcascjxvj >= rtP . PWMGenerator2_Tper ) ) { rtDW . alcascjxvj
= rtB . d211xmj4vx ; } m3yq5uqwc3 = rtDW . alcascjxvj ; boy11ziqir = rtP .
PWMGenerator2_Tper / ( rtP . PWMGenerator2_Tper - rtB . py2r1itzbv [ 0 ] ) *
m3yq5uqwc3 ; jr0sqgitzr = rtB . py2r1itzbv [ 0 ] + rtP . PWMGenerator2_Tper ;
if ( rtDW . oavruknmhk ) { rtDW . oavruknmhk = false ; rtB . pphouwueuk = rtP
. PWMGenerator2_Tdelay ; } else { rtB . pphouwueuk = rtDW . i0ag2pecni -
muDoubleScalarFloor ( 1.0 / ( 2.0 * rtP . PWMGenerator2_Tper - rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_kos5ps3goc
) * ( rtDW . i0ag2pecni - rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_kos5ps3goc
) ) * ( 2.0 * rtP . PWMGenerator2_Tper - rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_kos5ps3goc
) ; } if ( ( rtDW . i0ag2pecni < rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_kos5ps3goc
) || ( rtDW . i0ag2pecni >= 2.0 * rtP . PWMGenerator2_Tper ) ) { rtDW .
i0ag2pecni = rtB . pphouwueuk ; } switch ( ( int32_T ) rtP .
Carriercounter_CarrCount_nlq1hz21k3 ) { case 1 : boy11ziqir -=
muDoubleScalarFloor ( boy11ziqir / jr0sqgitzr ) * jr0sqgitzr ; break ; case 2
: boy11ziqir = rtP . PWMGenerator2_Tper - ( boy11ziqir - muDoubleScalarFloor
( boy11ziqir / jr0sqgitzr ) * jr0sqgitzr ) ; break ; default : boy11ziqir =
2.0 * rtP . PWMGenerator2_Tper - rtDW . i0ag2pecni ; if ( rtDW . i0ag2pecni >
rtP . PWMGenerator2_Tper ) { jr0sqgitzr = rtP . Constant2_Value_lqufvpapq4 ;
} else { jr0sqgitzr = rtDW . i0ag2pecni ; } if ( boy11ziqir > rtP .
PWMGenerator2_Tper ) { boy11ziqir = rtP . Constant2_Value_nei4prnbsm ; }
boy11ziqir += jr0sqgitzr ; break ; } boy11ziqir *= 1.0 / rtP .
PWMGenerator2_Tper ; if ( boy11ziqir > rtP . Saturation_UpperSat_agcdx2od5n )
{ boy11ziqir = rtP . Saturation_UpperSat_agcdx2od5n ; } else if ( boy11ziqir
< rtP . Saturation_LowerSat_epadsuqnyb ) { boy11ziqir = rtP .
Saturation_LowerSat_epadsuqnyb ; } rtB . nk1uhmwt1n = ( ( rtP . D_si_2_Value
!= rtP . Constant_Value_pa0axfuaby ) && ( rtP . D_si_2_Value >= rtP .
Carriercounter_Range_dx20pwdeoq * boy11ziqir + ( - rtP .
Carriercounter_Range_dx20pwdeoq + 1.0 ) ) ) ; } rtB . ayrqcrieud [ 0 ] = rtB
. nk1uhmwt1n ; rtB . ayrqcrieud [ 1 ] = 0.0 ; rtB . ayrqcrieud [ 2 ] = 0.0 ;
if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . kwgopg2t3n [ 0 ] = ! ( rtB .
ayrqcrieud [ 0 ] == rtDW . kwgopg2t3n [ 1 ] ) ; rtDW . kwgopg2t3n [ 1 ] = rtB
. ayrqcrieud [ 0 ] ; } rtB . ayrqcrieud [ 0 ] = rtDW . kwgopg2t3n [ 1 ] ; rtB
. ayrqcrieud [ 3 ] = rtDW . kwgopg2t3n [ 0 ] ; if ( ssIsSampleHit ( rtS , 2 ,
0 ) ) { if ( rtDW . kqp0y3lfdl ) { rtDW . kqp0y3lfdl = false ; rtB .
n3xiag5iab = rtP .
IntegratorwithWrappedStateDiscreteorContinuous_x0_m545ryqje2 ; } else { rtB .
n3xiag5iab = rtDW . gafqzlu0w1 - muDoubleScalarFloor ( 1.0 / ( rtP .
PWMGenerator3_Tper - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_e15lhmtkyf
) * ( rtDW . gafqzlu0w1 - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_e15lhmtkyf
) ) * ( rtP . PWMGenerator3_Tper - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_e15lhmtkyf
) ; } if ( ( rtDW . gafqzlu0w1 < rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_e15lhmtkyf
) || ( rtDW . gafqzlu0w1 >= rtP . PWMGenerator3_Tper ) ) { rtDW . gafqzlu0w1
= rtB . n3xiag5iab ; } gmdyhzlrpn = rtDW . gafqzlu0w1 ; boy11ziqir = rtP .
PWMGenerator3_Tper / ( rtP . PWMGenerator3_Tper - rtB . ifhiyhymxq [ 0 ] ) *
gmdyhzlrpn ; jr0sqgitzr = rtB . ifhiyhymxq [ 0 ] + rtP . PWMGenerator3_Tper ;
if ( rtDW . pbkl0kvbgr ) { rtDW . pbkl0kvbgr = false ; rtB . lre4klrgga = rtP
. PWMGenerator3_Tdelay ; } else { rtB . lre4klrgga = rtDW . d1silreffk -
muDoubleScalarFloor ( 1.0 / ( 2.0 * rtP . PWMGenerator3_Tper - rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_gh1nl4mdaz
) * ( rtDW . d1silreffk - rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_gh1nl4mdaz
) ) * ( 2.0 * rtP . PWMGenerator3_Tper - rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_gh1nl4mdaz
) ; } if ( ( rtDW . d1silreffk < rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_gh1nl4mdaz
) || ( rtDW . d1silreffk >= 2.0 * rtP . PWMGenerator3_Tper ) ) { rtDW .
d1silreffk = rtB . lre4klrgga ; } switch ( ( int32_T ) rtP .
Carriercounter_CarrCount_f20soq4h5z ) { case 1 : boy11ziqir -=
muDoubleScalarFloor ( boy11ziqir / jr0sqgitzr ) * jr0sqgitzr ; break ; case 2
: boy11ziqir = rtP . PWMGenerator3_Tper - ( boy11ziqir - muDoubleScalarFloor
( boy11ziqir / jr0sqgitzr ) * jr0sqgitzr ) ; break ; default : boy11ziqir =
2.0 * rtP . PWMGenerator3_Tper - rtDW . d1silreffk ; if ( rtDW . d1silreffk >
rtP . PWMGenerator3_Tper ) { jr0sqgitzr = rtP . Constant2_Value_j1kboe2g4v ;
} else { jr0sqgitzr = rtDW . d1silreffk ; } if ( boy11ziqir > rtP .
PWMGenerator3_Tper ) { boy11ziqir = rtP . Constant2_Value_dpgskevhhh ; }
boy11ziqir += jr0sqgitzr ; break ; } boy11ziqir *= 1.0 / rtP .
PWMGenerator3_Tper ; if ( boy11ziqir > rtP . Saturation_UpperSat_ego33qyird )
{ boy11ziqir = rtP . Saturation_UpperSat_ego33qyird ; } else if ( boy11ziqir
< rtP . Saturation_LowerSat_mtozl4vgzg ) { boy11ziqir = rtP .
Saturation_LowerSat_mtozl4vgzg ; } rtB . ewmd2wegga = ( ( rtP . D_si_3_Value
!= rtP . Constant_Value_dw5lwecznd ) && ( rtP . D_si_3_Value >= rtP .
Carriercounter_Range_fzuqnnpgab * boy11ziqir + ( - rtP .
Carriercounter_Range_fzuqnnpgab + 1.0 ) ) ) ; } rtB . iqp23wcjzt [ 0 ] = rtB
. ewmd2wegga ; rtB . iqp23wcjzt [ 1 ] = 0.0 ; rtB . iqp23wcjzt [ 2 ] = 0.0 ;
if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . fmszeehxmh [ 0 ] = ! ( rtB .
iqp23wcjzt [ 0 ] == rtDW . fmszeehxmh [ 1 ] ) ; rtDW . fmszeehxmh [ 1 ] = rtB
. iqp23wcjzt [ 0 ] ; } rtB . iqp23wcjzt [ 0 ] = rtDW . fmszeehxmh [ 1 ] ; rtB
. iqp23wcjzt [ 3 ] = rtDW . fmszeehxmh [ 0 ] ; if ( ssIsSampleHit ( rtS , 2 ,
0 ) ) { if ( rtDW . kznqm03ejv ) { rtDW . kznqm03ejv = false ; rtB .
epdqxd20p3 = rtP .
IntegratorwithWrappedStateDiscreteorContinuous_x0_jpcp5p3x4d ; } else { rtB .
epdqxd20p3 = rtDW . ap2c33xwtr - muDoubleScalarFloor ( 1.0 / ( rtP .
PWMGenerator1_Tper - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_evbtetgudb
) * ( rtDW . ap2c33xwtr - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_evbtetgudb
) ) * ( rtP . PWMGenerator1_Tper - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_evbtetgudb
) ; } if ( ( rtDW . ap2c33xwtr < rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_evbtetgudb
) || ( rtDW . ap2c33xwtr >= rtP . PWMGenerator1_Tper ) ) { rtDW . ap2c33xwtr
= rtB . epdqxd20p3 ; } g0a53myg0s = rtDW . ap2c33xwtr ; boy11ziqir = rtP .
PWMGenerator1_Tper / ( rtP . PWMGenerator1_Tper - rtB . kjohml0ydc [ 0 ] ) *
g0a53myg0s ; jr0sqgitzr = rtB . kjohml0ydc [ 0 ] + rtP . PWMGenerator1_Tper ;
if ( rtDW . amkaphy2rl ) { rtDW . amkaphy2rl = false ; rtB . azaujt5rtq = rtP
. PWMGenerator1_Tdelay ; } else { rtB . azaujt5rtq = rtDW . dwdhz1iyjs -
muDoubleScalarFloor ( 1.0 / ( 2.0 * rtP . PWMGenerator1_Tper - rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_ppemyo5tni
) * ( rtDW . dwdhz1iyjs - rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_ppemyo5tni
) ) * ( 2.0 * rtP . PWMGenerator1_Tper - rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_ppemyo5tni
) ; } if ( ( rtDW . dwdhz1iyjs < rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_ppemyo5tni
) || ( rtDW . dwdhz1iyjs >= 2.0 * rtP . PWMGenerator1_Tper ) ) { rtDW .
dwdhz1iyjs = rtB . azaujt5rtq ; } switch ( ( int32_T ) rtP .
Carriercounter_CarrCount_ccnd30fhxr ) { case 1 : boy11ziqir -=
muDoubleScalarFloor ( boy11ziqir / jr0sqgitzr ) * jr0sqgitzr ; break ; case 2
: boy11ziqir = rtP . PWMGenerator1_Tper - ( boy11ziqir - muDoubleScalarFloor
( boy11ziqir / jr0sqgitzr ) * jr0sqgitzr ) ; break ; default : boy11ziqir =
2.0 * rtP . PWMGenerator1_Tper - rtDW . dwdhz1iyjs ; if ( rtDW . dwdhz1iyjs >
rtP . PWMGenerator1_Tper ) { jr0sqgitzr = rtP . Constant2_Value_pp0a1disph ;
} else { jr0sqgitzr = rtDW . dwdhz1iyjs ; } if ( boy11ziqir > rtP .
PWMGenerator1_Tper ) { boy11ziqir = rtP . Constant2_Value_bhpllj300z ; }
boy11ziqir += jr0sqgitzr ; break ; } boy11ziqir *= 1.0 / rtP .
PWMGenerator1_Tper ; if ( boy11ziqir > rtP . Saturation_UpperSat_jhcxiltx5i )
{ boy11ziqir = rtP . Saturation_UpperSat_jhcxiltx5i ; } else if ( boy11ziqir
< rtP . Saturation_LowerSat_bbdrzw2qys ) { boy11ziqir = rtP .
Saturation_LowerSat_bbdrzw2qys ; } rtB . fxh4udczur = ( ( rtP . D_main_Value
!= rtP . Constant_Value_ilyx3sxort ) && ( rtP . D_main_Value >= rtP .
Carriercounter_Range_bgfczok2t5 * boy11ziqir + ( - rtP .
Carriercounter_Range_bgfczok2t5 + 1.0 ) ) ) ; } rtB . bv5i3f3rgt [ 0 ] = rtB
. fxh4udczur ; rtB . bv5i3f3rgt [ 1 ] = 0.0 ; rtB . bv5i3f3rgt [ 2 ] = 0.0 ;
if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . jv2z4afd5d [ 0 ] = ! ( rtB .
bv5i3f3rgt [ 0 ] == rtDW . jv2z4afd5d [ 1 ] ) ; rtDW . jv2z4afd5d [ 1 ] = rtB
. bv5i3f3rgt [ 0 ] ; } rtB . bv5i3f3rgt [ 0 ] = rtDW . jv2z4afd5d [ 1 ] ; rtB
. bv5i3f3rgt [ 3 ] = rtDW . jv2z4afd5d [ 0 ] ; if ( ssIsSampleHit ( rtS , 2 ,
0 ) ) { if ( rtDW . frofzd5eub ) { rtDW . frofzd5eub = false ; rtB .
age5edt333 = rtP .
IntegratorwithWrappedStateDiscreteorContinuous_x0_nvotyte21j ; } else { rtB .
age5edt333 = rtDW . mt4f5rcj2x - muDoubleScalarFloor ( 1.0 / ( rtP .
PWMGenerator4_Tper - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_kpvdirr0t4
) * ( rtDW . mt4f5rcj2x - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_kpvdirr0t4
) ) * ( rtP . PWMGenerator4_Tper - rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_kpvdirr0t4
) ; } if ( ( rtDW . mt4f5rcj2x < rtP .
IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_kpvdirr0t4
) || ( rtDW . mt4f5rcj2x >= rtP . PWMGenerator4_Tper ) ) { rtDW . mt4f5rcj2x
= rtB . age5edt333 ; } lv4vvyeoz0 = rtDW . mt4f5rcj2x ; boy11ziqir = rtP .
PWMGenerator4_Tper / ( rtP . PWMGenerator4_Tper - rtB . eo3uatez0a [ 0 ] ) *
lv4vvyeoz0 ; jr0sqgitzr = rtB . eo3uatez0a [ 0 ] + rtP . PWMGenerator4_Tper ;
if ( rtDW . nklfvnrvwt ) { rtDW . nklfvnrvwt = false ; rtB . nkoasgdd2e = rtP
. PWMGenerator4_Tdelay ; } else { rtB . nkoasgdd2e = rtDW . afez0twrop -
muDoubleScalarFloor ( 1.0 / ( 2.0 * rtP . PWMGenerator4_Tper - rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_fe1fa5l133
) * ( rtDW . afez0twrop - rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_fe1fa5l133
) ) * ( 2.0 * rtP . PWMGenerator4_Tper - rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_fe1fa5l133
) ; } if ( ( rtDW . afez0twrop < rtP .
 IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_fe1fa5l133
) || ( rtDW . afez0twrop >= 2.0 * rtP . PWMGenerator4_Tper ) ) { rtDW .
afez0twrop = rtB . nkoasgdd2e ; } switch ( ( int32_T ) rtP .
Carriercounter_CarrCount_eit53tw5h0 ) { case 1 : boy11ziqir -=
muDoubleScalarFloor ( boy11ziqir / jr0sqgitzr ) * jr0sqgitzr ; break ; case 2
: boy11ziqir = rtP . PWMGenerator4_Tper - ( boy11ziqir - muDoubleScalarFloor
( boy11ziqir / jr0sqgitzr ) * jr0sqgitzr ) ; break ; default : boy11ziqir =
2.0 * rtP . PWMGenerator4_Tper - rtDW . afez0twrop ; if ( rtDW . afez0twrop >
rtP . PWMGenerator4_Tper ) { jr0sqgitzr = rtP . Constant2_Value_ljwuaakgzo ;
} else { jr0sqgitzr = rtDW . afez0twrop ; } if ( boy11ziqir > rtP .
PWMGenerator4_Tper ) { boy11ziqir = rtP . Constant2_Value_gkqlrgad1a ; }
boy11ziqir += jr0sqgitzr ; break ; } boy11ziqir *= 1.0 / rtP .
PWMGenerator4_Tper ; if ( boy11ziqir > rtP . Saturation_UpperSat_mmn4rnyigj )
{ boy11ziqir = rtP . Saturation_UpperSat_mmn4rnyigj ; } else if ( boy11ziqir
< rtP . Saturation_LowerSat_om1ea1f4fz ) { boy11ziqir = rtP .
Saturation_LowerSat_om1ea1f4fz ; } rtB . kvpig12tyn = ( ( rtP .
D_main_n_Value != rtP . Constant_Value_izcbq3klps ) && ( rtP . D_main_n_Value
>= rtP . Carriercounter_Range_bwe3drtbjb * boy11ziqir + ( - rtP .
Carriercounter_Range_bwe3drtbjb + 1.0 ) ) ) ; } rtB . h1hb0r4ct0 [ 0 ] = rtB
. kvpig12tyn ; rtB . h1hb0r4ct0 [ 1 ] = 0.0 ; rtB . h1hb0r4ct0 [ 2 ] = 0.0 ;
if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . iyo3z45joh [ 0 ] = ! ( rtB .
h1hb0r4ct0 [ 0 ] == rtDW . iyo3z45joh [ 1 ] ) ; rtDW . iyo3z45joh [ 1 ] = rtB
. h1hb0r4ct0 [ 0 ] ; } rtB . h1hb0r4ct0 [ 0 ] = rtDW . iyo3z45joh [ 1 ] ; rtB
. h1hb0r4ct0 [ 3 ] = rtDW . iyo3z45joh [ 0 ] ; simulationData = (
NeslSimulationData * ) rtDW . bpkv1n1asy ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . m3bhukyrsr [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 15 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . macvu5ceax [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
du34yopqjb [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . asx0ks2d0l [ 0 ] ; tmp_p [ 1 ] = rtB . asx0ks2d0l [ 1 ] ;
tmp_p [ 2 ] = rtB . asx0ks2d0l [ 2 ] ; tmp_p [ 3 ] = rtB . asx0ks2d0l [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . ayrqcrieud [ 0 ] ; tmp_p [ 5 ] = rtB .
ayrqcrieud [ 1 ] ; tmp_p [ 6 ] = rtB . ayrqcrieud [ 2 ] ; tmp_p [ 7 ] = rtB .
ayrqcrieud [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . iqp23wcjzt [ 0 ] ;
tmp_p [ 9 ] = rtB . iqp23wcjzt [ 1 ] ; tmp_p [ 10 ] = rtB . iqp23wcjzt [ 2 ]
; tmp_p [ 11 ] = rtB . iqp23wcjzt [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . bv5i3f3rgt [ 0 ] ; tmp_p [ 13 ] = rtB . bv5i3f3rgt [ 1 ] ; tmp_p [ 14 ]
= rtB . bv5i3f3rgt [ 2 ] ; tmp_p [ 15 ] = rtB . bv5i3f3rgt [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . h1hb0r4ct0 [ 0 ] ; tmp_p [ 17 ] = rtB .
h1hb0r4ct0 [ 1 ] ; tmp_p [ 18 ] = rtB . h1hb0r4ct0 [ 2 ] ; tmp_p [ 19 ] = rtB
. h1hb0r4ct0 [ 3 ] ; tmp_e [ 5 ] = 20 ; simulationData -> mData ->
mInputValues . mN = 20 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 6 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 24 ; simulationData -> mData ->
mOutputs . mX = & rtB . of5izgd2nh [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; time_p = ssGetTaskTime
( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_p ; simulationData -> mData -> mSampleHits . mN
= 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData ->
mData -> mIsFundamentalSampleHit = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . mcx5zjqfsd ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . c2jutzvux0 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . nbapp4ueof ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . hoab3tltb1 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . mj13pzrwqe ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; simulationData ->
mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ]
= 0 ; tmp_m [ 0 ] = rtB . asx0ks2d0l [ 0 ] ; tmp_m [ 1 ] = rtB . asx0ks2d0l [
1 ] ; tmp_m [ 2 ] = rtB . asx0ks2d0l [ 2 ] ; tmp_m [ 3 ] = rtB . asx0ks2d0l [
3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . ayrqcrieud [ 0 ] ; tmp_m [ 5 ] =
rtB . ayrqcrieud [ 1 ] ; tmp_m [ 6 ] = rtB . ayrqcrieud [ 2 ] ; tmp_m [ 7 ] =
rtB . ayrqcrieud [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . iqp23wcjzt [ 0
] ; tmp_m [ 9 ] = rtB . iqp23wcjzt [ 1 ] ; tmp_m [ 10 ] = rtB . iqp23wcjzt [
2 ] ; tmp_m [ 11 ] = rtB . iqp23wcjzt [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ]
= rtB . bv5i3f3rgt [ 0 ] ; tmp_m [ 13 ] = rtB . bv5i3f3rgt [ 1 ] ; tmp_m [ 14
] = rtB . bv5i3f3rgt [ 2 ] ; tmp_m [ 15 ] = rtB . bv5i3f3rgt [ 3 ] ; tmp_g [
4 ] = 16 ; tmp_m [ 16 ] = rtB . h1hb0r4ct0 [ 0 ] ; tmp_m [ 17 ] = rtB .
h1hb0r4ct0 [ 1 ] ; tmp_m [ 18 ] = rtB . h1hb0r4ct0 [ 2 ] ; tmp_m [ 19 ] = rtB
. h1hb0r4ct0 [ 3 ] ; tmp_g [ 5 ] = 20 ; memcpy ( & tmp_m [ 20 ] , & rtB .
of5izgd2nh [ 0 ] , 24U * sizeof ( real_T ) ) ; tmp_g [ 6 ] = 44 ;
simulationData -> mData -> mInputValues . mN = 44 ; simulationData -> mData
-> mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 7 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_g [ 0 ] ; simulationData -> mData -> mOutputs . mN = 3 ; simulationData
-> mData -> mOutputs . mX = & rtB . es5wnta2ki [ 0 ] ; simulationData ->
mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX =
NULL ; simulationData -> mData -> mCstateHasChanged = false ; time_i =
ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_i ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . coyvz3lfin ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. lhuj0bctl5 , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if
( tmp ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus
( rtS , msg_p ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData ->
mData -> mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtB . hylm1rbfel = rtB . es5wnta2ki [ 2 ] ; rtY . cyhrsve245 = rtB
. hylm1rbfel ; rtB . ge2sp0a0ty = rtB . es5wnta2ki [ 0 ] ; rtY . clfeez0y3v =
rtB . ge2sp0a0ty ; rtB . nootlevufh = rtB . es5wnta2ki [ 1 ] ; rtY .
c5wedmtybf = rtB . nootlevufh ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if (
rtDW . mj5scnghd3 . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . mj5scnghd3 . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. ge2sp0a0ty + 0 ) ; } } { if ( rtDW . dekwg20dqc . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . dekwg20dqc . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . nootlevufh + 0 ) ; } } { if (
rtDW . it2e5qe3ze . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . it2e5qe3ze . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. hylm1rbfel + 0 ) ; } } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtY .
kqqnlkbwxe = rtB . nfa1ieecfm ; rtY . katkqcgmut = rtB . nk1uhmwt1n ; rtY .
ain2f5zt2r = rtB . ewmd2wegga ; rtY . dcajj3uovx = rtB . fxh4udczur ; rtY .
aqjl5sxt2y = rtB . kvpig12tyn ; { if ( rtDW . fmlixiproz . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . fmlixiproz . AQHandles ,
ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB . fxh4udczur + 0 ) ; } } { if (
rtDW . mgiuugcto4 . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . mgiuugcto4 . AQHandles , ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB
. nk1uhmwt1n + 0 ) ; } } { if ( rtDW . hbz3b5xqf1 . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . hbz3b5xqf1 . AQHandles ,
ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB . ewmd2wegga + 0 ) ; } } { if (
rtDW . gcjzyzozu4 . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . gcjzyzozu4 . AQHandles , ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB
. kvpig12tyn + 0 ) ; } } { if ( rtDW . jgabfuqjst . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . jgabfuqjst . AQHandles ,
ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB . nfa1ieecfm + 0 ) ; } } { if (
rtDW . ggqfpuivzp . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . ggqfpuivzp . AQHandles , ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB
. nk1uhmwt1n + 0 ) ; } } { if ( rtDW . ji20xszv05 . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . ji20xszv05 . AQHandles ,
ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB . ewmd2wegga + 0 ) ; } } }
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 20 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 6 ] ; boolean_T
tmp ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . oojuyjmsnj += rtP .
Integrator_gainval * rtP . Constant3_Value ; rtDW . gzqgja0x1h += rtP .
Integrator_gainval_kxkpn5ktyp * rtP . Constant3_Value ; rtDW . alcascjxvj +=
rtP . Integrator_gainval_anntwrmt4d * rtP . Constant3_Value_llyskhg1wi ; rtDW
. i0ag2pecni += rtP . Integrator_gainval_prlifqcgec * rtP .
Constant3_Value_llyskhg1wi ; rtDW . gafqzlu0w1 += rtP .
Integrator_gainval_gsopvokafa * rtP . Constant3_Value_ca3jt2mcxg ; rtDW .
d1silreffk += rtP . Integrator_gainval_cx0xcinyfp * rtP .
Constant3_Value_ca3jt2mcxg ; rtDW . ap2c33xwtr += rtP .
Integrator_gainval_d3lkwgtuge * rtP . Constant3_Value_fdh0kfnkgz ; rtDW .
dwdhz1iyjs += rtP . Integrator_gainval_nml42p0n4g * rtP .
Constant3_Value_fdh0kfnkgz ; rtDW . mt4f5rcj2x += rtP .
Integrator_gainval_n0efa4a30f * rtP . Constant3_Value_frwqtx1sbd ; rtDW .
afez0twrop += rtP . Integrator_gainval_p5ziwxx5xx * rtP .
Constant3_Value_frwqtx1sbd ; } simulationData = ( NeslSimulationData * ) rtDW
. bpkv1n1asy ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 4 ; simulationData -> mData -> mContStates . mX =
& rtX . m3bhukyrsr [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 15 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . macvu5ceax [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . du34yopqjb [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . asx0ks2d0l [ 0 ] ; tmp_p [ 1 ]
= rtB . asx0ks2d0l [ 1 ] ; tmp_p [ 2 ] = rtB . asx0ks2d0l [ 2 ] ; tmp_p [ 3 ]
= rtB . asx0ks2d0l [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . ayrqcrieud [
0 ] ; tmp_p [ 5 ] = rtB . ayrqcrieud [ 1 ] ; tmp_p [ 6 ] = rtB . ayrqcrieud [
2 ] ; tmp_p [ 7 ] = rtB . ayrqcrieud [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . iqp23wcjzt [ 0 ] ; tmp_p [ 9 ] = rtB . iqp23wcjzt [ 1 ] ; tmp_p [ 10 ]
= rtB . iqp23wcjzt [ 2 ] ; tmp_p [ 11 ] = rtB . iqp23wcjzt [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . bv5i3f3rgt [ 0 ] ; tmp_p [ 13 ] = rtB .
bv5i3f3rgt [ 1 ] ; tmp_p [ 14 ] = rtB . bv5i3f3rgt [ 2 ] ; tmp_p [ 15 ] = rtB
. bv5i3f3rgt [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = rtB . h1hb0r4ct0 [ 0 ]
; tmp_p [ 17 ] = rtB . h1hb0r4ct0 [ 1 ] ; tmp_p [ 18 ] = rtB . h1hb0r4ct0 [ 2
] ; tmp_p [ 19 ] = rtB . h1hb0r4ct0 [ 3 ] ; tmp_e [ 5 ] = 20 ; simulationData
-> mData -> mInputValues . mN = 20 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 6 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . mcx5zjqfsd ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . c2jutzvux0 ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 20 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e
[ 6 ] ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
simulationData = ( NeslSimulationData * ) rtDW . bpkv1n1asy ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . m3bhukyrsr [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 15 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . macvu5ceax [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
du34yopqjb [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . asx0ks2d0l [ 0 ] ; tmp_p [ 1 ] = rtB . asx0ks2d0l [ 1 ] ;
tmp_p [ 2 ] = rtB . asx0ks2d0l [ 2 ] ; tmp_p [ 3 ] = rtB . asx0ks2d0l [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . ayrqcrieud [ 0 ] ; tmp_p [ 5 ] = rtB .
ayrqcrieud [ 1 ] ; tmp_p [ 6 ] = rtB . ayrqcrieud [ 2 ] ; tmp_p [ 7 ] = rtB .
ayrqcrieud [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . iqp23wcjzt [ 0 ] ;
tmp_p [ 9 ] = rtB . iqp23wcjzt [ 1 ] ; tmp_p [ 10 ] = rtB . iqp23wcjzt [ 2 ]
; tmp_p [ 11 ] = rtB . iqp23wcjzt [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . bv5i3f3rgt [ 0 ] ; tmp_p [ 13 ] = rtB . bv5i3f3rgt [ 1 ] ; tmp_p [ 14 ]
= rtB . bv5i3f3rgt [ 2 ] ; tmp_p [ 15 ] = rtB . bv5i3f3rgt [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . h1hb0r4ct0 [ 0 ] ; tmp_p [ 17 ] = rtB .
h1hb0r4ct0 [ 1 ] ; tmp_p [ 18 ] = rtB . h1hb0r4ct0 [ 2 ] ; tmp_p [ 19 ] = rtB
. h1hb0r4ct0 [ 3 ] ; tmp_e [ 5 ] = 20 ; simulationData -> mData ->
mInputValues . mN = 20 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 6 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 4 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> m3bhukyrsr [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . mcx5zjqfsd ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . c2jutzvux0 ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { } void MdlZeroCrossings ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; ZCV * _rtZCSV ; char
* msg ; real_T tmp_p [ 20 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 6 ]
; boolean_T tmp ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ;
simulationData = ( NeslSimulationData * ) rtDW . bpkv1n1asy ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 4 ;
simulationData -> mData -> mContStates . mX = & rtX . m3bhukyrsr [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 15 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . macvu5ceax [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
du34yopqjb [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . asx0ks2d0l [ 0 ] ; tmp_p [ 1 ] = rtB . asx0ks2d0l [ 1 ] ;
tmp_p [ 2 ] = rtB . asx0ks2d0l [ 2 ] ; tmp_p [ 3 ] = rtB . asx0ks2d0l [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . ayrqcrieud [ 0 ] ; tmp_p [ 5 ] = rtB .
ayrqcrieud [ 1 ] ; tmp_p [ 6 ] = rtB . ayrqcrieud [ 2 ] ; tmp_p [ 7 ] = rtB .
ayrqcrieud [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . iqp23wcjzt [ 0 ] ;
tmp_p [ 9 ] = rtB . iqp23wcjzt [ 1 ] ; tmp_p [ 10 ] = rtB . iqp23wcjzt [ 2 ]
; tmp_p [ 11 ] = rtB . iqp23wcjzt [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . bv5i3f3rgt [ 0 ] ; tmp_p [ 13 ] = rtB . bv5i3f3rgt [ 1 ] ; tmp_p [ 14 ]
= rtB . bv5i3f3rgt [ 2 ] ; tmp_p [ 15 ] = rtB . bv5i3f3rgt [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . h1hb0r4ct0 [ 0 ] ; tmp_p [ 17 ] = rtB .
h1hb0r4ct0 [ 1 ] ; tmp_p [ 18 ] = rtB . h1hb0r4ct0 [ 2 ] ; tmp_p [ 19 ] = rtB
. h1hb0r4ct0 [ 3 ] ; tmp_e [ 5 ] = 20 ; simulationData -> mData ->
mInputValues . mN = 20 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 6 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> a10ogvsngy ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . mcx5zjqfsd ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . c2jutzvux0 ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . mcx5zjqfsd ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . bpkv1n1asy ) ; nesl_erase_simulator (
"pmic_simulink/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . coyvz3lfin
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . nbapp4ueof
) ; nesl_erase_simulator ( "pmic_simulink/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; { if ( rtDW . mj5scnghd3 . AQHandles ) {
sdiTerminateStreaming ( & rtDW . mj5scnghd3 . AQHandles ) ; } } { if ( rtDW .
dekwg20dqc . AQHandles ) { sdiTerminateStreaming ( & rtDW . dekwg20dqc .
AQHandles ) ; } } { if ( rtDW . it2e5qe3ze . AQHandles ) {
sdiTerminateStreaming ( & rtDW . it2e5qe3ze . AQHandles ) ; } } { if ( rtDW .
fmlixiproz . AQHandles ) { sdiTerminateStreaming ( & rtDW . fmlixiproz .
AQHandles ) ; } } { if ( rtDW . mgiuugcto4 . AQHandles ) {
sdiTerminateStreaming ( & rtDW . mgiuugcto4 . AQHandles ) ; } } { if ( rtDW .
hbz3b5xqf1 . AQHandles ) { sdiTerminateStreaming ( & rtDW . hbz3b5xqf1 .
AQHandles ) ; } } { if ( rtDW . gcjzyzozu4 . AQHandles ) {
sdiTerminateStreaming ( & rtDW . gcjzyzozu4 . AQHandles ) ; } } { if ( rtDW .
jgabfuqjst . AQHandles ) { sdiTerminateStreaming ( & rtDW . jgabfuqjst .
AQHandles ) ; } } { if ( rtDW . ggqfpuivzp . AQHandles ) {
sdiTerminateStreaming ( & rtDW . ggqfpuivzp . AQHandles ) ; } } { if ( rtDW .
ji20xszv05 . AQHandles ) { sdiTerminateStreaming ( & rtDW . ji20xszv05 .
AQHandles ) ; } } } static void mr_pmic_simulink_cacheDataAsMxArray ( mxArray
* destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_pmic_simulink_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_pmic_simulink_restoreDataFromMxArray ( void
* destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes )
; static void mr_pmic_simulink_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_pmic_simulink_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void mr_pmic_simulink_cacheBitFieldToMxArray
( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) {
mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T )
bitVal ) ) ; } static uint_T mr_pmic_simulink_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static
uint_T mr_pmic_simulink_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_pmic_simulink_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_pmic_simulink_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_pmic_simulink_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_pmic_simulink_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_pmic_simulink_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_pmic_simulink_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_pmic_simulink_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_pmic_simulink_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_pmic_simulink_GetDWork ( ) { static
const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_pmic_simulink_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB
) , sizeof ( rtB ) ) ; { static const char_T * rtdwDataFieldNames [ 31 ] = {
"rtDW.oojuyjmsnj" , "rtDW.gzqgja0x1h" , "rtDW.k2dqyad4ny" , "rtDW.alcascjxvj"
, "rtDW.i0ag2pecni" , "rtDW.kwgopg2t3n" , "rtDW.gafqzlu0w1" ,
"rtDW.d1silreffk" , "rtDW.fmszeehxmh" , "rtDW.ap2c33xwtr" , "rtDW.dwdhz1iyjs"
, "rtDW.jv2z4afd5d" , "rtDW.mt4f5rcj2x" , "rtDW.afez0twrop" ,
"rtDW.iyo3z45joh" , "rtDW.macvu5ceax" , "rtDW.hoab3tltb1" , "rtDW.du34yopqjb"
, "rtDW.mj13pzrwqe" , "rtDW.mnf1ndoeql" , "rtDW.ebqjvgm4dm" ,
"rtDW.j2jti0zyzr" , "rtDW.oavruknmhk" , "rtDW.kqp0y3lfdl" , "rtDW.pbkl0kvbgr"
, "rtDW.kznqm03ejv" , "rtDW.amkaphy2rl" , "rtDW.frofzd5eub" ,
"rtDW.nklfvnrvwt" , "rtDW.hxb4cv0j4z" , "rtDW.ccab25k2ww" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 31 , rtdwDataFieldNames ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
rtDW . oojuyjmsnj ) , sizeof ( rtDW . oojuyjmsnj ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
rtDW . gzqgja0x1h ) , sizeof ( rtDW . gzqgja0x1h ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
rtDW . k2dqyad4ny ) , sizeof ( rtDW . k2dqyad4ny ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
rtDW . alcascjxvj ) , sizeof ( rtDW . alcascjxvj ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
rtDW . i0ag2pecni ) , sizeof ( rtDW . i0ag2pecni ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
rtDW . kwgopg2t3n ) , sizeof ( rtDW . kwgopg2t3n ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
rtDW . gafqzlu0w1 ) , sizeof ( rtDW . gafqzlu0w1 ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
rtDW . d1silreffk ) , sizeof ( rtDW . d1silreffk ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
rtDW . fmszeehxmh ) , sizeof ( rtDW . fmszeehxmh ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
rtDW . ap2c33xwtr ) , sizeof ( rtDW . ap2c33xwtr ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) &
( rtDW . dwdhz1iyjs ) , sizeof ( rtDW . dwdhz1iyjs ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) &
( rtDW . jv2z4afd5d ) , sizeof ( rtDW . jv2z4afd5d ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) &
( rtDW . mt4f5rcj2x ) , sizeof ( rtDW . mt4f5rcj2x ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) &
( rtDW . afez0twrop ) , sizeof ( rtDW . afez0twrop ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) &
( rtDW . iyo3z45joh ) , sizeof ( rtDW . iyo3z45joh ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) &
( rtDW . macvu5ceax ) , sizeof ( rtDW . macvu5ceax ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) &
( rtDW . hoab3tltb1 ) , sizeof ( rtDW . hoab3tltb1 ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) &
( rtDW . du34yopqjb ) , sizeof ( rtDW . du34yopqjb ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) &
( rtDW . mj13pzrwqe ) , sizeof ( rtDW . mj13pzrwqe ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) &
( rtDW . mnf1ndoeql ) , sizeof ( rtDW . mnf1ndoeql ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) &
( rtDW . ebqjvgm4dm ) , sizeof ( rtDW . ebqjvgm4dm ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) &
( rtDW . j2jti0zyzr ) , sizeof ( rtDW . j2jti0zyzr ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) &
( rtDW . oavruknmhk ) , sizeof ( rtDW . oavruknmhk ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) &
( rtDW . kqp0y3lfdl ) , sizeof ( rtDW . kqp0y3lfdl ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) &
( rtDW . pbkl0kvbgr ) , sizeof ( rtDW . pbkl0kvbgr ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) &
( rtDW . kznqm03ejv ) , sizeof ( rtDW . kznqm03ejv ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) &
( rtDW . amkaphy2rl ) , sizeof ( rtDW . amkaphy2rl ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) &
( rtDW . frofzd5eub ) , sizeof ( rtDW . frofzd5eub ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) &
( rtDW . nklfvnrvwt ) , sizeof ( rtDW . nklfvnrvwt ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) &
( rtDW . hxb4cv0j4z ) , sizeof ( rtDW . hxb4cv0j4z ) ) ;
mr_pmic_simulink_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) &
( rtDW . ccab25k2ww ) , sizeof ( rtDW . ccab25k2ww ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void mr_pmic_simulink_SetDWork
( const mxArray * ssDW ) { ( void ) ssDW ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0
, sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW ,
0 , 1 ) ; mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oojuyjmsnj ) , rtdwData , 0 , 0 , sizeof ( rtDW . oojuyjmsnj ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . gzqgja0x1h )
, rtdwData , 0 , 1 , sizeof ( rtDW . gzqgja0x1h ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . k2dqyad4ny )
, rtdwData , 0 , 2 , sizeof ( rtDW . k2dqyad4ny ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . alcascjxvj )
, rtdwData , 0 , 3 , sizeof ( rtDW . alcascjxvj ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . i0ag2pecni )
, rtdwData , 0 , 4 , sizeof ( rtDW . i0ag2pecni ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . kwgopg2t3n )
, rtdwData , 0 , 5 , sizeof ( rtDW . kwgopg2t3n ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . gafqzlu0w1 )
, rtdwData , 0 , 6 , sizeof ( rtDW . gafqzlu0w1 ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . d1silreffk )
, rtdwData , 0 , 7 , sizeof ( rtDW . d1silreffk ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . fmszeehxmh )
, rtdwData , 0 , 8 , sizeof ( rtDW . fmszeehxmh ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . ap2c33xwtr )
, rtdwData , 0 , 9 , sizeof ( rtDW . ap2c33xwtr ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . dwdhz1iyjs )
, rtdwData , 0 , 10 , sizeof ( rtDW . dwdhz1iyjs ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . jv2z4afd5d )
, rtdwData , 0 , 11 , sizeof ( rtDW . jv2z4afd5d ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . mt4f5rcj2x )
, rtdwData , 0 , 12 , sizeof ( rtDW . mt4f5rcj2x ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . afez0twrop )
, rtdwData , 0 , 13 , sizeof ( rtDW . afez0twrop ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . iyo3z45joh )
, rtdwData , 0 , 14 , sizeof ( rtDW . iyo3z45joh ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . macvu5ceax )
, rtdwData , 0 , 15 , sizeof ( rtDW . macvu5ceax ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . hoab3tltb1 )
, rtdwData , 0 , 16 , sizeof ( rtDW . hoab3tltb1 ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . du34yopqjb )
, rtdwData , 0 , 17 , sizeof ( rtDW . du34yopqjb ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . mj13pzrwqe )
, rtdwData , 0 , 18 , sizeof ( rtDW . mj13pzrwqe ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . mnf1ndoeql )
, rtdwData , 0 , 19 , sizeof ( rtDW . mnf1ndoeql ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . ebqjvgm4dm )
, rtdwData , 0 , 20 , sizeof ( rtDW . ebqjvgm4dm ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . j2jti0zyzr )
, rtdwData , 0 , 21 , sizeof ( rtDW . j2jti0zyzr ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . oavruknmhk )
, rtdwData , 0 , 22 , sizeof ( rtDW . oavruknmhk ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . kqp0y3lfdl )
, rtdwData , 0 , 23 , sizeof ( rtDW . kqp0y3lfdl ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . pbkl0kvbgr )
, rtdwData , 0 , 24 , sizeof ( rtDW . pbkl0kvbgr ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . kznqm03ejv )
, rtdwData , 0 , 25 , sizeof ( rtDW . kznqm03ejv ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . amkaphy2rl )
, rtdwData , 0 , 26 , sizeof ( rtDW . amkaphy2rl ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . frofzd5eub )
, rtdwData , 0 , 27 , sizeof ( rtDW . frofzd5eub ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . nklfvnrvwt )
, rtdwData , 0 , 28 , sizeof ( rtDW . nklfvnrvwt ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . hxb4cv0j4z )
, rtdwData , 0 , 29 , sizeof ( rtDW . hxb4cv0j4z ) ) ;
mr_pmic_simulink_restoreDataFromMxArray ( ( void * ) & ( rtDW . ccab25k2ww )
, rtdwData , 0 , 30 , sizeof ( rtDW . ccab25k2ww ) ) ; } } mxArray *
mr_pmic_simulink_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 4 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 4 ] = { "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "Scope" , "Scope" , } ; static const char_T *
blockPath [ 4 ] = { "pmic_simulink/Solver Configuration/EVAL_KEY/STATE_1" ,
"pmic_simulink/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"pmic_simulink/Scope" , "pmic_simulink/Scope2" , } ; static const int reason
[ 4 ] = { 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 4 ; ++ (
subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 ,
subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ]
] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [
0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 4 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 8 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 349 ) ;
ssSetNumBlockIO ( rtS , 40 ) ; ssSetNumBlockParams ( rtS , 80 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 1.0E-8 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 723267604U ) ; ssSetChecksumVal ( rtS , 1 ,
1866956771U ) ; ssSetChecksumVal ( rtS , 2 , 2882686808U ) ; ssSetChecksumVal
( rtS , 3 , 2799266740U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char_T * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo ,
0 , sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) &
blkInfo2 , 0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T *
) & blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ;
ssSetBlkInfo2Ptr ( rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , &
blkInfoSLSize ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo (
rtS , executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T
mdlPeriod [ NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ;
static time_T mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [
NSAMPLE_TIMES ] ; static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static
boolean_T mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T
mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T
mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i <
NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ;
mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } }
ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , &
mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ;
ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , &
mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr ( rtS , &
mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS , &
mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) & rtB ) ) ;
( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; } { ssSetY (
rtS , & rtY ) ; ( void ) memset ( & rtY , 0 , sizeof ( ExtY ) ) ;
ssSetWorkSizeInBytes ( rtS , sizeof ( rtY ) , "YOut" ) ; } { real_T * x = (
real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * )
x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ;
ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW )
) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) &
dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ;
dtInfo . numDataTypes = 23 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ]
; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
pmic_simulink_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS
, true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "pmic_simulink" ) ;
ssSetPath ( rtS , "pmic_simulink" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , 0.01 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo
. loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo )
; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 2 ,
1 , 1 , 2 , 1 , 1 , 2 , 1 , 1 , 2 , 1 , 1 , 2 , 15 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions
[ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 1 , 2 , 1 , 1 , 2 , 1 , 1 , 2 , 1 , 1
, 2 , 15 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T
* rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"DSTATE" , "DSTATE" , "Discrete" , "DSTATE" , "DSTATE" , "Discrete" ,
"DSTATE" , "DSTATE" , "Discrete" , "DSTATE" , "DSTATE" , "Discrete" ,
"DSTATE" , "DSTATE" , "Discrete" , "Discrete" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = { "pmic_simulink/Capacitor" ,
"pmic_simulink/Capacitor1" , "pmic_simulink/Capacitor2" ,
"pmic_simulink/Inductor" ,
 "pmic_simulink/PWM Generator/Carrier counter/Integrator with\nWrapped State\n(Discrete or Continuous)/Discrete/Integrator"
,
 "pmic_simulink/PWM Generator/Carrier counter/Integrator with\nWrapped State\n(Discrete or Continuous)1/Discrete/Integrator"
, "pmic_simulink/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
 "pmic_simulink/PWM Generator2/Carrier counter/Integrator with\nWrapped State\n(Discrete or Continuous)/Discrete/Integrator"
,
 "pmic_simulink/PWM Generator2/Carrier counter/Integrator with\nWrapped State\n(Discrete or Continuous)1/Discrete/Integrator"
, "pmic_simulink/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
 "pmic_simulink/PWM Generator3/Carrier counter/Integrator with\nWrapped State\n(Discrete or Continuous)/Discrete/Integrator"
,
 "pmic_simulink/PWM Generator3/Carrier counter/Integrator with\nWrapped State\n(Discrete or Continuous)1/Discrete/Integrator"
, "pmic_simulink/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
 "pmic_simulink/PWM Generator1/Carrier counter/Integrator with\nWrapped State\n(Discrete or Continuous)/Discrete/Integrator"
,
 "pmic_simulink/PWM Generator1/Carrier counter/Integrator with\nWrapped State\n(Discrete or Continuous)1/Discrete/Integrator"
, "pmic_simulink/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
 "pmic_simulink/PWM Generator4/Carrier counter/Integrator with\nWrapped State\n(Discrete or Continuous)/Discrete/Integrator"
,
 "pmic_simulink/PWM Generator4/Carrier counter/Integrator with\nWrapped State\n(Discrete or Continuous)1/Discrete/Integrator"
, "pmic_simulink/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
"pmic_simulink/Solver\nConfiguration/EVAL_KEY/STATE_1" } ; static const
char_T * rt_LoggedStateNames [ ] = { "pmic_simulink.Capacitor.vc" ,
"pmic_simulink.Capacitor1.vc" , "pmic_simulink.Capacitor2.vc" ,
"pmic_simulink.Inductor.i_L" , "DSTATE" , "DSTATE" , "Discrete" , "DSTATE" ,
"DSTATE" , "Discrete" , "DSTATE" , "DSTATE" , "Discrete" , "DSTATE" ,
"DSTATE" , "Discrete" , "DSTATE" , "DSTATE" , "Discrete" , "Discrete" } ;
static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10
, 11 , 12 , 13 , 14 , 15 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo
= { 20 , rt_LoggedStateWidths , rt_LoggedStateNumDimensions ,
rt_LoggedStateDimensions , rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) ,
rt_LoggedStateDataTypeIds , rt_LoggedStateComplexSignals , ( NULL ) ,
rt_LoggingStatePreprocessingFcnPtrs , { rt_LoggedStateLabels } , ( NULL ) , (
NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 20 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . m3bhukyrsr [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . m3bhukyrsr [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . m3bhukyrsr [ 2 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . m3bhukyrsr [ 3 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . oojuyjmsnj ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . gzqgja0x1h ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) rtDW . k2dqyad4ny ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtDW . alcascjxvj ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtDW . i0ag2pecni ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) rtDW . kwgopg2t3n ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtDW . gafqzlu0w1 ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . d1silreffk ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) rtDW . fmszeehxmh ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtDW . ap2c33xwtr ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtDW . dwdhz1iyjs ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) rtDW . jv2z4afd5d ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtDW . mt4f5rcj2x ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtDW . afez0twrop ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) rtDW . iyo3z45joh ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) rtDW . macvu5ceax ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; { static void * rt_LoggedOutputSignalPtrs [ ] = { & rtY .
cyhrsve245 , & rtY . clfeez0y3v , & rtY . c5wedmtybf , & rtY . kqqnlkbwxe , &
rtY . katkqcgmut , & rtY . ain2f5zt2r , & rtY . dcajj3uovx , & rtY .
aqjl5sxt2y } ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( (
LogSignalPtrsType ) rt_LoggedOutputSignalPtrs ) ) ; } { static int_T
rt_LoggedOutputWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedOutputNumDimensions [ ] = { 2 , 2 , 2 , 1 , 1 , 1 , 1 , 1 } ; static
int_T rt_LoggedOutputDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 } ; static boolean_T rt_LoggedOutputIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 } ; static void * rt_LoggedCurrentSignalDimensions [ ] = { ( NULL )
, ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL )
, ( NULL ) , ( NULL ) , ( NULL ) } ; static int_T
rt_LoggedCurrentSignalDimensionsSize [ ] = { 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 ,
4 , 4 , 4 } ; static BuiltInDTypeId rt_LoggedOutputDataTypeIds [ ] = {
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE } ; static int_T rt_LoggedOutputComplexSignals [ ] = {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingPreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T *
rt_LoggedOutputLabels_0 [ ] = { "V_o_0" } ; static const char_T *
rt_LoggedOutputBlockNames_0 [ ] = { "pmic_simulink/Output" } ; static const
char_T * rt_LoggedOutputLabels_1 [ ] = { "V_o_1" } ; static const char_T *
rt_LoggedOutputBlockNames_1 [ ] = { "pmic_simulink/Output1" } ; static const
char_T * rt_LoggedOutputLabels_2 [ ] = { "V_o_2" } ; static const char_T *
rt_LoggedOutputBlockNames_2 [ ] = { "pmic_simulink/Output2" } ; static const
char_T * rt_LoggedOutputLabels_3 [ ] = { "" } ; static const char_T *
rt_LoggedOutputBlockNames_3 [ ] = { "pmic_simulink/Output3" } ; static const
char_T * rt_LoggedOutputLabels_4 [ ] = { "" } ; static const char_T *
rt_LoggedOutputBlockNames_4 [ ] = { "pmic_simulink/Output4" } ; static const
char_T * rt_LoggedOutputLabels_5 [ ] = { "" } ; static const char_T *
rt_LoggedOutputBlockNames_5 [ ] = { "pmic_simulink/Output5" } ; static const
char_T * rt_LoggedOutputLabels_6 [ ] = { "" } ; static const char_T *
rt_LoggedOutputBlockNames_6 [ ] = { "pmic_simulink/Output6" } ; static const
char_T * rt_LoggedOutputLabels_7 [ ] = { "" } ; static const char_T *
rt_LoggedOutputBlockNames_7 [ ] = { "pmic_simulink/Output7" } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static RTWLogSignalInfo rt_LoggedOutputSignalInfo [ ] = { { 1 ,
rt_LoggedOutputWidths , rt_LoggedOutputNumDimensions ,
rt_LoggedOutputDimensions , rt_LoggedOutputIsVarDims ,
rt_LoggedCurrentSignalDimensions , rt_LoggedCurrentSignalDimensionsSize ,
rt_LoggedOutputDataTypeIds , rt_LoggedOutputComplexSignals , ( NULL ) ,
rt_LoggingPreprocessingFcnPtrs , { rt_LoggedOutputLabels_0 } , ( NULL ) , (
NULL ) , ( NULL ) , { rt_LoggedOutputBlockNames_0 } , { ( NULL ) } , ( NULL )
, rt_RTWLogDataTypeConvert , ( NULL ) } , { 1 , rt_LoggedOutputWidths + 1 ,
rt_LoggedOutputNumDimensions + 1 , rt_LoggedOutputDimensions + 2 ,
rt_LoggedOutputIsVarDims + 1 , rt_LoggedCurrentSignalDimensions + 2 ,
rt_LoggedCurrentSignalDimensionsSize + 2 , rt_LoggedOutputDataTypeIds + 1 ,
rt_LoggedOutputComplexSignals + 1 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 1 , { rt_LoggedOutputLabels_1 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_1 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 1 , ( NULL ) } , { 1 , rt_LoggedOutputWidths + 2 ,
rt_LoggedOutputNumDimensions + 2 , rt_LoggedOutputDimensions + 4 ,
rt_LoggedOutputIsVarDims + 2 , rt_LoggedCurrentSignalDimensions + 4 ,
rt_LoggedCurrentSignalDimensionsSize + 4 , rt_LoggedOutputDataTypeIds + 2 ,
rt_LoggedOutputComplexSignals + 2 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 2 , { rt_LoggedOutputLabels_2 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_2 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 2 , ( NULL ) } , { 1 , rt_LoggedOutputWidths + 3 ,
rt_LoggedOutputNumDimensions + 3 , rt_LoggedOutputDimensions + 6 ,
rt_LoggedOutputIsVarDims + 3 , rt_LoggedCurrentSignalDimensions + 6 ,
rt_LoggedCurrentSignalDimensionsSize + 6 , rt_LoggedOutputDataTypeIds + 3 ,
rt_LoggedOutputComplexSignals + 3 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 3 , { rt_LoggedOutputLabels_3 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_3 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 3 , ( NULL ) } , { 1 , rt_LoggedOutputWidths + 4 ,
rt_LoggedOutputNumDimensions + 4 , rt_LoggedOutputDimensions + 7 ,
rt_LoggedOutputIsVarDims + 4 , rt_LoggedCurrentSignalDimensions + 7 ,
rt_LoggedCurrentSignalDimensionsSize + 7 , rt_LoggedOutputDataTypeIds + 4 ,
rt_LoggedOutputComplexSignals + 4 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 4 , { rt_LoggedOutputLabels_4 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_4 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 4 , ( NULL ) } , { 1 , rt_LoggedOutputWidths + 5 ,
rt_LoggedOutputNumDimensions + 5 , rt_LoggedOutputDimensions + 8 ,
rt_LoggedOutputIsVarDims + 5 , rt_LoggedCurrentSignalDimensions + 8 ,
rt_LoggedCurrentSignalDimensionsSize + 8 , rt_LoggedOutputDataTypeIds + 5 ,
rt_LoggedOutputComplexSignals + 5 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 5 , { rt_LoggedOutputLabels_5 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_5 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 5 , ( NULL ) } , { 1 , rt_LoggedOutputWidths + 6 ,
rt_LoggedOutputNumDimensions + 6 , rt_LoggedOutputDimensions + 9 ,
rt_LoggedOutputIsVarDims + 6 , rt_LoggedCurrentSignalDimensions + 9 ,
rt_LoggedCurrentSignalDimensionsSize + 9 , rt_LoggedOutputDataTypeIds + 6 ,
rt_LoggedOutputComplexSignals + 6 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 6 , { rt_LoggedOutputLabels_6 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_6 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 6 , ( NULL ) } , { 1 , rt_LoggedOutputWidths + 7 ,
rt_LoggedOutputNumDimensions + 7 , rt_LoggedOutputDimensions + 10 ,
rt_LoggedOutputIsVarDims + 7 , rt_LoggedCurrentSignalDimensions + 10 ,
rt_LoggedCurrentSignalDimensionsSize + 10 , rt_LoggedOutputDataTypeIds + 7 ,
rt_LoggedOutputComplexSignals + 7 , ( NULL ) , rt_LoggingPreprocessingFcnPtrs
+ 7 , { rt_LoggedOutputLabels_7 } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedOutputBlockNames_7 } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert + 7 , ( NULL ) } } ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , rt_LoggedOutputSignalInfo ) ;
rt_LoggedCurrentSignalDimensions [ 0 ] = & rt_LoggedOutputWidths [ 0 ] ;
rt_LoggedCurrentSignalDimensions [ 1 ] = & rt_LoggedOutputWidths [ 0 ] ;
rt_LoggedCurrentSignalDimensions [ 2 ] = & rt_LoggedOutputWidths [ 1 ] ;
rt_LoggedCurrentSignalDimensions [ 3 ] = & rt_LoggedOutputWidths [ 1 ] ;
rt_LoggedCurrentSignalDimensions [ 4 ] = & rt_LoggedOutputWidths [ 2 ] ;
rt_LoggedCurrentSignalDimensions [ 5 ] = & rt_LoggedOutputWidths [ 2 ] ;
rt_LoggedCurrentSignalDimensions [ 6 ] = & rt_LoggedOutputWidths [ 3 ] ;
rt_LoggedCurrentSignalDimensions [ 7 ] = & rt_LoggedOutputWidths [ 4 ] ;
rt_LoggedCurrentSignalDimensions [ 8 ] = & rt_LoggedOutputWidths [ 5 ] ;
rt_LoggedCurrentSignalDimensions [ 9 ] = & rt_LoggedOutputWidths [ 6 ] ;
rt_LoggedCurrentSignalDimensions [ 10 ] = & rt_LoggedOutputWidths [ 7 ] ; }
rtliSetLogY ( ssGetRTWLogInfo ( rtS ) ,
 "tmp_raccel_yout1,tmp_raccel_yout2,tmp_raccel_yout3,tmp_raccel_yout4,tmp_raccel_yout5,tmp_raccel_yout6,tmp_raccel_yout7,tmp_raccel_yout8"
) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , &
statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 4 ] ;
static real_T absTol [ 4 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static
uint8_T absTolControl [ 4 ] = { 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 4 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 4 ] ; static uint8_T zcAttributes [ 5 ] = {
( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) } ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 5 ] = { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
kvpig12tyn ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
fxh4udczur ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
ewmd2wegga ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
nk1uhmwt1n ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
nfa1ieecfm ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i < 4 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 1.0E-8
) ; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 5 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS
, 1 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset ( rtS , true ) ;
ssSetAbsTolVector ( rtS , absTol ) ; ssSetAbsTolControlVector ( rtS ,
absTolControl ) ; ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 5 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 5 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 723267604U ) ; ssSetChecksumVal ( rtS , 1 ,
1866956771U ) ; ssSetChecksumVal ( rtS , 2 , 2882686808U ) ; ssSetChecksumVal
( rtS , 3 , 2799266740U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 11 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ;
systemRan [ 10 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_pmic_simulink_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP
( rtS , mr_pmic_simulink_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_pmic_simulink_SetDWork ) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if
( ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
