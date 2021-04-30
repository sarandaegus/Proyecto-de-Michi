/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Sergio/Documents/XILINX/Verilog/marzo_proyecto/piston.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static const char *ng7 = "ERROR: Invalid Piston State, both AP & AN";



static void Initial_14_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;

LAB0:    xsi_set_current_line(14, ng0);

LAB2:    xsi_set_current_line(15, ng0);
    t1 = (t0 + 608);
    t2 = *((char **)t1);
    t1 = (t0 + 1880);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 1);
    xsi_set_current_line(16, ng0);
    t1 = (t0 + 608);
    t2 = *((char **)t1);
    memset(t3, 0, 8);
    t1 = (t3 + 4);
    t4 = (t2 + 4);
    memcpy(t3, t2, 8);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t1);
    t8 = (t6 | t7);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t9 & 4294967295U);
    t10 = *((unsigned int *)t1);
    *((unsigned int *)t1) = (t10 & 4294967295U);
    t11 = (t0 + 2040);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);

LAB1:    return;
}

static void Always_19_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 3528);
    *((int *)t2) = 1;
    t3 = (t0 + 3240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);
    t5 = (t0 + 1480U);
    t6 = *((char **)t5);
    t5 = (t0 + 1320U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t6, 1);

LAB5:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(21, ng0);

LAB15:    xsi_set_current_line(22, ng0);
    t9 = (t0 + 1880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1880);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2040);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    goto LAB14;

LAB8:    xsi_set_current_line(25, ng0);

LAB16:    xsi_set_current_line(26, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 5044);
    memcpy(t5, t3, 8);
    t6 = (t0 + 3016);
    xsi_process_wait(t6, 100000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB10:    xsi_set_current_line(29, ng0);

LAB18:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 1880);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5300);
    memcpy(t3, t2, 8);
    t5 = (t0 + 3016);
    xsi_process_wait(t5, 100000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB12:    xsi_set_current_line(33, ng0);

LAB20:    xsi_set_current_line(34, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    goto LAB14;

LAB17:    t7 = (t0 + 5044);
    t9 = (t0 + 1880);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB14;

LAB19:    t6 = (t0 + 5300);
    t7 = (t0 + 2040);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB14;

}


extern void work_m_00000000002255734174_0039219758_init()
{
	static char *pe[] = {(void *)Initial_14_0,(void *)Always_19_1};
	xsi_register_didat("work_m_00000000002255734174_0039219758", "isim/tb_isim_beh.exe.sim/work/m_00000000002255734174_0039219758.didat");
	xsi_register_executes(pe);
}
