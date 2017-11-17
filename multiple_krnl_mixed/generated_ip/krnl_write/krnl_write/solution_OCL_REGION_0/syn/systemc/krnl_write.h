// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _krnl_write_HH_
#define _krnl_write_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "krnl_write_control_s_axi.h"
#include "krnl_write_gmem_m_axi.h"

namespace ap_rtl {

template<unsigned int C_M_AXI_GMEM_ADDR_WIDTH = 64,
         unsigned int C_M_AXI_GMEM_ID_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_DATA_WIDTH = 32,
         unsigned int C_M_AXI_GMEM_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_BUSER_WIDTH = 1,
         unsigned int C_S_AXI_CONTROL_ADDR_WIDTH = 6,
         unsigned int C_S_AXI_CONTROL_DATA_WIDTH = 32>
struct krnl_write : public sc_module {
    // Port declarations 69
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_out< sc_logic > m_axi_gmem_AWVALID;
    sc_in< sc_logic > m_axi_gmem_AWREADY;
    sc_out< sc_uint<C_M_AXI_GMEM_ADDR_WIDTH> > m_axi_gmem_AWADDR;
    sc_out< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_AWID;
    sc_out< sc_lv<8> > m_axi_gmem_AWLEN;
    sc_out< sc_lv<3> > m_axi_gmem_AWSIZE;
    sc_out< sc_lv<2> > m_axi_gmem_AWBURST;
    sc_out< sc_lv<2> > m_axi_gmem_AWLOCK;
    sc_out< sc_lv<4> > m_axi_gmem_AWCACHE;
    sc_out< sc_lv<3> > m_axi_gmem_AWPROT;
    sc_out< sc_lv<4> > m_axi_gmem_AWQOS;
    sc_out< sc_lv<4> > m_axi_gmem_AWREGION;
    sc_out< sc_uint<C_M_AXI_GMEM_AWUSER_WIDTH> > m_axi_gmem_AWUSER;
    sc_out< sc_logic > m_axi_gmem_WVALID;
    sc_in< sc_logic > m_axi_gmem_WREADY;
    sc_out< sc_uint<C_M_AXI_GMEM_DATA_WIDTH> > m_axi_gmem_WDATA;
    sc_out< sc_uint<C_M_AXI_GMEM_DATA_WIDTH/8> > m_axi_gmem_WSTRB;
    sc_out< sc_logic > m_axi_gmem_WLAST;
    sc_out< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_WID;
    sc_out< sc_uint<C_M_AXI_GMEM_WUSER_WIDTH> > m_axi_gmem_WUSER;
    sc_out< sc_logic > m_axi_gmem_ARVALID;
    sc_in< sc_logic > m_axi_gmem_ARREADY;
    sc_out< sc_uint<C_M_AXI_GMEM_ADDR_WIDTH> > m_axi_gmem_ARADDR;
    sc_out< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_ARID;
    sc_out< sc_lv<8> > m_axi_gmem_ARLEN;
    sc_out< sc_lv<3> > m_axi_gmem_ARSIZE;
    sc_out< sc_lv<2> > m_axi_gmem_ARBURST;
    sc_out< sc_lv<2> > m_axi_gmem_ARLOCK;
    sc_out< sc_lv<4> > m_axi_gmem_ARCACHE;
    sc_out< sc_lv<3> > m_axi_gmem_ARPROT;
    sc_out< sc_lv<4> > m_axi_gmem_ARQOS;
    sc_out< sc_lv<4> > m_axi_gmem_ARREGION;
    sc_out< sc_uint<C_M_AXI_GMEM_ARUSER_WIDTH> > m_axi_gmem_ARUSER;
    sc_in< sc_logic > m_axi_gmem_RVALID;
    sc_out< sc_logic > m_axi_gmem_RREADY;
    sc_in< sc_uint<C_M_AXI_GMEM_DATA_WIDTH> > m_axi_gmem_RDATA;
    sc_in< sc_logic > m_axi_gmem_RLAST;
    sc_in< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_RID;
    sc_in< sc_uint<C_M_AXI_GMEM_RUSER_WIDTH> > m_axi_gmem_RUSER;
    sc_in< sc_lv<2> > m_axi_gmem_RRESP;
    sc_in< sc_logic > m_axi_gmem_BVALID;
    sc_out< sc_logic > m_axi_gmem_BREADY;
    sc_in< sc_lv<2> > m_axi_gmem_BRESP;
    sc_in< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_BID;
    sc_in< sc_uint<C_M_AXI_GMEM_BUSER_WIDTH> > m_axi_gmem_BUSER;
    sc_in< sc_lv<32> > pipe_c_TDATA;
    sc_in< sc_logic > pipe_c_TVALID;
    sc_out< sc_logic > pipe_c_TREADY;
    sc_in< sc_lv<32> > pipe_c_count;
    sc_in< sc_logic > s_axi_control_AWVALID;
    sc_out< sc_logic > s_axi_control_AWREADY;
    sc_in< sc_uint<C_S_AXI_CONTROL_ADDR_WIDTH> > s_axi_control_AWADDR;
    sc_in< sc_logic > s_axi_control_WVALID;
    sc_out< sc_logic > s_axi_control_WREADY;
    sc_in< sc_uint<C_S_AXI_CONTROL_DATA_WIDTH> > s_axi_control_WDATA;
    sc_in< sc_uint<C_S_AXI_CONTROL_DATA_WIDTH/8> > s_axi_control_WSTRB;
    sc_in< sc_logic > s_axi_control_ARVALID;
    sc_out< sc_logic > s_axi_control_ARREADY;
    sc_in< sc_uint<C_S_AXI_CONTROL_ADDR_WIDTH> > s_axi_control_ARADDR;
    sc_out< sc_logic > s_axi_control_RVALID;
    sc_in< sc_logic > s_axi_control_RREADY;
    sc_out< sc_uint<C_S_AXI_CONTROL_DATA_WIDTH> > s_axi_control_RDATA;
    sc_out< sc_lv<2> > s_axi_control_RRESP;
    sc_out< sc_logic > s_axi_control_BVALID;
    sc_in< sc_logic > s_axi_control_BREADY;
    sc_out< sc_lv<2> > s_axi_control_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<32> > ap_var_for_const4;
    sc_signal< sc_lv<1> > ap_var_for_const3;
    sc_signal< sc_lv<3> > ap_var_for_const5;
    sc_signal< sc_lv<2> > ap_var_for_const6;
    sc_signal< sc_lv<4> > ap_var_for_const7;
    sc_signal< sc_lv<4> > ap_var_for_const8;
    sc_signal< sc_lv<64> > ap_var_for_const2;


