#include "ne_ds.h"
#include "pmic_simulink_3d17a902_1_ds_obs_il.h"
#include "pmic_simulink_3d17a902_1_ds_obs_all.h"
#include "pmic_simulink_3d17a902_1_ds_obs_act.h"
#include "pmic_simulink_3d17a902_1_ds_log.h"
#include "pmic_simulink_3d17a902_1_ds_tdxf_p.h"
#include "pmic_simulink_3d17a902_1_ds_dxf.h"
#include "pmic_simulink_3d17a902_1_ds_f.h"
#include "pmic_simulink_3d17a902_1_ds.h"
#include "ssc_ml_fun.h"
#include "pmic_simulink_3d17a902_1_ds_external_struct.h"
#include "pmic_simulink_3d17a902_1_ds_externals.h"
#include "pmic_simulink_3d17a902_1_ds_sys_struct.h"
static int32_T ds_m_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_m (
const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_vmm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dum_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dum ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dpm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dpm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_a_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_a ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_b_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_b ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_vmf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_vpf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_vsf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_slf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_slf0 ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_duf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dtf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dpdxf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dpdxf ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dwf_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dwf
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_tduf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dnf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dnf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dnf_v_x ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_cer ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxcer ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxcer_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddcer ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddcer_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_ic ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icr ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_icr_im ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icr_id ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icr_il ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dxicr ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxicr_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddicr ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddicr_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduicr_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_icrm_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icrm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxicrm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxicrm ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddicrm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_ddicrm ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_freqs ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_mduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_mdxy_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_tdxy_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_y ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxy ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_duy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duy ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dty_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dty ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_mode ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_zc ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_cache_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_cache_i ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_update_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_update_i ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_update2_r ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update2_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_lock_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_lock_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_lock2_r ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_lock2_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_sfo
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_sfp ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_init_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_init_i ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_assert ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_passert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_iassert ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_del_t ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_del_v ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_v0 ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_del_tmax ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxdelt_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxdelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dudelt_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dudelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dtdelt_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dtdelt ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_obs_exp ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dp_l ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dp_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dp_j ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_r ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_qx (
const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_qu ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_qt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_q1 ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_qx_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_qu_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_q1_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_var_tol ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_eq_tol ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_lv ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_slv ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_nldv ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_sclv ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_imin ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_imax ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dimin ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dimax ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
NeDsMethodOutput * ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmm (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxm_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dum ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dpm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_a ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_c_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_vpf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vsf ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_slf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dwf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dwf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dnf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dnf_v_x ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxcer ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxcer_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddcer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddcer_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ic ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_icr_im ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_icr_id ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddicr ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddicr_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduicr_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_icrm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxicrm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddicrm_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_ddicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_freqs ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_mduy_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_mdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_y ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duy ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_mode ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_zc ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_cache_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update2_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update2_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock2_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock2_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_sfo ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_log ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_assert ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_v0 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_tmax (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_exp ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_act (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dp_l ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dp_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dp_j ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dp_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qx ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qu ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_q1 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qx_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qt_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_q1_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_eq_tol (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lv ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_slv ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_nldv (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_imin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_imax ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dimin ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static void
release_reference ( NeDynamicSystem * ds ) ; static void get_reference (
NeDynamicSystem * ds ) ; static NeDynamicSystem * diagnostics (
NeDynamicSystem * ds , boolean_T ) ; static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out ,
boolean_T kp ) ; static void rtpmap ( const NeDynamicSystem * ds , const
PmIntVector * inl , const PmIntVector * ini , const PmIntVector * inj , const
PmRealVector * inr , PmIntVector * outl , PmIntVector * outi , PmIntVector *
outj , PmRealVector * outr ) ; static NeEquationData s_equation_data [ 10 ] =
{ { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "pmic_simulink/Capacitor" , 1U ,
0U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"pmic_simulink/Capacitor1" , 1U , 1U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "pmic_simulink/Capacitor2" , 1U , 2U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "pmic_simulink/Inductor"
, 2U , 3U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"pmic_simulink/Ideal Semiconductor Switch" , 3U , 5U , TRUE , 1.0 , "1" , } ,
{ "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"pmic_simulink/Ideal Semiconductor Switch1" , 3U , 8U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"pmic_simulink/Ideal Semiconductor Switch2" , 3U , 11U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"pmic_simulink/Ideal Semiconductor Switch3" , 3U , 14U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"pmic_simulink/Ideal Semiconductor Switch4" , 3U , 17U , TRUE , 1.0 , "1" , }
, { "" , 0U , 1 , NE_EQUATION_DOMAIN_TIME , "" , 3U , 20U , TRUE , 1.0 , "1"
, } } ; static NeCERData * s_cer_data = NULL ; static NeICRData * s_icr_data
= NULL ; static NeVariableData s_variable_data [ 10 ] = { { "Capacitor.vc" ,
0U , 0 , "pmic_simulink/Capacitor" , 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 ,
1 } } , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , { "Capacitor1.vc"
, 0U , 0 , "pmic_simulink/Capacitor1" , 1.0 , "1" , 0.0 , TRUE , FALSE , { {
1 , 1 } } , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"Capacitor2.vc" , 0U , 0 , "pmic_simulink/Capacitor2" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY , "Capacitor voltage" ,
} , { "Inductor.i_L" , 0U , 0 , "pmic_simulink/Inductor" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY , "Inductor current" ,
} , { "Capacitor.i" , 0U , 0 , "pmic_simulink/Capacitor" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Current" , } , {
"Capacitor1.i" , 0U , 0 , "pmic_simulink/Capacitor1" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Current" , } , {
"Capacitor2.i" , 0U , 0 , "pmic_simulink/Capacitor2" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Current" , } , {
"Ideal_Semiconductor_Switch4.i" , 0U , 0 ,
"pmic_simulink/Ideal Semiconductor Switch4" , 1.0 , "1" , 0.0 , FALSE , FALSE
, { { 1 , 1 } } , NE_INIT_MODE_NONE , "i" , } , { "Inductor.v" , 0U , 0 ,
"pmic_simulink/Inductor" , 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } ,
NE_INIT_MODE_NONE , "Voltage" , } , { "Ideal_Semiconductor_Switch.K.v" , 0U ,
1 , "pmic_simulink/Ideal Semiconductor Switch" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "Voltage" , } } ; static
NeVariableData * s_discrete_data = NULL ; static NeObservableData
s_observable_data [ 107 ] = { { "Capacitor.faultExtTrigger" ,
"pmic_simulink/Capacitor" , { { 1 , 1 } } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "External fault trigger" , } , {
"Capacitor.n.v" , "pmic_simulink/Capacitor" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Capacitor.p.v" ,
"pmic_simulink/Capacitor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Capacitor.i" ,
"pmic_simulink/Capacitor" , { { 1 , 1 } } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Capacitor.power_dissipated" , "pmic_simulink/Capacitor" , { { 1 , 1 } } ,
"W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Capacitor.v" , "pmic_simulink/Capacitor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Capacitor.vc" ,
"pmic_simulink/Capacitor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"Capacitor1.faultExtTrigger" , "pmic_simulink/Capacitor1" , { { 1 , 1 } } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "External fault trigger" , } ,
{ "Capacitor1.n.v" , "pmic_simulink/Capacitor1" , { { 1 , 1 } } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Capacitor1.p.v" ,
"pmic_simulink/Capacitor1" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Capacitor1.i" ,
"pmic_simulink/Capacitor1" , { { 1 , 1 } } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Capacitor1.power_dissipated" , "pmic_simulink/Capacitor1" , { { 1 , 1 } } ,
"W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Capacitor1.v" , "pmic_simulink/Capacitor1" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Capacitor1.vc" ,
"pmic_simulink/Capacitor1" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"Capacitor2.faultExtTrigger" , "pmic_simulink/Capacitor2" , { { 1 , 1 } } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "External fault trigger" , } ,
{ "Capacitor2.n.v" , "pmic_simulink/Capacitor2" , { { 1 , 1 } } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Capacitor2.p.v" ,
"pmic_simulink/Capacitor2" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Capacitor2.i" ,
"pmic_simulink/Capacitor2" , { { 1 , 1 } } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Capacitor2.power_dissipated" , "pmic_simulink/Capacitor2" , { { 1 , 1 } } ,
"W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Capacitor2.v" , "pmic_simulink/Capacitor2" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Capacitor2.vc" ,
"pmic_simulink/Capacitor2" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"DC_Voltage_Source.i" , "pmic_simulink/DC Voltage Source" , { { 1 , 1 } } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"DC_Voltage_Source.n.v" , "pmic_simulink/DC Voltage Source" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"DC_Voltage_Source.p.v" , "pmic_simulink/DC Voltage Source" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"DC_Voltage_Source.v" , "pmic_simulink/DC Voltage Source" , { { 1 , 1 } } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Electrical_Reference.V.v" , "pmic_simulink/Electrical Reference" , { { 1 , 1
} } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Electrical_Reference1.V.v" , "pmic_simulink/Electrical Reference1" , { { 1 ,
1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Electrical_Reference2.V.v" , "pmic_simulink/Electrical Reference2" , { { 1 ,
1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Electrical_Reference3.V.v" , "pmic_simulink/Electrical Reference3" , { { 1 ,
1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch.A.v" , "pmic_simulink/Ideal Semiconductor Switch"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Ideal_Semiconductor_Switch.G" ,
"pmic_simulink/Ideal Semiconductor Switch" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Ideal_Semiconductor_Switch.G_elec.v" ,
"pmic_simulink/Ideal Semiconductor Switch" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch.K.v" , "pmic_simulink/Ideal Semiconductor Switch"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Ideal_Semiconductor_Switch.i" ,
"pmic_simulink/Ideal Semiconductor Switch" , { { 1 , 1 } } , "A" , 1.0 , "A"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Ideal_Semiconductor_Switch.power_dissipated" ,
"pmic_simulink/Ideal Semiconductor Switch" , { { 1 , 1 } } , "W" , 1.0 , "kW"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Ideal_Semiconductor_Switch.v" , "pmic_simulink/Ideal Semiconductor Switch" ,
{ { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"Ideal_Semiconductor_Switch.vT" , "pmic_simulink/Ideal Semiconductor Switch"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"vT" , } , { "Ideal_Semiconductor_Switch1.A.v" ,
"pmic_simulink/Ideal Semiconductor Switch1" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch1.G" , "pmic_simulink/Ideal Semiconductor Switch1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G"
, } , { "Ideal_Semiconductor_Switch1.G_elec.v" ,
"pmic_simulink/Ideal Semiconductor Switch1" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch1.K.v" ,
"pmic_simulink/Ideal Semiconductor Switch1" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch1.i" , "pmic_simulink/Ideal Semiconductor Switch1"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i"
, } , { "Ideal_Semiconductor_Switch1.power_dissipated" ,
"pmic_simulink/Ideal Semiconductor Switch1" , { { 1 , 1 } } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Ideal_Semiconductor_Switch1.v" , "pmic_simulink/Ideal Semiconductor Switch1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v"
, } , { "Ideal_Semiconductor_Switch1.vT" ,
"pmic_simulink/Ideal Semiconductor Switch1" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Ideal_Semiconductor_Switch2.A.v" ,
"pmic_simulink/Ideal Semiconductor Switch2" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch2.G" , "pmic_simulink/Ideal Semiconductor Switch2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G"
, } , { "Ideal_Semiconductor_Switch2.G_elec.v" ,
"pmic_simulink/Ideal Semiconductor Switch2" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch2.K.v" ,
"pmic_simulink/Ideal Semiconductor Switch2" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch2.i" , "pmic_simulink/Ideal Semiconductor Switch2"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i"
, } , { "Ideal_Semiconductor_Switch2.power_dissipated" ,
"pmic_simulink/Ideal Semiconductor Switch2" , { { 1 , 1 } } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Ideal_Semiconductor_Switch2.v" , "pmic_simulink/Ideal Semiconductor Switch2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v"
, } , { "Ideal_Semiconductor_Switch2.vT" ,
"pmic_simulink/Ideal Semiconductor Switch2" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Ideal_Semiconductor_Switch3.A.v" ,
"pmic_simulink/Ideal Semiconductor Switch3" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch3.G" , "pmic_simulink/Ideal Semiconductor Switch3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G"
, } , { "Ideal_Semiconductor_Switch3.G_elec.v" ,
"pmic_simulink/Ideal Semiconductor Switch3" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch3.K.v" ,
"pmic_simulink/Ideal Semiconductor Switch3" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch3.i" , "pmic_simulink/Ideal Semiconductor Switch3"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i"
, } , { "Ideal_Semiconductor_Switch3.power_dissipated" ,
"pmic_simulink/Ideal Semiconductor Switch3" , { { 1 , 1 } } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Ideal_Semiconductor_Switch3.v" , "pmic_simulink/Ideal Semiconductor Switch3"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v"
, } , { "Ideal_Semiconductor_Switch3.vT" ,
"pmic_simulink/Ideal Semiconductor Switch3" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Ideal_Semiconductor_Switch4.A.v" ,
"pmic_simulink/Ideal Semiconductor Switch4" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch4.G" , "pmic_simulink/Ideal Semiconductor Switch4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G"
, } , { "Ideal_Semiconductor_Switch4.G_elec.v" ,
"pmic_simulink/Ideal Semiconductor Switch4" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch4.K.v" ,
"pmic_simulink/Ideal Semiconductor Switch4" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Ideal_Semiconductor_Switch4.i" , "pmic_simulink/Ideal Semiconductor Switch4"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i"
, } , { "Ideal_Semiconductor_Switch4.power_dissipated" ,
"pmic_simulink/Ideal Semiconductor Switch4" , { { 1 , 1 } } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Ideal_Semiconductor_Switch4.v" , "pmic_simulink/Ideal Semiconductor Switch4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v"
, } , { "Ideal_Semiconductor_Switch4.vT" ,
"pmic_simulink/Ideal Semiconductor Switch4" , { { 1 , 1 } } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , { "Inductor.i" ,
"pmic_simulink/Inductor" , { { 1 , 1 } } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Inductor.n.v" ,
"pmic_simulink/Inductor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Inductor.p.v" ,
"pmic_simulink/Inductor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Inductor.v" ,
"pmic_simulink/Inductor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Inductor.i_L" ,
"pmic_simulink/Inductor" , { { 1 , 1 } } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Inductor current" , } , {
"Inductor.power_dissipated" , "pmic_simulink/Inductor" , { { 1 , 1 } } , "kW"
, 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"Resistor.i" , "pmic_simulink/Resistor" , { { 1 , 1 } } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Resistor.n.v" ,
"pmic_simulink/Resistor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor.p.v" ,
"pmic_simulink/Resistor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor.v" ,
"pmic_simulink/Resistor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Resistor.power_dissipated" , "pmic_simulink/Resistor" , { { 1 , 1 } } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , }
, { "Resistor1.i" , "pmic_simulink/Resistor1" , { { 1 , 1 } } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Resistor1.n.v" ,
"pmic_simulink/Resistor1" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor1.p.v" ,
"pmic_simulink/Resistor1" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor1.v" ,
"pmic_simulink/Resistor1" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Resistor1.power_dissipated" , "pmic_simulink/Resistor1" , { { 1 , 1 } } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , }
, { "Resistor2.i" , "pmic_simulink/Resistor2" , { { 1 , 1 } } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Resistor2.n.v" ,
"pmic_simulink/Resistor2" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor2.p.v" ,
"pmic_simulink/Resistor2" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor2.v" ,
"pmic_simulink/Resistor2" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Resistor2.power_dissipated" , "pmic_simulink/Resistor2" , { { 1 , 1 } } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , }
, { "Simulink_PS_Converter1_output0" ,
"pmic_simulink/Simulink-PS\nConverter1" , { { 1 , 1 } } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter1_output0" , } ,
{ "Simulink_PS_Converter2_output0" , "pmic_simulink/Simulink-PS\nConverter2"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter2_output0" , } , { "Simulink_PS_Converter3_output0" ,
"pmic_simulink/Simulink-PS\nConverter3" , { { 1 , 1 } } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter3_output0" , } ,
{ "Simulink_PS_Converter4_output0" , "pmic_simulink/Simulink-PS\nConverter4"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter4_output0" , } , { "Simulink_PS_Converter_output0" ,
"pmic_simulink/Simulink-PS\nConverter" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter_output0" , } ,
{ "Voltage_Sensor.V" , "pmic_simulink/Voltage Sensor" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor.n.v" ,
"pmic_simulink/Voltage Sensor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor.p.v"
, "pmic_simulink/Voltage Sensor" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor1.V" ,
"pmic_simulink/Voltage Sensor1" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor1.n.v" ,
"pmic_simulink/Voltage Sensor1" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor1.p.v"
, "pmic_simulink/Voltage Sensor1" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor1_V0"
, "pmic_simulink/PS-Simulink\nConverter1" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor1_V0" , } , {
"Voltage_Sensor2.V" , "pmic_simulink/Voltage Sensor2" , { { 1 , 1 } } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor2.n.v" ,
"pmic_simulink/Voltage Sensor2" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor2.p.v"
, "pmic_simulink/Voltage Sensor2" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor2_V0"
, "pmic_simulink/PS-Simulink\nConverter2" , { { 1 , 1 } } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor2_V0" , } , {
"Voltage_Sensor_V0" , "pmic_simulink/PS-Simulink\nConverter" , { { 1 , 1 } }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor_V0" , } } ;
static NeModeData * s_major_mode_data = NULL ; static NeZCData s_zc_data [ 5
] = { { "pmic_simulink/Ideal Semiconductor Switch" , 1U , 0U ,
"Ideal_Semiconductor_Switch" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, NE_ZC_TYPE_FALSE , } , { "pmic_simulink/Ideal Semiconductor Switch1" , 1U ,
1U , "Ideal_Semiconductor_Switch1" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, NE_ZC_TYPE_FALSE , } , { "pmic_simulink/Ideal Semiconductor Switch2" , 1U ,
2U , "Ideal_Semiconductor_Switch2" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, NE_ZC_TYPE_FALSE , } , { "pmic_simulink/Ideal Semiconductor Switch3" , 1U ,
3U , "Ideal_Semiconductor_Switch3" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, NE_ZC_TYPE_FALSE , } , { "pmic_simulink/Ideal Semiconductor Switch4" , 1U ,
4U , "Ideal_Semiconductor_Switch4" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 5 ] = { {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData
s_assert_data [ 27 ] = { { "pmic_simulink/Capacitor" , 1U , 0U , "Capacitor"
,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"pmic_simulink/Capacitor" , 1U , 1U , "Capacitor" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"pmic_simulink/Capacitor" , 1U , 2U , "Capacitor" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"pmic_simulink/Capacitor" , 1U , 3U , "Capacitor" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"pmic_simulink/Capacitor1" , 1U , 4U , "Capacitor1" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"pmic_simulink/Capacitor1" , 1U , 5U , "Capacitor1" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"pmic_simulink/Capacitor1" , 1U , 6U , "Capacitor1" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"pmic_simulink/Capacitor1" , 1U , 7U , "Capacitor1" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"pmic_simulink/Capacitor2" , 1U , 8U , "Capacitor2" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"pmic_simulink/Capacitor2" , 1U , 9U , "Capacitor2" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"pmic_simulink/Capacitor2" , 1U , 10U , "Capacitor2" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"pmic_simulink/Capacitor2" , 1U , 11U , "Capacitor2" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"pmic_simulink/Inductor" , 1U , 12U , "Inductor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"pmic_simulink/Inductor" , 1U , 13U , "Inductor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"pmic_simulink/Inductor" , 1U , 14U , "Inductor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"pmic_simulink/Inductor" , 1U , 15U , "Inductor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"pmic_simulink/Resistor" , 1U , 16U , "Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"pmic_simulink/Resistor" , 1U , 17U , "Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"pmic_simulink/Resistor1" , 1U , 18U , "Resistor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"pmic_simulink/Resistor1" , 1U , 19U , "Resistor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"pmic_simulink/Resistor2" , 1U , 20U , "Resistor2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"pmic_simulink/Resistor2" , 1U , 21U , "Resistor2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"pmic_simulink/Ideal Semiconductor Switch" , 1U , 22U ,
"Ideal_Semiconductor_Switch" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"pmic_simulink/Ideal Semiconductor Switch1" , 1U , 23U ,
"Ideal_Semiconductor_Switch1" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"pmic_simulink/Ideal Semiconductor Switch2" , 1U , 24U ,
"Ideal_Semiconductor_Switch2" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"pmic_simulink/Ideal Semiconductor Switch3" , 1U , 25U ,
"Ideal_Semiconductor_Switch3" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"pmic_simulink/Ideal Semiconductor Switch4" , 1U , 26U ,
"Ideal_Semiconductor_Switch4" ,
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } } ; static
NeRange s_assert_range [ 27 ] = { {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 31U , 25U , 32U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 27U , 25U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 39U , 25U , 40U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 37U , 25U , 38U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData *
s_param_assert_data = NULL ; static NeRange * s_param_assert_range = NULL ;
static NeAssertData * s_initial_assert_data = NULL ; static NeRange *
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 23 ] = { {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 5U , 34U , 23U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 20U , 34U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , { "" , 1U , 1U , 1U , 1U
, NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/semiconductor_switch.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2023a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 19U , 5U , 19U , 6U , NE_RANGE_TYPE_NORMAL , } } ; static NeRange *
s_cer_range = NULL ; static NeRange * s_icr_range = NULL ; static
NeParameterData * s_logical_parameter_data = NULL ; static NeParameterData *
s_integer_parameter_data = NULL ; static NeParameterData *
s_index_parameter_data = NULL ; static NeParameterData *
s_real_parameter_data = NULL ; static NeDsMethodOutput * ds_output_m_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM_P . mNumCol = 10 ;
out -> mM_P . mNumRow = 10 ; out -> mM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out -> mM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 4 ) ;
return out ; } static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mM . mN = 4 ; out -> mM . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 4 ) ; return out ;
} static NeDsMethodOutput * ds_output_vmm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMM . mN = 4 ; out -> mVMM . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 4
) ; return out ; } static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 10 ; out ->
mDXM_P . mNumRow = 4 ; out -> mDXM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out -> mDXM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 0 ; out -> mDXM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM_P . mNumCol = 0 ; out ->
mDDM_P . mNumRow = 4 ; out -> mDDM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM . mN = 0 ; out -> mDDM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 5 ; out ->
mDUM_P . mNumRow = 4 ; out -> mDUM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mDUM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out ->
mDTM_P . mNumRow = 4 ; out -> mDTM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPM_P . mNumCol = 0 ; out ->
mDPM_P . mNumRow = 4 ; out -> mDPM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDPM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPM . mN = 0 ; out -> mDPM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 10 ; out ->
mA_P . mNumRow = 10 ; out -> mA_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out -> mA_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ;
return out ; } static NeDsMethodOutput * ds_output_a ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mA . mN = 16 ; out -> mA . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 16 ) ; return out
; } static NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mB_P . mNumCol = 5 ; out -> mB_P . mNumRow
= 10 ; out -> mB_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( int32_T ) , 6 ) ; out -> mB_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mB . mN = 0 ; out -> mB . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_c_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC_P .
mNumCol = 1 ; out -> mC_P . mNumRow = 10 ; out -> mC_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mC_P
. mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_c ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC . mN = 0 ; out -> mC . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mF . mN = 10 ; out -> mF . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 10 ) ; return out
; } static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMF . mN = 10 ; out -> mVMF . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 10
) ; return out ; } static NeDsMethodOutput * ds_output_vpf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVPF . mN = 10 ; out -> mVPF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 10 ) ; return out ; } static NeDsMethodOutput * ds_output_vsf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVSF . mN = 10 ; out -> mVSF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 10 ) ; return out ; } static NeDsMethodOutput * ds_output_slf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF . mN = 10 ; out -> mSLF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 10 ) ; return out ; } static NeDsMethodOutput * ds_output_slf0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 10 ; out -> mSLF0 .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 10 ) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 10 ; out ->
mDXF_P . mNumRow = 10 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 16 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 16 ; out -> mDXF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
16 ) ; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 5 ; out ->
mDUF_P . mNumRow = 10 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 0 ; out -> mDUF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 10 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 0 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 0 ; out ->
mDDF_P . mNumRow = 10 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 0 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF_P . mNumCol = 0 ; out ->
mDPDXF_P . mNumRow = 16 ; out -> mDPDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDPDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF . mN = 0 ; out -> mDPDXF
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dwf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF_P . mNumCol = 0 ; out ->
mDWF_P . mNumRow = 10 ; out -> mDWF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDWF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dwf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF . mN = 0 ; out -> mDWF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 5 ; out ->
mTDUF_P . mNumRow = 10 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 10 ; out ->
mTDXF_P . mNumRow = 10 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 32 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 12 ; out ->
mDNF_P . mNumRow = 10 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 0 ; out -> mDNF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 10 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 10 ) ; return out ; } static NeDsMethodOutput * ds_output_cer
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCER . mN = 0 ; out ->
mCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER . mN = 0 ; out
-> mDXCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER_P . mNumCol =
10 ; out -> mDXCER_P . mNumRow = 0 ; out -> mDXCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out ->
mDXCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER . mN = 0 ; out
-> mDDCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER_P . mNumCol = 0
; out -> mDDCER_P . mNumRow = 0 ; out -> mDDCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ic (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC . mN = 10 ; out ->
mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 10 ) ; return out ; } static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR . mN = 0 ; out -> mICR . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_icr_im ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IM . mN = 0 ; out ->
mICR_IM . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_id (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 0 ; out
-> mICR_ID . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_il ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IL . mN = 0 ; out -> mICR_IL . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 0 ; out -> mDXICR . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol = 10 ; out ->
mDXICR_P . mNumRow = 0 ; out -> mDXICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out -> mDXICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddicr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR . mN = 0 ; out -> mDDICR
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR_P . mNumCol = 0 ; out ->
mDDICR_P . mNumRow = 0 ; out -> mDDICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDICR_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tduicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol = 5 ; out ->
mTDUICR_P . mNumRow = 0 ; out -> mTDUICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mTDUICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_icrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM_P . mNumCol = 10 ; out ->
mICRM_P . mNumRow = 0 ; out -> mICRM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out -> mICRM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM . mN = 0 ; out -> mICRM .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM_P . mNumCol = 10 ; out
-> mDXICRM_P . mNumRow = 0 ; out -> mDXICRM_P . mJc = ( int32_T * ) allocator
-> mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out -> mDXICRM_P .
mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T )
, 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM . mN = 0 ; out ->
mDXICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM_P . mNumCol =
0 ; out -> mDDICRM_P . mNumRow = 0 ; out -> mDDICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM . mN = 0 ; out
-> mDDICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_freqs (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mFREQS . mN = 0 ; out
-> mFREQS . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDUY_P . mNumCol = 5
; out -> mMDUY_P . mNumRow = 3 ; out -> mMDUY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out ->
mMDUY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol = 10
; out -> mMDXY_P . mNumRow = 3 ; out -> mMDXY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out ->
mMDXY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 5
; out -> mTDUY_P . mNumRow = 3 ; out -> mTDUY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out ->
mTDUY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_tdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol = 10
; out -> mTDXY_P . mNumRow = 3 ; out -> mTDXY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out ->
mTDXY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 6 ) ; return out ; } static NeDsMethodOutput * ds_output_y (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 3 ; out ->
mY . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 3 ) ; return out ; } static NeDsMethodOutput * ds_output_dxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 10 ; out ->
mDXY_P . mNumRow = 3 ; out -> mDXY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out -> mDXY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 6 ; out -> mDXY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 6 )
; return out ; } static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 5 ; out ->
mDUY_P . mNumRow = 3 ; out -> mDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 0 ; out -> mDUY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dty_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out ->
mDTY_P . mNumRow = 3 ; out -> mDTY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 5 ; out -> mMODE .
mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) ,
5 ) ; return out ; } static NeDsMethodOutput * ds_output_zc ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 5 ; out -> mZC . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 5 ) ;
return out ; } static NeDsMethodOutput * ds_output_cache_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out ->
mCACHE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 0 ;
out -> mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_R . mN = 0 ; out -> mUPDATE_R . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 0 ; out -> mUPDATE_I . mX
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_update2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_R . mN = 0 ; out ->
mUPDATE2_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_update2_i
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_I . mN = 0 ;
out -> mUPDATE2_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK_R . mN = 0 ; out -> mLOCK_R . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_lock_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mLOCK_I . mN = 0 ; out -> mLOCK_I . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_lock2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOCK2_R . mN = 0 ; out ->
mLOCK2_R . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock2_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK2_I . mN = 0 ; out -> mLOCK2_I . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFO . mN = 0 ; out -> mSFO . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFP . mN = 0 ; out -> mSFP . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 0 ; out -> mINIT_R . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_init_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 0 ; out ->
mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 81 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 81 ) ; return out ; } static NeDsMethodOutput * ds_output_assert (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 27 ;
out -> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 27 ) ; return out ; } static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mPASSERT . mN = 0 ; out -> mPASSERT . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIASSERT . mN = 0 ; out -> mIASSERT . mX =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 10 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P
. mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 11 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 5 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 103 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 103 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 103 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 103 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 103 ; out -> mOBS_ALL . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 103
) ; return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 103 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 103 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_L . mN = 0 ; out
-> mDP_L . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_I . mN = 0 ; out
-> mDP_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_j (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_J . mN = 0 ; out
-> mDP_J . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_R . mN = 0 ; out
-> mDP_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qx (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 0 ; out ->
mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qu ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out -> mQU . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 0 ; out -> mQ1 . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 10 ; out -> mQX_P .
mNumRow = 10 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 11 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 5 ; out -> mQU_P .
mNumRow = 10 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 6 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 10 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 10 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 10 ; out -> mVAR_TOL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 10 ) ;
return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 10 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 10 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 10 ; out ->
mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 10 ) ; return out ; } static NeDsMethodOutput * ds_output_slv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 10 ; out
-> mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 10 ) ; return out ; } static NeDsMethodOutput * ds_output_nldv
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mNLDV . mN = 10 ; out
-> mNLDV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 10 ) ; return out ; } static NeDsMethodOutput *
ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSCLV
. mN = 10 ; out -> mSCLV . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 10 ) ; return out ; } static
NeDsMethodOutput * ds_output_imin ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIMIN . mN = 10 ; out -> mIMIN . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 10 ) ;
return out ; } static NeDsMethodOutput * ds_output_imax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIMAX . mN = 10 ; out -> mIMAX .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
10 ) ; return out ; } static NeDsMethodOutput * ds_output_dimin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMIN . mN = 0 ; out -> mDIMIN
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMAX . mN = 0 ; out -> mDIMAX
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static void release_reference ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; if ( -- _ds ->
mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds -> mAlloc , _ds ) ; } }
static void get_reference ( NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ;
_ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt ; } static
NeDynamicSystem * diagnostics ( NeDynamicSystem * ds , boolean_T kp ) {
_NeDynamicSystem * _ds = ( _NeDynamicSystem * ) ds ; ( void ) kp ;
ne_ds_get_reference ( & _ds -> mBase ) ; return & _ds -> mBase ; } static
void expand ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
PmRealVector * out , boolean_T kp ) { ( void ) ds ; ( void ) kp ; memcpy (
out -> mX , in -> mX . mX , sizeof ( real_T ) * out -> mN ) ; } static void
rtpmap ( const NeDynamicSystem * ds , const PmIntVector * inl , const
PmIntVector * ini , const PmIntVector * inj , const PmRealVector * inr ,
PmIntVector * outl , PmIntVector * outi , PmIntVector * outj , PmRealVector *
outr ) { ( void ) ds ; memcpy ( outl -> mX , inl -> mX , sizeof ( int32_T ) *
inl -> mN ) ; memcpy ( outi -> mX , ini -> mX , sizeof ( int32_T ) * ini ->
mN ) ; memcpy ( outj -> mX , inj -> mX , sizeof ( int32_T ) * inj -> mN ) ;
memcpy ( outr -> mX , inr -> mX , sizeof ( real_T ) * inr -> mN ) ; }
NeDynamicSystem * pmic_simulink_3d17a902_1_dae_ds ( PmAllocator * allocator )
{ NeDynamicSystem * ds ; _NeDynamicSystem * _ds ; static SscIoInfo input_info
[ 5 ] ; static SscIoInfo output_info [ 3 ] ; _ds = ( _NeDynamicSystem * )
allocator -> mCallocFcn ( allocator , sizeof ( _NeDynamicSystem ) , 1 ) ; _ds
-> mAlloc = * allocator ; _ds -> mRefCnt = 1 ; ds = & _ds -> mBase ; ds ->
mNumVariables = 10 ; ds -> mNumDiscreteRealVariables = 0 ; ds ->
mNumDifferentialVariables = 4 ; ds -> mNumEquations = 10 ; ds ->
mNumCEResiduals = 0 ; ds -> mNumICResiduals = 0 ; ds -> mNumFreqs = 0 ; ds ->
mNumModes = 5 ; ds -> mNumMajorModes = 0 ; ds -> mNumRealCache = 0 ; ds ->
mNumIntCache = 0 ; ds -> mNumObservables = 107 ; ds -> mNumObservableElements
= 103 ; ds -> mNumZcs = 5 ; ds -> mNumAsserts = 27 ; ds -> mNumAssertRanges =
27 ; ds -> mNumParamAsserts = 0 ; ds -> mNumParamAssertRanges = 0 ; ds ->
mNumInitialAsserts = 0 ; ds -> mNumInitialAssertRanges = 0 ; ds -> mNumRanges
= 5 ; ds -> mNumEquationRanges = 23 ; ds -> mNumCERRanges = 0 ; ds ->
mNumICRRanges = 0 ; ds -> mNumFundamentalSamples = 0 ; ds -> mNumDelays = 0 ;
ds -> mNumLogicalParameters = 0 ; ds -> mNumIntegerParameters = 0 ; ds ->
mNumIndexParameters = 0 ; ds -> mNumRealParameters = 0 ; ds ->
mNumLogicalDerivedParameters = 0 ; ds -> mNumIntegerDerivedParameters = 0 ;
ds -> mNumIndexDerivedParameters = 0 ; ds -> mNumRealDerivedParameters = 0 ;
ds -> mIsOutputLinear = TRUE ; ds -> mIsOutputSwitchedLinear = TRUE ; ds ->
mIsScalable = FALSE ; ds -> mNumIo [ SSC_INPUT_IO_TYPE ] = 5 ; input_info [ 0
] . mIdentifier = "Simulink_PS_Converter_output0" ; input_info [ 0 ] . mSize
= ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 0
] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 0 ] . mSize , 1
, 1 ) ; input_info [ 0 ] . mName = "Simulink_PS_Converter_output0" ;
input_info [ 0 ] . mUnit = "V" ; input_info [ 1 ] . mIdentifier =
"Simulink_PS_Converter1_output0" ; input_info [ 1 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 1 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 1 ] . mSize , 1 ,
1 ) ; input_info [ 1 ] . mName = "Simulink_PS_Converter1_output0" ;
input_info [ 1 ] . mUnit = "1" ; input_info [ 2 ] . mIdentifier =
"Simulink_PS_Converter2_output0" ; input_info [ 2 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 2 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 2 ] . mSize , 1 ,
1 ) ; input_info [ 2 ] . mName = "Simulink_PS_Converter2_output0" ;
input_info [ 2 ] . mUnit = "1" ; input_info [ 3 ] . mIdentifier =
"Simulink_PS_Converter3_output0" ; input_info [ 3 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 3 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 3 ] . mSize , 1 ,
1 ) ; input_info [ 3 ] . mName = "Simulink_PS_Converter3_output0" ;
input_info [ 3 ] . mUnit = "1" ; input_info [ 4 ] . mIdentifier =
"Simulink_PS_Converter4_output0" ; input_info [ 4 ] . mSize =
ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( & input_info [ 4 ]
. mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & input_info [ 4 ] . mSize , 1 ,
1 ) ; input_info [ 4 ] . mName = "Simulink_PS_Converter4_output0" ;
input_info [ 4 ] . mUnit = "1" ; ds -> mIo [ SSC_INPUT_IO_TYPE ] = input_info
; ds -> mNumIo [ SSC_OUTPUT_IO_TYPE ] = 3 ; output_info [ 0 ] . mIdentifier =
"Voltage_Sensor1_V0" ; output_info [ 0 ] . mSize = ssc_make_scalar_array_size
( ) ; ssc_array_size_set_dim ( & output_info [ 0 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 0 ] . mSize , 1 , 1 ) ; output_info
[ 0 ] . mName = "Voltage_Sensor1_V0" ; output_info [ 0 ] . mUnit = "V" ;
output_info [ 1 ] . mIdentifier = "Voltage_Sensor2_V0" ; output_info [ 1 ] .
mSize = ssc_make_scalar_array_size ( ) ; ssc_array_size_set_dim ( &
output_info [ 1 ] . mSize , 0 , 1 ) ; ssc_array_size_set_dim ( & output_info
[ 1 ] . mSize , 1 , 1 ) ; output_info [ 1 ] . mName = "Voltage_Sensor2_V0" ;
output_info [ 1 ] . mUnit = "V" ; output_info [ 2 ] . mIdentifier =
"Voltage_Sensor_V0" ; output_info [ 2 ] . mSize = ssc_make_scalar_array_size
( ) ; ssc_array_size_set_dim ( & output_info [ 2 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 2 ] . mSize , 1 , 1 ) ; output_info
[ 2 ] . mName = "Voltage_Sensor_V0" ; output_info [ 2 ] . mUnit = "V" ; ds ->
mIo [ SSC_OUTPUT_IO_TYPE ] = output_info ; ds -> mReleaseReference =
release_reference ; ds -> mGetReference = get_reference ; ds ->
mDiagnosticsDsFcn = diagnostics ; ds -> mExpandFcn = expand ; ds ->
mRtpMapFcn = rtpmap ; ds -> mMethods [ NE_DS_METHOD_M_P ] = ds_m_p ; ds ->
mMakeOutput [ NE_DS_METHOD_M_P ] = ds_output_m_p ; ds -> mMethods [
NE_DS_METHOD_M ] = ds_m ; ds -> mMakeOutput [ NE_DS_METHOD_M ] = ds_output_m
; ds -> mMethods [ NE_DS_METHOD_VMM ] = ds_vmm ; ds -> mMakeOutput [
NE_DS_METHOD_VMM ] = ds_output_vmm ; ds -> mMethods [ NE_DS_METHOD_DXM_P ] =
ds_dxm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXM_P ] = ds_output_dxm_p ; ds ->
mMethods [ NE_DS_METHOD_DXM ] = ds_dxm ; ds -> mMakeOutput [ NE_DS_METHOD_DXM
] = ds_output_dxm ; ds -> mMethods [ NE_DS_METHOD_DDM_P ] = ds_ddm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DDM_P ] = ds_output_ddm_p ; ds -> mMethods [
NE_DS_METHOD_DDM ] = ds_ddm ; ds -> mMakeOutput [ NE_DS_METHOD_DDM ] =
ds_output_ddm ; ds -> mMethods [ NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUM_P ] = ds_output_dum_p ; ds -> mMethods [
NE_DS_METHOD_DUM ] = ds_dum ; ds -> mMakeOutput [ NE_DS_METHOD_DUM ] =
ds_output_dum ; ds -> mMethods [ NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTM_P ] = ds_output_dtm_p ; ds -> mMethods [
NE_DS_METHOD_DTM ] = ds_dtm ; ds -> mMakeOutput [ NE_DS_METHOD_DTM ] =
ds_output_dtm ; ds -> mMethods [ NE_DS_METHOD_DPM_P ] = ds_dpm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DPM_P ] = ds_output_dpm_p ; ds -> mMethods [
NE_DS_METHOD_DPM ] = ds_dpm ; ds -> mMakeOutput [ NE_DS_METHOD_DPM ] =
ds_output_dpm ; ds -> mMethods [ NE_DS_METHOD_A_P ] = ds_a_p ; ds ->
mMakeOutput [ NE_DS_METHOD_A_P ] = ds_output_a_p ; ds -> mMethods [
NE_DS_METHOD_A ] = ds_a ; ds -> mMakeOutput [ NE_DS_METHOD_A ] = ds_output_a
; ds -> mMethods [ NE_DS_METHOD_B_P ] = ds_b_p ; ds -> mMakeOutput [
NE_DS_METHOD_B_P ] = ds_output_b_p ; ds -> mMethods [ NE_DS_METHOD_B ] = ds_b
; ds -> mMakeOutput [ NE_DS_METHOD_B ] = ds_output_b ; ds -> mMethods [
NE_DS_METHOD_C_P ] = ds_c_p ; ds -> mMakeOutput [ NE_DS_METHOD_C_P ] =
ds_output_c_p ; ds -> mMethods [ NE_DS_METHOD_C ] = ds_c ; ds -> mMakeOutput
[ NE_DS_METHOD_C ] = ds_output_c ; ds -> mMethods [ NE_DS_METHOD_F ] =
pmic_simulink_3d17a902_1_ds_f ; ds -> mMakeOutput [ NE_DS_METHOD_F ] =
ds_output_f ; ds -> mMethods [ NE_DS_METHOD_VMF ] = ds_vmf ; ds ->
mMakeOutput [ NE_DS_METHOD_VMF ] = ds_output_vmf ; ds -> mMethods [
NE_DS_METHOD_VPF ] = ds_vpf ; ds -> mMakeOutput [ NE_DS_METHOD_VPF ] =
ds_output_vpf ; ds -> mMethods [ NE_DS_METHOD_VSF ] = ds_vsf ; ds ->
mMakeOutput [ NE_DS_METHOD_VSF ] = ds_output_vsf ; ds -> mMethods [
NE_DS_METHOD_SLF ] = ds_slf ; ds -> mMakeOutput [ NE_DS_METHOD_SLF ] =
ds_output_slf ; ds -> mMethods [ NE_DS_METHOD_SLF0 ] = ds_slf0 ; ds ->
mMakeOutput [ NE_DS_METHOD_SLF0 ] = ds_output_slf0 ; ds -> mMethods [
NE_DS_METHOD_DXF_P ] = ds_dxf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXF_P ] =
ds_output_dxf_p ; ds -> mMethods [ NE_DS_METHOD_DXF ] =
pmic_simulink_3d17a902_1_ds_dxf ; ds -> mMakeOutput [ NE_DS_METHOD_DXF ] =
ds_output_dxf ; ds -> mMethods [ NE_DS_METHOD_DUF_P ] = ds_duf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUF_P ] = ds_output_duf_p ; ds -> mMethods [
NE_DS_METHOD_DUF ] = ds_duf ; ds -> mMakeOutput [ NE_DS_METHOD_DUF ] =
ds_output_duf ; ds -> mMethods [ NE_DS_METHOD_DTF_P ] = ds_dtf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTF_P ] = ds_output_dtf_p ; ds -> mMethods [
NE_DS_METHOD_DTF ] = ds_dtf ; ds -> mMakeOutput [ NE_DS_METHOD_DTF ] =
ds_output_dtf ; ds -> mMethods [ NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DDF_P ] = ds_output_ddf_p ; ds -> mMethods [
NE_DS_METHOD_DDF ] = ds_ddf ; ds -> mMakeOutput [ NE_DS_METHOD_DDF ] =
ds_output_ddf ; ds -> mMethods [ NE_DS_METHOD_DPDXF_P ] = ds_dpdxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DPDXF_P ] = ds_output_dpdxf_p ; ds -> mMethods [
NE_DS_METHOD_DPDXF ] = ds_dpdxf ; ds -> mMakeOutput [ NE_DS_METHOD_DPDXF ] =
ds_output_dpdxf ; ds -> mMethods [ NE_DS_METHOD_DWF_P ] = ds_dwf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DWF_P ] = ds_output_dwf_p ; ds -> mMethods [
NE_DS_METHOD_DWF ] = ds_dwf ; ds -> mMakeOutput [ NE_DS_METHOD_DWF ] =
ds_output_dwf ; ds -> mMethods [ NE_DS_METHOD_TDUF_P ] = ds_tduf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDUF_P ] = ds_output_tduf_p ; ds -> mMethods [
NE_DS_METHOD_TDXF_P ] = pmic_simulink_3d17a902_1_ds_tdxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDXF_P ] = ds_output_tdxf_p ; ds -> mMethods [
NE_DS_METHOD_DNF_P ] = ds_dnf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DNF_P ] =
ds_output_dnf_p ; ds -> mMethods [ NE_DS_METHOD_DNF ] = ds_dnf ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF ] = ds_output_dnf ; ds -> mMethods [
NE_DS_METHOD_DNF_V_X ] = ds_dnf_v_x ; ds -> mMakeOutput [
NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [
NE_DS_METHOD_CER ] = ds_cer ; ds -> mMakeOutput [ NE_DS_METHOD_CER ] =
ds_output_cer ; ds -> mMethods [ NE_DS_METHOD_DXCER ] = ds_dxcer ; ds ->
mMakeOutput [ NE_DS_METHOD_DXCER ] = ds_output_dxcer ; ds -> mMethods [
NE_DS_METHOD_DXCER_P ] = ds_dxcer_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXCER_P ] = ds_output_dxcer_p ; ds -> mMethods [
NE_DS_METHOD_DDCER ] = ds_ddcer ; ds -> mMakeOutput [ NE_DS_METHOD_DDCER ] =
ds_output_ddcer ; ds -> mMethods [ NE_DS_METHOD_DDCER_P ] = ds_ddcer_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDCER_P ] = ds_output_ddcer_p ; ds -> mMethods
[ NE_DS_METHOD_IC ] = ds_ic ; ds -> mMakeOutput [ NE_DS_METHOD_IC ] =
ds_output_ic ; ds -> mMethods [ NE_DS_METHOD_ICR ] = ds_icr ; ds ->
mMakeOutput [ NE_DS_METHOD_ICR ] = ds_output_icr ; ds -> mMethods [
NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_IM ]
= ds_output_icr_im ; ds -> mMethods [ NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_ID ] = ds_output_icr_id ; ds -> mMethods [
NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_IL ]
= ds_output_icr_il ; ds -> mMethods [ NE_DS_METHOD_DXICR ] = ds_dxicr ; ds ->
mMakeOutput [ NE_DS_METHOD_DXICR ] = ds_output_dxicr ; ds -> mMethods [
NE_DS_METHOD_DXICR_P ] = ds_dxicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICR_P ] = ds_output_dxicr_p ; ds -> mMethods [
NE_DS_METHOD_DDICR ] = ds_ddicr ; ds -> mMakeOutput [ NE_DS_METHOD_DDICR ] =
ds_output_ddicr ; ds -> mMethods [ NE_DS_METHOD_DDICR_P ] = ds_ddicr_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDICR_P ] = ds_output_ddicr_p ; ds -> mMethods
[ NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_ICRM_P ] = ds_icrm_p ; ds -> mMakeOutput [ NE_DS_METHOD_ICRM_P ]
= ds_output_icrm_p ; ds -> mMethods [ NE_DS_METHOD_ICRM ] = ds_icrm ; ds ->
mMakeOutput [ NE_DS_METHOD_ICRM ] = ds_output_icrm ; ds -> mMethods [
NE_DS_METHOD_DXICRM_P ] = ds_dxicrm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICRM_P ] = ds_output_dxicrm_p ; ds -> mMethods [
NE_DS_METHOD_DXICRM ] = ds_dxicrm ; ds -> mMakeOutput [ NE_DS_METHOD_DXICRM ]
= ds_output_dxicrm ; ds -> mMethods [ NE_DS_METHOD_DDICRM_P ] = ds_ddicrm_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DDICRM_P ] = ds_output_ddicrm_p ; ds ->
mMethods [ NE_DS_METHOD_DDICRM ] = ds_ddicrm ; ds -> mMakeOutput [
NE_DS_METHOD_DDICRM ] = ds_output_ddicrm ; ds -> mMethods [
NE_DS_METHOD_FREQS ] = ds_freqs ; ds -> mMakeOutput [ NE_DS_METHOD_FREQS ] =
ds_output_freqs ; ds -> mMethods [ NE_DS_METHOD_MDUY_P ] = ds_mduy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_MDUY_P ] = ds_output_mduy_p ; ds -> mMethods [
NE_DS_METHOD_MDXY_P ] = ds_mdxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_MDXY_P ]
= ds_output_mdxy_p ; ds -> mMethods [ NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds
-> mMakeOutput [ NE_DS_METHOD_TDUY_P ] = ds_output_tduy_p ; ds -> mMethods [
NE_DS_METHOD_TDXY_P ] = ds_tdxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDXY_P ]
= ds_output_tdxy_p ; ds -> mMethods [ NE_DS_METHOD_Y ] = ds_y ; ds ->
mMakeOutput [ NE_DS_METHOD_Y ] = ds_output_y ; ds -> mMethods [
NE_DS_METHOD_DXY_P ] = ds_dxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXY_P ] =
ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ] = ds_dxy ; ds ->
mMakeOutput [ NE_DS_METHOD_DXY ] = ds_output_dxy ; ds -> mMethods [
NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUY_P ] =
ds_output_duy_p ; ds -> mMethods [ NE_DS_METHOD_DUY ] = ds_duy ; ds ->
mMakeOutput [ NE_DS_METHOD_DUY ] = ds_output_duy ; ds -> mMethods [
NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds -> mMakeOutput [ NE_DS_METHOD_DTY_P ] =
ds_output_dty_p ; ds -> mMethods [ NE_DS_METHOD_DTY ] = ds_dty ; ds ->
mMakeOutput [ NE_DS_METHOD_DTY ] = ds_output_dty ; ds -> mMethods [
NE_DS_METHOD_MODE ] = ds_mode ; ds -> mMakeOutput [ NE_DS_METHOD_MODE ] =
ds_output_mode ; ds -> mMethods [ NE_DS_METHOD_ZC ] = ds_zc ; ds ->
mMakeOutput [ NE_DS_METHOD_ZC ] = ds_output_zc ; ds -> mMethods [
NE_DS_METHOD_CACHE_R ] = ds_cache_r ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ; ds -> mMethods [
NE_DS_METHOD_CACHE_I ] = ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = ds_update_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE_I ] = ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_R ] = ds_update2_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_R ] = ds_output_update2_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_I ] = ds_update2_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_I ] = ds_output_update2_i ; ds -> mMethods [
NE_DS_METHOD_LOCK_R ] = ds_lock_r ; ds -> mMakeOutput [ NE_DS_METHOD_LOCK_R ]
= ds_output_lock_r ; ds -> mMethods [ NE_DS_METHOD_LOCK_I ] = ds_lock_i ; ds
-> mMakeOutput [ NE_DS_METHOD_LOCK_I ] = ds_output_lock_i ; ds -> mMethods [
NE_DS_METHOD_LOCK2_R ] = ds_lock2_r ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_R ] = ds_output_lock2_r ; ds -> mMethods [
NE_DS_METHOD_LOCK2_I ] = ds_lock2_i ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_I ] = ds_output_lock2_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = pmic_simulink_3d17a902_1_ds_log ; ds -> mMakeOutput [
NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [ NE_DS_METHOD_ASSERT ] =
ds_assert ; ds -> mMakeOutput [ NE_DS_METHOD_ASSERT ] = ds_output_assert ; ds
-> mMethods [ NE_DS_METHOD_PASSERT ] = ds_passert ; ds -> mMakeOutput [
NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds -> mMethods [
NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] = ds_dxdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds -> mMethods [
NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT ]
= ds_output_dxdelt ; ds -> mMethods [ NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds ->
mMethods [ NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT ] = ds_output_dudelt ; ds -> mMethods [
NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds -> mMethods [
NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DTDELT ]
= ds_output_dtdelt ; ds -> mMethods [ NE_DS_METHOD_OBS_EXP ] = ds_obs_exp ;
ds -> mMakeOutput [ NE_DS_METHOD_OBS_EXP ] = ds_output_obs_exp ; ds ->
mMethods [ NE_DS_METHOD_OBS_ACT ] = pmic_simulink_3d17a902_1_ds_obs_act ; ds
-> mMakeOutput [ NE_DS_METHOD_OBS_ACT ] = ds_output_obs_act ; ds -> mMethods
[ NE_DS_METHOD_OBS_ALL ] = pmic_simulink_3d17a902_1_ds_obs_all ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ALL ] = ds_output_obs_all ; ds -> mMethods [
NE_DS_METHOD_OBS_IL ] = pmic_simulink_3d17a902_1_ds_obs_il ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_IL ] = ds_output_obs_il ; ds -> mMethods [
NE_DS_METHOD_DP_L ] = ds_dp_l ; ds -> mMakeOutput [ NE_DS_METHOD_DP_L ] =
ds_output_dp_l ; ds -> mMethods [ NE_DS_METHOD_DP_I ] = ds_dp_i ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_I ] = ds_output_dp_i ; ds -> mMethods [
NE_DS_METHOD_DP_J ] = ds_dp_j ; ds -> mMakeOutput [ NE_DS_METHOD_DP_J ] =
ds_output_dp_j ; ds -> mMethods [ NE_DS_METHOD_DP_R ] = ds_dp_r ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_R ] = ds_output_dp_r ; ds -> mMethods [
NE_DS_METHOD_QX ] = ds_qx ; ds -> mMakeOutput [ NE_DS_METHOD_QX ] =
ds_output_qx ; ds -> mMethods [ NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput
[ NE_DS_METHOD_QU ] = ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] =
ds_qt ; ds -> mMakeOutput [ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods
[ NE_DS_METHOD_Q1 ] = ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] =
ds_output_q1 ; ds -> mMethods [ NE_DS_METHOD_QX_P ] = ds_qx_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QX_P ] = ds_output_qx_p ; ds -> mMethods [
NE_DS_METHOD_QU_P ] = ds_qu_p ; ds -> mMakeOutput [ NE_DS_METHOD_QU_P ] =
ds_output_qu_p ; ds -> mMethods [ NE_DS_METHOD_QT_P ] = ds_qt_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QT_P ] = ds_output_qt_p ; ds -> mMethods [
NE_DS_METHOD_Q1_P ] = ds_q1_p ; ds -> mMakeOutput [ NE_DS_METHOD_Q1_P ] =
ds_output_q1_p ; ds -> mMethods [ NE_DS_METHOD_VAR_TOL ] = ds_var_tol ; ds ->
mMakeOutput [ NE_DS_METHOD_VAR_TOL ] = ds_output_var_tol ; ds -> mMethods [
NE_DS_METHOD_EQ_TOL ] = ds_eq_tol ; ds -> mMakeOutput [ NE_DS_METHOD_EQ_TOL ]
= ds_output_eq_tol ; ds -> mMethods [ NE_DS_METHOD_LV ] = ds_lv ; ds ->
mMakeOutput [ NE_DS_METHOD_LV ] = ds_output_lv ; ds -> mMethods [
NE_DS_METHOD_SLV ] = ds_slv ; ds -> mMakeOutput [ NE_DS_METHOD_SLV ] =
ds_output_slv ; ds -> mMethods [ NE_DS_METHOD_NLDV ] = ds_nldv ; ds ->
mMakeOutput [ NE_DS_METHOD_NLDV ] = ds_output_nldv ; ds -> mMethods [
NE_DS_METHOD_SCLV ] = ds_sclv ; ds -> mMakeOutput [ NE_DS_METHOD_SCLV ] =
ds_output_sclv ; ds -> mMethods [ NE_DS_METHOD_IMIN ] = ds_imin ; ds ->
mMakeOutput [ NE_DS_METHOD_IMIN ] = ds_output_imin ; ds -> mMethods [
NE_DS_METHOD_IMAX ] = ds_imax ; ds -> mMakeOutput [ NE_DS_METHOD_IMAX ] =
ds_output_imax ; ds -> mMethods [ NE_DS_METHOD_DIMIN ] = ds_dimin ; ds ->
mMakeOutput [ NE_DS_METHOD_DIMIN ] = ds_output_dimin ; ds -> mMethods [
NE_DS_METHOD_DIMAX ] = ds_dimax ; ds -> mMakeOutput [ NE_DS_METHOD_DIMAX ] =
ds_output_dimax ; ds -> mEquationData = s_equation_data ; ds -> mCERData =
s_cer_data ; ds -> mICRData = s_icr_data ; ds -> mVariableData =
s_variable_data ; ds -> mDiscreteData = s_discrete_data ; ds ->
mObservableData = s_observable_data ; ds -> mMajorModeData =
s_major_mode_data ; ds -> mZCData = s_zc_data ; ds -> mRanges = s_range ; ds
-> mAssertData = s_assert_data ; ds -> mAssertRanges = s_assert_range ; ds ->
mParamAssertData = s_param_assert_data ; ds -> mParamAssertRanges =
s_param_assert_range ; ds -> mInitialAssertData = s_initial_assert_data ; ds
-> mInitialAssertRanges = s_initial_assert_range ; ds -> mEquationRanges =
s_equation_range ; ds -> mCERRanges = s_cer_range ; ds -> mICRRanges =
s_icr_range ; ds -> mLogicalParameters = s_logical_parameter_data ; ds ->
mIntegerParameters = s_integer_parameter_data ; ds -> mIndexParameters =
s_index_parameter_data ; ds -> mRealParameters = s_real_parameter_data ; ds
-> mNumLargeArray = 0 ; return ( NeDynamicSystem * ) _ds ; } static int32_T
ds_assert ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmIntVector out ; ( void ) t1 ; out = t2 -> mASSERT
; out . mX [ 0 ] = 1 ; out . mX [ 1 ] = 1 ; out . mX [ 2 ] = 1 ; out . mX [ 3
] = 1 ; out . mX [ 4 ] = 1 ; out . mX [ 5 ] = 1 ; out . mX [ 6 ] = 1 ; out .
mX [ 7 ] = 1 ; out . mX [ 8 ] = 1 ; out . mX [ 9 ] = 1 ; out . mX [ 10 ] = 1
; out . mX [ 11 ] = 1 ; out . mX [ 12 ] = 1 ; out . mX [ 13 ] = 1 ; out . mX
[ 14 ] = 1 ; out . mX [ 15 ] = 1 ; out . mX [ 16 ] = 1 ; out . mX [ 17 ] = 1
; out . mX [ 18 ] = 1 ; out . mX [ 19 ] = 1 ; out . mX [ 20 ] = 1 ; out . mX
[ 21 ] = 1 ; out . mX [ 22 ] = 1 ; out . mX [ 23 ] = 1 ; out . mX [ 24 ] = 1
; out . mX [ 25 ] = 1 ; out . mX [ 26 ] = 1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_passert ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_iassert ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_cer ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dxcer ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxcer_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXCER_P ; out .
mNumCol = 10ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out
. mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ]
= 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_ddcer ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_ddcer_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDDCER_P ; out .
mNumCol = 0ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_del_v ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1
; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_del_v0 ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_tmax ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_del_t ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxdelt ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxdelt_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDXDELT_P ; out . mNumCol = 10ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] =
0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out .
mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] =
0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; ( void
) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dudelt ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dudelt_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUDELT_P ; out . mNumCol = 5ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0
; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc
[ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_dtdelt ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtdelt_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDTDELT_P ; out .
mNumCol = 1ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_cache_r (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_init_r ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_update_r ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_lock_r ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_cache_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_init_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_update_i ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_lock_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_update2_r ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_lock2_r ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_update2_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_lock2_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_sfp ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_sfo ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXF_P ; out .
mNumCol = 10ULL ; out . mNumRow = 10ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 1 ; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ; out
. mJc [ 5 ] = 5 ; out . mJc [ 6 ] = 6 ; out . mJc [ 7 ] = 7 ; out . mJc [ 8 ]
= 9 ; out . mJc [ 9 ] = 11 ; out . mJc [ 10 ] = 16 ; out . mIr [ 0 ] = 6 ;
out . mIr [ 1 ] = 5 ; out . mIr [ 2 ] = 4 ; out . mIr [ 3 ] = 7 ; out . mIr [
4 ] = 6 ; out . mIr [ 5 ] = 5 ; out . mIr [ 6 ] = 4 ; out . mIr [ 7 ] = 7 ;
out . mIr [ 8 ] = 8 ; out . mIr [ 9 ] = 7 ; out . mIr [ 10 ] = 8 ; out . mIr
[ 11 ] = 4 ; out . mIr [ 12 ] = 5 ; out . mIr [ 13 ] = 6 ; out . mIr [ 14 ] =
7 ; out . mIr [ 15 ] = 8 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_duf ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_duf_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDUF_P ; out . mNumCol = 5ULL ; out . mNumRow =
10ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_dtf ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1
; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDTF_P ; out .
mNumCol = 1ULL ; out . mNumRow = 10ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_ddf (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_ddf_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDDF_P ; out . mNumCol = 0ULL ; out . mNumRow =
10ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_a ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t33 , NeDsMethodOutput * t34 ) { PmRealVector out ; (
void ) t33 ; out = t34 -> mA ; out . mX [ 0 ] = - 0.0 ; out . mX [ 1 ] =
0.025 ; out . mX [ 2 ] = - 0.0 ; out . mX [ 3 ] = 0.14285714285714285 ; out .
mX [ 4 ] = - 0.0 ; out . mX [ 5 ] = 0.083333333333333329 ; out . mX [ 6 ] = -
0.0 ; out . mX [ 7 ] = - 1.0 ; out . mX [ 8 ] = - 1.0 ; out . mX [ 9 ] =
1.000000025 ; out . mX [ 10 ] = - 1.0 ; out . mX [ 11 ] = 1.0000001428571428
; out . mX [ 12 ] = - 1.0 ; out . mX [ 13 ] = 1.0000000833333333 ; out . mX [
14 ] = - 1.0 ; out . mX [ 15 ] = - 1.0E-9 ; ( void ) sys ; ( void ) t34 ;
return 0 ; } static int32_T ds_a_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mA_P ; out . mNumCol = 10ULL ; out . mNumRow =
10ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 2 ; out . mJc [ 2 ] = 4 ; out
. mJc [ 3 ] = 6 ; out . mJc [ 4 ] = 8 ; out . mJc [ 5 ] = 10 ; out . mJc [ 6
] = 12 ; out . mJc [ 7 ] = 14 ; out . mJc [ 8 ] = 14 ; out . mJc [ 9 ] = 16 ;
out . mJc [ 10 ] = 16 ; out . mIr [ 0 ] = 0 ; out . mIr [ 1 ] = 9 ; out . mIr
[ 2 ] = 1 ; out . mIr [ 3 ] = 9 ; out . mIr [ 4 ] = 2 ; out . mIr [ 5 ] = 9 ;
out . mIr [ 6 ] = 3 ; out . mIr [ 7 ] = 9 ; out . mIr [ 8 ] = 0 ; out . mIr [
9 ] = 9 ; out . mIr [ 10 ] = 1 ; out . mIr [ 11 ] = 9 ; out . mIr [ 12 ] = 2
; out . mIr [ 13 ] = 9 ; out . mIr [ 14 ] = 3 ; out . mIr [ 15 ] = 9 ; ( void
) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_b ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_b_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mB_P ; out . mNumCol = 5ULL ; out . mNumRow = 10ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [
4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_c ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_c_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mC_P ; out . mNumCol
= 1ULL ; out . mNumRow = 10ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ;
( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_tduf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mTDUF_P ; out .
mNumCol = 5ULL ; out . mNumRow = 10ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 1 ; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ; out
. mJc [ 5 ] = 5 ; out . mIr [ 0 ] = 4 ; out . mIr [ 1 ] = 5 ; out . mIr [ 2 ]
= 6 ; out . mIr [ 3 ] = 7 ; out . mIr [ 4 ] = 8 ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_dwf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dwf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDWF_P ; out .
mNumCol = 0ULL ; out . mNumRow = 10ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_dpdxf ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1
; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dpdxf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDPDXF_P ; out .
mNumCol = 0ULL ; out . mNumRow = 16ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_vmf ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmBoolVector out ; ( void ) t1 ; out = t2 -> mVMF ; out . mX [ 0 ] = false ;
out . mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ;
out . mX [ 4 ] = true ; out . mX [ 5 ] = true ; out . mX [ 6 ] = true ; out .
mX [ 7 ] = true ; out . mX [ 8 ] = true ; out . mX [ 9 ] = false ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_slf ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 -> mSLF ; out . mX [ 0 ] =
false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] =
false ; out . mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] =
false ; out . mX [ 7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] =
false ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dnf (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dnf_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDNF_P ; out . mNumCol = 12ULL ; out . mNumRow =
10ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ]
= 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out .
mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_dnf_v_x ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmBoolVector out ; ( void ) t1 ; out = t2 -> mDNF_V_X ; out . mX [ 0 ] = true
; out . mX [ 1 ] = true ; out . mX [ 2 ] = true ; out . mX [ 3 ] = true ; out
. mX [ 4 ] = true ; out . mX [ 5 ] = true ; out . mX [ 6 ] = true ; out . mX
[ 7 ] = true ; out . mX [ 8 ] = true ; out . mX [ 9 ] = false ; ( void ) sys
; ( void ) t2 ; return 0 ; } static int32_T ds_slf0 ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmBoolVector out ; ( void ) t1 ; out = t2 -> mSLF0 ; out . mX [ 0 ] = false ;
out . mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ;
out . mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ;
out . mX [ 7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_vpf ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 -> mVPF ; out . mX [ 0 ] =
false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] =
false ; out . mX [ 4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] =
false ; out . mX [ 7 ] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] =
false ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_vsf (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 -> mVSF ;
out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ;
out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; out . mX [ 5 ] = false ;
out . mX [ 6 ] = false ; out . mX [ 7 ] = false ; out . mX [ 8 ] = false ;
out . mX [ 9 ] = false ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_freqs ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_ic ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mIC ; out . mX [ 0 ] = 0.0 ; out . mX [ 1 ] = 0.0 ;
out . mX [ 2 ] = 0.0 ; out . mX [ 3 ] = 0.0 ; out . mX [ 4 ] = 0.0 ; out . mX
[ 5 ] = 0.0 ; out . mX [ 6 ] = 0.0 ; out . mX [ 7 ] = 0.0 ; out . mX [ 8 ] =
0.0 ; out . mX [ 9 ] = 0.0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_icr ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_icr_im ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_icr_id ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_icr_il ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dxicr ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxicr_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXICR_P ; out .
mNumCol = 10ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out
. mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ]
= 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_ddicr ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_ddicr_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDDICR_P ; out .
mNumCol = 0ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_tduicr_p ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mTDUICR_P ; out . mNumCol =
5ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out
. mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ]
= 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_icrm (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_icrm_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mICRM_P ; out . mNumCol = 10ULL ; out . mNumRow =
0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ]
= 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out .
mJc [ 10 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxicrm ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dxicrm_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDXICRM_P ; out . mNumCol = 10ULL ; out . mNumRow =
0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ]
= 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out .
mJc [ 10 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddicrm ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_ddicrm_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDDICRM_P ; out . mNumCol = 0ULL ; out . mNumRow =
0ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_imin ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 ->
mIMIN ; out . mX [ 0 ] = - pmf_get_inf ( ) ; out . mX [ 1 ] = - pmf_get_inf (
) ; out . mX [ 2 ] = - pmf_get_inf ( ) ; out . mX [ 3 ] = - pmf_get_inf ( ) ;
out . mX [ 4 ] = - pmf_get_inf ( ) ; out . mX [ 5 ] = - pmf_get_inf ( ) ; out
. mX [ 6 ] = - pmf_get_inf ( ) ; out . mX [ 7 ] = - pmf_get_inf ( ) ; out .
mX [ 8 ] = - pmf_get_inf ( ) ; out . mX [ 9 ] = - pmf_get_inf ( ) ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_imax ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mIMAX ; out . mX [ 0 ] =
pmf_get_inf ( ) ; out . mX [ 1 ] = pmf_get_inf ( ) ; out . mX [ 2 ] =
pmf_get_inf ( ) ; out . mX [ 3 ] = pmf_get_inf ( ) ; out . mX [ 4 ] =
pmf_get_inf ( ) ; out . mX [ 5 ] = pmf_get_inf ( ) ; out . mX [ 6 ] =
pmf_get_inf ( ) ; out . mX [ 7 ] = pmf_get_inf ( ) ; out . mX [ 8 ] =
pmf_get_inf ( ) ; out . mX [ 9 ] = pmf_get_inf ( ) ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_dimin ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dimax ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_m ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mM ;
out . mX [ 0 ] = - 2.2E-6 ; out . mX [ 1 ] = - 2.2E-6 ; out . mX [ 2 ] = -
2.2E-6 ; out . mX [ 3 ] = - 1.0E-6 ; ( void ) sys ; ( void ) t2 ; return 0 ;
} static int32_T ds_m_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mM_P ; out . mNumCol = 10ULL ; out . mNumRow =
10ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 2 ; out
. mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ; out . mJc [ 5 ] = 4 ; out . mJc [ 6 ]
= 4 ; out . mJc [ 7 ] = 4 ; out . mJc [ 8 ] = 4 ; out . mJc [ 9 ] = 4 ; out .
mJc [ 10 ] = 4 ; out . mIr [ 0 ] = 0 ; out . mIr [ 1 ] = 1 ; out . mIr [ 2 ]
= 2 ; out . mIr [ 3 ] = 3 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_dxm ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_dxm_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDXM_P ; out . mNumCol = 10ULL ; out . mNumRow =
4ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ]
= 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out .
mJc [ 10 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddm ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_ddm_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDDM_P ; out . mNumCol = 0ULL ; out . mNumRow =
4ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_dum ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_dum_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDUM_P ; out . mNumCol = 5ULL ; out . mNumRow =
4ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_dtm ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1
; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtm_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDTM_P ; out .
mNumCol = 1ULL ; out . mNumRow = 4ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dpm ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dpm_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDPM_P ; out . mNumCol = 0ULL ; out . mNumRow = 4ULL ; out . mJc [ 0 ] = 0 ;
( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_vmm ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 -> mVMM ; out . mX [ 0 ] =
false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] =
false ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_mode (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmIntVector out ; real_T U_idx_0 ; real_T U_idx_1 ;
real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; U_idx_0 = t1 -> mU . mX [
0 ] ; U_idx_1 = t1 -> mU . mX [ 1 ] ; U_idx_2 = t1 -> mU . mX [ 2 ] ; U_idx_3
= t1 -> mU . mX [ 3 ] ; U_idx_4 = t1 -> mU . mX [ 4 ] ; out = t2 -> mMODE ;
out . mX [ 0 ] = ( int32_T ) ( U_idx_0 > 0.1 ) ; out . mX [ 1 ] = ( int32_T )
( U_idx_1 > 0.1 ) ; out . mX [ 2 ] = ( int32_T ) ( U_idx_2 > 0.1 ) ; out . mX
[ 3 ] = ( int32_T ) ( U_idx_3 > 0.5 ) ; out . mX [ 4 ] = ( int32_T ) (
U_idx_4 > 0.5 ) ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_obs_exp ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; real_T t0 [ 103 ] ; int32_T b ;
( void ) t1 ; out = t2 -> mOBS_EXP ; for ( b = 0 ; b < 103 ; b ++ ) { t0 [ b
] = 0.0 ; } for ( b = 0 ; b < 103 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_l ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dp_i ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dp_j ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_r ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_qx ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_qu ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qt ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_q1 ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_qx_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mQX_P ; out . mNumCol = 10ULL ; out . mNumRow = 10ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [
4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ;
out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qu_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mQU_P ; out .
mNumCol = 5ULL ; out . mNumRow = 10ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out
. mJc [ 5 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_qt_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mQT_P ; out . mNumCol = 1ULL ; out . mNumRow = 10ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_q1_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2
-> mQ1_P ; out . mNumCol = 1ULL ; out . mNumRow = 10ULL ; out . mJc [ 0 ] = 0
; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_var_tol ( const NeDynamicSystem * sys , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 ->
mVAR_TOL ; out . mX [ 0 ] = 1.0E-9 ; out . mX [ 1 ] = 1.0E-9 ; out . mX [ 2 ]
= 1.0E-9 ; out . mX [ 3 ] = 1.0E-9 ; out . mX [ 4 ] = 1.0E-9 ; out . mX [ 5 ]
= 1.0E-9 ; out . mX [ 6 ] = 1.0E-9 ; out . mX [ 7 ] = 1.0E-9 ; out . mX [ 8 ]
= 1.0E-9 ; out . mX [ 9 ] = 1.0E-9 ; ( void ) sys ; ( void ) t2 ; return 0 ;
} static int32_T ds_eq_tol ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mEQ_TOL ; out . mX [ 0 ] = 1.0E-9 ; out . mX [ 1 ] =
1.0E-9 ; out . mX [ 2 ] = 1.0E-9 ; out . mX [ 3 ] = 1.0E-9 ; out . mX [ 4 ] =
1.0E-9 ; out . mX [ 5 ] = 1.0E-9 ; out . mX [ 6 ] = 1.0E-9 ; out . mX [ 7 ] =
1.0E-9 ; out . mX [ 8 ] = 1.0E-9 ; out . mX [ 9 ] = 1.0E-9 ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_lv ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out
; ( void ) t1 ; out = t2 -> mLV ; out . mX [ 0 ] = false ; out . mX [ 1 ] =
false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ] =
false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] =
false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_slv ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; ( void ) t1 ; out = t2 -> mSLV ; out . mX [ 0 ] = false ; out . mX [ 1
] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ]
= false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] =
false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_nldv ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; ( void ) t1 ; out = t2 -> mNLDV ; out . mX [ 0 ] = false ; out . mX [ 1
] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ]
= false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] =
false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_sclv ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; ( void ) t1 ; out = t2 -> mSCLV ; out . mX [ 0 ] = false ; out . mX [ 1
] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ]
= false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] =
false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_y ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t3 , NeDsMethodOutput * t4 ) { PmRealVector out
; real_T X_idx_0 ; real_T X_idx_1 ; real_T X_idx_2 ; real_T X_idx_4 ; real_T
X_idx_5 ; real_T X_idx_6 ; X_idx_0 = t3 -> mX . mX [ 0 ] ; X_idx_1 = t3 -> mX
. mX [ 1 ] ; X_idx_2 = t3 -> mX . mX [ 2 ] ; X_idx_4 = t3 -> mX . mX [ 4 ] ;
X_idx_5 = t3 -> mX . mX [ 5 ] ; X_idx_6 = t3 -> mX . mX [ 6 ] ; out = t4 ->
mY ; out . mX [ 0 ] = X_idx_5 * 1.0E-6 + X_idx_1 ; out . mX [ 1 ] = X_idx_4 *
1.0E-6 + X_idx_0 ; out . mX [ 2 ] = X_idx_6 * 1.0E-6 + X_idx_2 ; ( void ) sys
; ( void ) t4 ; return 0 ; } static int32_T ds_dxy ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t3 , NeDsMethodOutput * t4 ) {
PmRealVector out ; ( void ) t3 ; out = t4 -> mDXY ; out . mX [ 0 ] = 1.0 ;
out . mX [ 1 ] = 1.0 ; out . mX [ 2 ] = 1.0 ; out . mX [ 3 ] = 1.0E-6 ; out .
mX [ 4 ] = 1.0E-6 ; out . mX [ 5 ] = 1.0E-6 ; ( void ) sys ; ( void ) t4 ;
return 0 ; } static int32_T ds_dxy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDXY_P ; out . mNumCol = 10ULL ; out . mNumRow =
3ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 2 ; out
. mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 3 ; out . mJc [ 5 ] = 4 ; out . mJc [ 6 ]
= 5 ; out . mJc [ 7 ] = 6 ; out . mJc [ 8 ] = 6 ; out . mJc [ 9 ] = 6 ; out .
mJc [ 10 ] = 6 ; out . mIr [ 0 ] = 1 ; out . mIr [ 1 ] = 0 ; out . mIr [ 2 ]
= 2 ; out . mIr [ 3 ] = 1 ; out . mIr [ 4 ] = 0 ; out . mIr [ 5 ] = 2 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_duy ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_duy_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUY_P ; out . mNumCol = 5ULL ; out . mNumRow = 3ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [
4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_mduy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mMDUY_P ; out . mNumCol = 5ULL ; out . mNumRow =
3ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_mdxy_p ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mMDXY_P ; out . mNumCol =
10ULL ; out . mNumRow = 3ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ;
out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [
5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ;
out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_tduy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mTDUY_P ; out . mNumCol = 5ULL ; out . mNumRow =
3ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_tdxy_p ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mTDXY_P ; out . mNumCol =
10ULL ; out . mNumRow = 3ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ;
out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 3 ; out . mJc [
5 ] = 4 ; out . mJc [ 6 ] = 5 ; out . mJc [ 7 ] = 6 ; out . mJc [ 8 ] = 6 ;
out . mJc [ 9 ] = 6 ; out . mJc [ 10 ] = 6 ; out . mIr [ 0 ] = 1 ; out . mIr
[ 1 ] = 0 ; out . mIr [ 2 ] = 2 ; out . mIr [ 3 ] = 1 ; out . mIr [ 4 ] = 0 ;
out . mIr [ 5 ] = 2 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_dty ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_dty_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDTY_P ; out . mNumCol = 1ULL ; out . mNumRow =
3ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_zc ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ;
real_T U_idx_0 ; real_T U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T
U_idx_4 ; U_idx_0 = t1 -> mU . mX [ 0 ] ; U_idx_1 = t1 -> mU . mX [ 1 ] ;
U_idx_2 = t1 -> mU . mX [ 2 ] ; U_idx_3 = t1 -> mU . mX [ 3 ] ; U_idx_4 = t1
-> mU . mX [ 4 ] ; out = t2 -> mZC ; out . mX [ 0 ] = U_idx_0 - 0.1 ; out .
mX [ 1 ] = U_idx_1 - 0.1 ; out . mX [ 2 ] = U_idx_2 - 0.1 ; out . mX [ 3 ] =
U_idx_3 - 0.5 ; out . mX [ 4 ] = U_idx_4 - 0.5 ; ( void ) sys ; ( void ) t2 ;
return 0 ; }
