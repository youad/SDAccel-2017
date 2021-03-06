// AUTOGENERATED by Xilinx OpenCL - do not modify

#line 1 "krnl_write_compute_unit"
#include "/home/yanghui/Xilinx/SDx/2017.2/Vivado_HLS/common/technology/autopilot/opencl/libspir_types.h"

#include "/home/yanghui/Xilinx/SDx/2017.2/Vivado_HLS/common/technology/autopilot/etc/autopilot_ssdm_op.h"
#include "/home/yanghui/Xilinx/SDx/2017.2/Vivado_HLS/common/technology/autopilot/ap_cint.h"
#define XCL_SIZE_T __spir_size_t

/* KernelID: A, Kernel Name: krnl_write */

class aesl_keep_name_class;
typedef struct {
  unsigned int x;
  unsigned int y;
  unsigned int z;
  friend class ::aesl_keep_name_class;
} three_tuple_t;

typedef struct {
  XCL_SIZE_T c;
  unsigned int n_elements;
  XCL_SIZE_T __xcl_gv_pipe_c;
  friend class ::aesl_keep_name_class;
} krnl_write_args_t;

class aesl_keep_name_class {
public:
  inline __attribute__((always_inline)) static void
  aesl_keep_name_0_args(krnl_write_args_t* args) {
    _ssdm_op_SpecExt("member_name", "c", &args->c);
    _ssdm_op_SpecExt("member_name", "n_elements", &args->n_elements);
    _ssdm_op_SpecExt("member_name", "__xcl_gv_pipe_c", &args->__xcl_gv_pipe_c);
  }
};

extern "C" {

extern void __SPIR_kernelA(...);
void __AESL_call_work_itemA(...);

void
__AESL_call_work_item_NA(volatile __attribute__((address_space(16776960))) unsigned int* gmem,   volatile __attribute__((address_space(16776963))) unsigned int* pipe_c,   unsigned int pipe_c_count, __spir_rt_info_t *rt_info, krnl_write_args_t *args)
{
  volatile __attribute__((address_space(16776960))) unsigned int *arg_c = (gmem + ((XCL_SIZE_T)args->c >> 2));
  unsigned int arg_n_elements = args->n_elements;
  __SPIR_kernelA(rt_info, arg_c, arg_n_elements, pipe_c, pipe_c_count);
  return;
}

void
__AESL_work_groupA(__attribute__((address_space(16776960))) volatile unsigned int* gmem, __attribute__((address_space(16776963))) unsigned int* pipe_c, __spir_uint_t pipe_c_count, krnl_write_args_t *args)
{
#define RT_INFO_REQD_LOCAL_SIZE_X 1
#define RT_INFO_REQD_LOCAL_SIZE_Y 1
#define RT_INFO_REQD_LOCAL_SIZE_Z 1
::aesl_keep_name_class::aesl_keep_name_0_args(args);
_ssdm_op_SpecInterface(pipe_c, "axis", 0, 0, "", 0, 0, "", "", "", 0, 0, 0, 0, "", "");
_ssdm_op_SpecInterface(gmem, "m_axi", 0, 0, "",128, 0, "", "", "", 16, 16, 16, 16, "", "");
_ssdm_op_SpecInterface(0, "s_axilite", 0, 0, "", 0, 0, "control", "", "", 0, 0, 0, 0, "", "");
_ssdm_op_SpecInterface(args, "s_axilite", 0, 0, "", 0, 0, "control", "", "", 0, 0, 0, 0, "", "");
#define CALL_WORK_ITEM_FUNC __AESL_call_work_itemA
#include "aesl_gen_cu_body.inc"
CALL_WORK_ITEM_FUNC(gmem, pipe_c, pipe_c_count, &rt_info, args);
#undef  CALL_WORK_ITEM_FUNC
return;
#undef RT_INFO_REQD_LOCAL_SIZE_X
#undef RT_INFO_REQD_LOCAL_SIZE_Y
#undef RT_INFO_REQD_LOCAL_SIZE_Z
}

} // extern C