    // Module declarations
    krnl_write(sc_module_name name);
    SC_HAS_PROCESS(krnl_write);

    ~krnl_write();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    krnl_write_control_s_axi<C_S_AXI_CONTROL_ADDR_WIDTH,C_S_AXI_CONTROL_DATA_WIDTH>* krnl_write_control_s_axi_U;
    krnl_write_gmem_m_axi<32,64,133,16,16,16,16,C_M_AXI_GMEM_ID_WIDTH,C_M_AXI_GMEM_ADDR_WIDTH,C_M_AXI_GMEM_DATA_WIDTH,C_M_AXI_GMEM_AWUSER_WIDTH,C_M_AXI_GMEM_ARUSER_WIDTH,C_M_AXI_GMEM_WUSER_WIDTH,C_M_AXI_GMEM_RUSER_WIDTH,C_M_AXI_GMEM_BUSER_WIDTH,C_M_AXI_GMEM_TARGET_ADDR,C_M_AXI_GMEM_USER_VALUE,C_M_AXI_GMEM_PROT_VALUE,C_M_AXI_GMEM_CACHE_VALUE>* krnl_write_gmem_m_axi_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<135> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<64> > c;
    sc_signal< sc_lv<32> > n_elements;
    sc_signal< sc_lv<64> > p_xcl_gv_pipe_c;
    sc_signal< sc_logic > gmem_blk_n_AW;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > gmem_blk_n_W;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > tmp_2_reg_212;
    sc_signal< sc_logic > gmem_blk_n_B;
    sc_signal< sc_logic > ap_CS_fsm_state136;
    sc_signal< sc_logic > pipe_c_TDATA_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > tmp_2_fu_157_p2;
    sc_signal< sc_lv<1> > icmp_fu_178_p2;
    sc_signal< sc_lv<1> > tmp_4_fu_184_p2;
    sc_signal< sc_logic > gmem_AWVALID;
    sc_signal< sc_logic > gmem_AWREADY;
    sc_signal< sc_logic > gmem_WVALID;
    sc_signal< sc_logic > gmem_WREADY;
    sc_signal< sc_logic > gmem_ARREADY;
    sc_signal< sc_logic > gmem_RVALID;
    sc_signal< sc_lv<32> > gmem_RDATA;
    sc_signal< sc_logic > gmem_RLAST;
    sc_signal< sc_lv<1> > gmem_RID;
    sc_signal< sc_lv<1> > gmem_RUSER;
    sc_signal< sc_lv<2> > gmem_RRESP;
    sc_signal< sc_logic > gmem_BVALID;
    sc_signal< sc_logic > gmem_BREADY;
    sc_signal< sc_lv<2> > gmem_BRESP;
    sc_signal< sc_lv<1> > gmem_BID;
    sc_signal< sc_lv<1> > gmem_BUSER;
    sc_signal< sc_lv<31> > i_0_reg2mem5_0_i_i_reg_117;
    sc_signal< sc_lv<32> > arg_n_elements_reg_200;
    sc_signal< sc_lv<64> > gmem_addr_reg_206;
    sc_signal< bool > ap_predicate_op165_read_state3;
    sc_signal< bool > ap_predicate_op170_read_state3;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< sc_logic > ap_sig_ioackin_gmem_WREADY;
    sc_signal< bool > ap_block_state4_io;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<31> > p_reg2mem_0_i_i_fu_162_p2;
    sc_signal< sc_logic > ap_sig_ioackin_gmem_AWREADY;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_lv<64> > tmp_6_fu_143_p1;
    sc_signal< sc_logic > ap_reg_ioackin_gmem_AWREADY;
    sc_signal< sc_logic > ap_reg_ioackin_gmem_WREADY;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > p_0_fu_74;
    sc_signal< sc_lv<62> > tmp_fu_133_p4;
    sc_signal< sc_lv<32> > i_0_reg2mem5_0_i_i_cast_fu_153_p1;
    sc_signal< sc_lv<31> > tmp_1_fu_168_p4;
    sc_signal< sc_lv<135> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< bool > ap_condition_1309;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<135> ap_ST_fsm_state1;
    static const sc_lv<135> ap_ST_fsm_state2;
    static const sc_lv<135> ap_ST_fsm_pp0_stage0;
    static const sc_lv<135> ap_ST_fsm_state5;
    static const sc_lv<135> ap_ST_fsm_state6;
    static const sc_lv<135> ap_ST_fsm_state7;
    static const sc_lv<135> ap_ST_fsm_state8;
    static const sc_lv<135> ap_ST_fsm_state9;
    static const sc_lv<135> ap_ST_fsm_state10;
    static const sc_lv<135> ap_ST_fsm_state11;
    static const sc_lv<135> ap_ST_fsm_state12;
    static const sc_lv<135> ap_ST_fsm_state13;
    static const sc_lv<135> ap_ST_fsm_state14;
    static const sc_lv<135> ap_ST_fsm_state15;
    static const sc_lv<135> ap_ST_fsm_state16;
    static const sc_lv<135> ap_ST_fsm_state17;
    static const sc_lv<135> ap_ST_fsm_state18;
    static const sc_lv<135> ap_ST_fsm_state19;
    static const sc_lv<135> ap_ST_fsm_state20;
    static const sc_lv<135> ap_ST_fsm_state21;
    static const sc_lv<135> ap_ST_fsm_state22;
    static const sc_lv<135> ap_ST_fsm_state23;
    static const sc_lv<135> ap_ST_fsm_state24;
    static const sc_lv<135> ap_ST_fsm_state25;
    static const sc_lv<135> ap_ST_fsm_state26;
    static const sc_lv<135> ap_ST_fsm_state27;
    static const sc_lv<135> ap_ST_fsm_state28;
    static const sc_lv<135> ap_ST_fsm_state29;
    static const sc_lv<135> ap_ST_fsm_state30;
    static const sc_lv<135> ap_ST_fsm_state31;
    static const sc_lv<135> ap_ST_fsm_state32;
    static const sc_lv<135> ap_ST_fsm_state33;
    static const sc_lv<135> ap_ST_fsm_state34;
    static const sc_lv<135> ap_ST_fsm_state35;
    static const sc_lv<135> ap_ST_fsm_state36;
    static const sc_lv<135> ap_ST_fsm_state37;
    static const sc_lv<135> ap_ST_fsm_state38;
    static const sc_lv<135> ap_ST_fsm_state39;
    static const sc_lv<135> ap_ST_fsm_state40;
    static const sc_lv<135> ap_ST_fsm_state41;
    static const sc_lv<135> ap_ST_fsm_state42;
    static const sc_lv<135> ap_ST_fsm_state43;
    static const sc_lv<135> ap_ST_fsm_state44;
    static const sc_lv<135> ap_ST_fsm_state45;
    static const sc_lv<135> ap_ST_fsm_state46;
    static const sc_lv<135> ap_ST_fsm_state47;
    static const sc_lv<135> ap_ST_fsm_state48;
    static const sc_lv<135> ap_ST_fsm_state49;
    static const sc_lv<135> ap_ST_fsm_state50;
    static const sc_lv<135> ap_ST_fsm_state51;
    static const sc_lv<135> ap_ST_fsm_state52;
    static const sc_lv<135> ap_ST_fsm_state53;
    static const sc_lv<135> ap_ST_fsm_state54;
    static const sc_lv<135> ap_ST_fsm_state55;
    static const sc_lv<135> ap_ST_fsm_state56;
    static const sc_lv<135> ap_ST_fsm_state57;
    static const sc_lv<135> ap_ST_fsm_state58;
    static const sc_lv<135> ap_ST_fsm_state59;
    static const sc_lv<135> ap_ST_fsm_state60;
    static const sc_lv<135> ap_ST_fsm_state61;
    static const sc_lv<135> ap_ST_fsm_state62;
    static const sc_lv<135> ap_ST_fsm_state63;
    static const sc_lv<135> ap_ST_fsm_state64;
    static const sc_lv<135> ap_ST_fsm_state65;
    static const sc_lv<135> ap_ST_fsm_state66;
    static const sc_lv<135> ap_ST_fsm_state67;
    static const sc_lv<135> ap_ST_fsm_state68;
    static const sc_lv<135> ap_ST_fsm_state69;
    static const sc_lv<135> ap_ST_fsm_state70;
    static const sc_lv<135> ap_ST_fsm_state71;
    static const sc_lv<135> ap_ST_fsm_state72;
    static const sc_lv<135> ap_ST_fsm_state73;
    static const sc_lv<135> ap_ST_fsm_state74;
    static const sc_lv<135> ap_ST_fsm_state75;
    static const sc_lv<135> ap_ST_fsm_state76;
    static const sc_lv<135> ap_ST_fsm_state77;
    static const sc_lv<135> ap_ST_fsm_state78;
    static const sc_lv<135> ap_ST_fsm_state79;
    static const sc_lv<135> ap_ST_fsm_state80;
    static const sc_lv<135> ap_ST_fsm_state81;
    static const sc_lv<135> ap_ST_fsm_state82;
    static const sc_lv<135> ap_ST_fsm_state83;
    static const sc_lv<135> ap_ST_fsm_state84;
    static const sc_lv<135> ap_ST_fsm_state85;
    static const sc_lv<135> ap_ST_fsm_state86;
    static const sc_lv<135> ap_ST_fsm_state87;
    static const sc_lv<135> ap_ST_fsm_state88;
    static const sc_lv<135> ap_ST_fsm_state89;
    static const sc_lv<135> ap_ST_fsm_state90;
    static const sc_lv<135> ap_ST_fsm_state91;
    static const sc_lv<135> ap_ST_fsm_state92;
    static const sc_lv<135> ap_ST_fsm_state93;
    static const sc_lv<135> ap_ST_fsm_state94;
    static const sc_lv<135> ap_ST_fsm_state95;
    static const sc_lv<135> ap_ST_fsm_state96;
    static const sc_lv<135> ap_ST_fsm_state97;
    static const sc_lv<135> ap_ST_fsm_state98;
    static const sc_lv<135> ap_ST_fsm_state99;
    static const sc_lv<135> ap_ST_fsm_state100;
    static const sc_lv<135> ap_ST_fsm_state101;
    static const sc_lv<135> ap_ST_fsm_state102;
    static const sc_lv<135> ap_ST_fsm_state103;
    static const sc_lv<135> ap_ST_fsm_state104;
    static const sc_lv<135> ap_ST_fsm_state105;
    static const sc_lv<135> ap_ST_fsm_state106;
    static const sc_lv<135> ap_ST_fsm_state107;
    static const sc_lv<135> ap_ST_fsm_state108;
    static const sc_lv<135> ap_ST_fsm_state109;
    static const sc_lv<135> ap_ST_fsm_state110;
    static const sc_lv<135> ap_ST_fsm_state111;
    static const sc_lv<135> ap_ST_fsm_state112;
    static const sc_lv<135> ap_ST_fsm_state113;
    static const sc_lv<135> ap_ST_fsm_state114;
    static const sc_lv<135> ap_ST_fsm_state115;
    static const sc_lv<135> ap_ST_fsm_state116;
    static const sc_lv<135> ap_ST_fsm_state117;
    static const sc_lv<135> ap_ST_fsm_state118;
    static const sc_lv<135> ap_ST_fsm_state119;
    static const sc_lv<135> ap_ST_fsm_state120;
    static const sc_lv<135> ap_ST_fsm_state121;
    static const sc_lv<135> ap_ST_fsm_state122;
    static const sc_lv<135> ap_ST_fsm_state123;
    static const sc_lv<135> ap_ST_fsm_state124;
    static const sc_lv<135> ap_ST_fsm_state125;
    static const sc_lv<135> ap_ST_fsm_state126;
    static const sc_lv<135> ap_ST_fsm_state127;
    static const sc_lv<135> ap_ST_fsm_state128;
    static const sc_lv<135> ap_ST_fsm_state129;
    static const sc_lv<135> ap_ST_fsm_state130;
    static const sc_lv<135> ap_ST_fsm_state131;
    static const sc_lv<135> ap_ST_fsm_state132;
    static const sc_lv<135> ap_ST_fsm_state133;
    static const sc_lv<135> ap_ST_fsm_state134;
    static const sc_lv<135> ap_ST_fsm_state135;
    static const sc_lv<135> ap_ST_fsm_state136;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_86;
    static const sc_lv<1> ap_const_lv1_0;
    static const int C_S_AXI_DATA_WIDTH;
    static const int C_M_AXI_GMEM_TARGET_ADDR;
    static const int C_M_AXI_GMEM_USER_VALUE;
    static const int C_M_AXI_GMEM_PROT_VALUE;
    static const int C_M_AXI_GMEM_CACHE_VALUE;
    static const int C_M_AXI_DATA_WIDTH;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<64> ap_const_lv64_0;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const6();
    void thread_ap_var_for_const7();
    void thread_ap_var_for_const8();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state136();
    void thread_ap_CS_fsm_state2();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_io();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_condition_1309();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_predicate_op165_read_state3();
    void thread_ap_predicate_op170_read_state3();
    void thread_ap_ready();
    void thread_ap_sig_ioackin_gmem_AWREADY();
    void thread_ap_sig_ioackin_gmem_WREADY();
    void thread_gmem_AWVALID();
    void thread_gmem_BREADY();
    void thread_gmem_WVALID();
    void thread_gmem_blk_n_AW();
    void thread_gmem_blk_n_B();
    void thread_gmem_blk_n_W();
    void thread_i_0_reg2mem5_0_i_i_cast_fu_153_p1();
    void thread_icmp_fu_178_p2();
    void thread_p_reg2mem_0_i_i_fu_162_p2();
    void thread_pipe_c_TDATA_blk_n();
    void thread_pipe_c_TREADY();
    void thread_tmp_1_fu_168_p4();
    void thread_tmp_2_fu_157_p2();
    void thread_tmp_4_fu_184_p2();
    void thread_tmp_6_fu_143_p1();
    void thread_tmp_fu_133_p4();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif