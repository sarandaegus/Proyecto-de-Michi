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
static const char *ng0 = "C:/Users/Sergio/Documents/XILINX/Verilog/marzo_proyecto/Testeov2.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {50, 0};
static int ng6[] = {20, 0};
static int ng7[] = {100, 0};
static const char *ng8 = "seed : %h";
static int ng9[] = {10, 0};
static const char *ng10 = "Cycle Completed";
static const char *ng11 = "Test Finished";



static int sp_setup(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1392);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(155, ng0);

LAB5:    xsi_set_current_line(157, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7448);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 8088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 8728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(162, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 8888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 9048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 8568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_reset(char *t1, char *t2)
{
    char t7[8];
    char t10[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1824);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(174, ng0);

LAB5:    xsi_set_current_line(175, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t1 + 7288);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 10488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 10648);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 10808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(179, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 10968);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t4 = (t1 + 6488);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t7) = xsi_vlog_rtl_dist_uniform(1, t6, -2147483648, 2147483647);
    t8 = (t7 + 4);
    *((int *)t8) = 0;
    t9 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_signed_mod(t10, 32, t7, 32, t9, 32);
    t11 = (t1 + 6808);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 32);
    xsi_set_current_line(181, ng0);
    t4 = (t1 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t9 = (t1 + 18088);
    *((int *)t9) = t15;

LAB6:    t11 = (t1 + 18088);
    if (*((int *)t11) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(182, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(183, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 10488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 10648);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 10808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(186, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 10968);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB10;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    xsi_set_current_line(181, ng0);
    t16 = (t2 + 88U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    xsi_wp_set_status(t18, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    t4 = (t1 + 18088);
    t15 = *((int *)t4);
    *((int *)t4) = (t15 - 1);
    goto LAB6;

LAB10:    goto LAB4;

}

static int sp_start(char *t1, char *t2)
{
    char t5[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    int t48;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2256);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(192, ng0);

LAB5:    xsi_set_current_line(194, ng0);
    t6 = (t1 + 7288);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t9) == 0)
        goto LAB6;

LAB8:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;

LAB9:    t16 = (t5 + 4);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    *((unsigned int *)t5) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB11;

LAB10:    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t26 = (t5 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(198, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 9368);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(199, ng0);
    t4 = (t2 + 88U);
    t6 = *((char **)t4);
    t7 = (t6 + 32U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB23;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB11:    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t5) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB10;

LAB12:    xsi_set_current_line(194, ng0);

LAB15:    xsi_set_current_line(195, ng0);

LAB16:    t32 = (t1 + 7288);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t34);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB18;

LAB17:    t41 = (t2 + 88U);
    t42 = *((char **)t41);
    t43 = (t42 + 0U);
    xsi_wp_set_status(t43, 1);
    t44 = (t2 + 48U);
    *((char **)t44) = &&LAB16;
    goto LAB1;

LAB18:    t45 = (t2 + 88U);
    t46 = *((char **)t45);
    t47 = (t46 + 0U);
    xsi_wp_set_status(t47, 0);
    xsi_set_current_line(196, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t48 = (t12 & t11);
    t7 = (t1 + 18092);
    *((int *)t7) = t48;

LAB19:    t8 = (t1 + 18092);
    if (*((int *)t8) > 0)
        goto LAB20;

LAB21:    goto LAB14;

LAB20:    xsi_set_current_line(196, ng0);
    t9 = (t2 + 88U);
    t15 = *((char **)t9);
    t16 = (t15 + 16U);
    xsi_wp_set_status(t16, 1);
    *((char **)t3) = &&LAB22;
    goto LAB1;

LAB22:    t4 = (t1 + 18092);
    t48 = *((int *)t4);
    *((int *)t4) = (t48 - 1);
    goto LAB19;

LAB23:    xsi_set_current_line(200, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 9368);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t4 = (t2 + 88U);
    t6 = *((char **)t4);
    t7 = (t6 + 48U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB24;
    goto LAB1;

LAB24:    goto LAB4;

}

static void Cont_78_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 12528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4968U);
    t3 = *((char **)t2);
    t2 = (t0 + 14920);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 14584);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_79_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 12776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5128U);
    t3 = *((char **)t2);
    t2 = (t0 + 14984);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 14600);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_80_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 13024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5288U);
    t3 = *((char **)t2);
    t2 = (t0 + 15048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 14616);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_81_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 13272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5288U);
    t3 = *((char **)t2);
    t2 = (t0 + 15112);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 14632);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_82_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 13520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5448U);
    t3 = *((char **)t2);
    t2 = (t0 + 15176);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 14648);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_151_5(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 13768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 13576);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(151, ng0);
    t4 = (t0 + 7128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 7128);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_205_6(char *t0)
{
    char t5[8];
    char t8[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 14016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(205, ng0);

LAB4:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 6488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    *((int *)t5) = xsi_vlog_rtl_dist_uniform(1, t4, -2147483648, 2147483647);
    t6 = (t5 + 4);
    *((int *)t6) = 0;
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_mod(t8, 32, t5, 32, t7, 32);
    t9 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t8, 32, t9, 32);
    t11 = (t0 + 6968);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 32);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 6968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t7 = (t0 + 18096);
    *((int *)t7) = t15;

LAB5:    t9 = (t0 + 18096);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 14776);
    *((int *)t2) = 1;
    t3 = (t0 + 14048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB6:    xsi_set_current_line(207, ng0);
    t11 = (t0 + 14760);
    *((int *)t11) = 1;
    t16 = (t0 + 14048);
    *((char **)t16) = t11;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 18096);
    t15 = *((int *)t2);
    *((int *)t2) = (t15 - 1);
    goto LAB5;

LAB9:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 13824);
    t3 = (t0 + 1824);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB12:    t6 = (t0 + 13920);
    t7 = *((char **)t6);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t16 = (t11 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t15 = ((int  (*)(char *, char *))t19)(t0, t7);

LAB14:    if (t15 != 0)
        goto LAB15;

LAB10:    t7 = (t0 + 1824);
    xsi_vlog_subprogram_popinvocation(t7);

LAB11:    t20 = (t0 + 13920);
    t21 = *((char **)t20);
    t20 = (t0 + 1824);
    t22 = (t0 + 13824);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB2;

LAB13:;
LAB15:    t6 = (t0 + 14016U);
    *((char **)t6) = &&LAB12;
    goto LAB1;

}

static void Initial_212_7(char *t0)
{
    char t3[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;

LAB0:    t1 = (t0 + 14264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(212, ng0);

LAB4:    xsi_set_current_line(217, ng0);
    *((int *)t3) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 6488);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 6488);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng8, 2, t0, (char)119, t5, 32);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 14072);
    t4 = (t0 + 1392);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB7:    t6 = (t0 + 14168);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB9:    if (t14 != 0)
        goto LAB10;

LAB5:    t7 = (t0 + 1392);
    xsi_vlog_subprogram_popinvocation(t7);

LAB6:    t15 = (t0 + 14168);
    t16 = *((char **)t15);
    t15 = (t0 + 1392);
    t17 = (t0 + 14072);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 14072);
    t4 = (t0 + 1824);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB13:    t6 = (t0 + 14168);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB15:    if (t14 != 0)
        goto LAB16;

LAB11:    t7 = (t0 + 1824);
    xsi_vlog_subprogram_popinvocation(t7);

LAB12:    t15 = (t0 + 14168);
    t16 = *((char **)t15);
    t15 = (t0 + 1824);
    t17 = (t0 + 14072);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t2 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t2);
    t14 = (t21 & t20);
    t5 = (t0 + 18100);
    *((int *)t5) = t14;

LAB17:    t6 = (t0 + 18100);
    if (*((int *)t6) > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(231, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(232, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t6 = (t0 + 14264U);
    *((char **)t6) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t6 = (t0 + 14264U);
    *((char **)t6) = &&LAB13;
    goto LAB1;

LAB18:    xsi_set_current_line(221, ng0);

LAB20:    xsi_set_current_line(222, ng0);
    t7 = ((char*)((ng9)));
    t8 = (t7 + 4);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t7);
    t25 = (t24 & t23);
    t9 = (t0 + 18104);
    *((int *)t9) = t25;

LAB21:    t10 = (t0 + 18104);
    if (*((int *)t10) > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 14072);
    t4 = (t0 + 2256);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB27:    t6 = (t0 + 14168);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB29:    if (t14 != 0)
        goto LAB30;

LAB25:    t7 = (t0 + 2256);
    xsi_vlog_subprogram_popinvocation(t7);

LAB26:    t15 = (t0 + 14168);
    t16 = *((char **)t15);
    t15 = (t0 + 2256);
    t17 = (t0 + 14072);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    xsi_set_current_line(224, ng0);

LAB31:    t2 = (t0 + 4168U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t19 = *((unsigned int *)t2);
    t20 = (~(t19));
    t21 = *((unsigned int *)t4);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB33;

LAB32:    t5 = (t0 + 14808);
    *((int *)t5) = 1;
    t6 = (t0 + 14264U);
    *((char **)t6) = &&LAB31;
    goto LAB1;

LAB22:    xsi_set_current_line(222, ng0);
    t11 = (t0 + 14792);
    *((int *)t11) = 1;
    t12 = (t0 + 14296);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    t2 = (t0 + 18104);
    t14 = *((int *)t2);
    *((int *)t2) = (t14 - 1);
    goto LAB21;

LAB28:;
LAB30:    t6 = (t0 + 14264U);
    *((char **)t6) = &&LAB27;
    goto LAB1;

LAB33:    t7 = (t0 + 14808);
    *((int *)t7) = 0;
    xsi_set_current_line(225, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t2 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t2);
    t14 = (t21 & t20);
    t5 = (t0 + 18108);
    *((int *)t5) = t14;

LAB34:    t6 = (t0 + 18108);
    if (*((int *)t6) > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(228, ng0);
    t2 = (t0 + 6488);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    *((int *)t3) = xsi_vlog_rtl_dist_uniform(1, t5, -2147483648, 2147483647);
    t6 = (t3 + 4);
    *((int *)t6) = 0;
    t7 = ((char*)((ng7)));
    memset(t26, 0, 8);
    xsi_vlog_signed_mod(t26, 32, t3, 32, t7, 32);
    t8 = (t0 + 6648);
    xsi_vlogvar_assign_value(t8, t26, 0, 0, 32);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 6648);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 4);
    t19 = *((unsigned int *)t6);
    t20 = (~(t19));
    t21 = *((unsigned int *)t5);
    t14 = (t21 & t20);
    t7 = (t0 + 18112);
    *((int *)t7) = t14;

LAB38:    t8 = (t0 + 18112);
    if (*((int *)t8) > 0)
        goto LAB39;

LAB40:    t2 = (t0 + 18100);
    t14 = *((int *)t2);
    *((int *)t2) = (t14 - 1);
    goto LAB17;

LAB35:    xsi_set_current_line(226, ng0);
    t7 = (t0 + 14824);
    *((int *)t7) = 1;
    t8 = (t0 + 14296);
    *((char **)t8) = t7;
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    t2 = (t0 + 18108);
    t14 = *((int *)t2);
    *((int *)t2) = (t14 - 1);
    goto LAB34;

LAB39:    xsi_set_current_line(229, ng0);
    t9 = (t0 + 14840);
    *((int *)t9) = 1;
    t10 = (t0 + 14296);
    *((char **)t10) = t9;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    t2 = (t0 + 18112);
    t14 = *((int *)t2);
    *((int *)t2) = (t14 - 1);
    goto LAB38;

}


extern void work_m_00000000001471510615_3671711236_init()
{
	static char *pe[] = {(void *)Cont_78_0,(void *)Cont_79_1,(void *)Cont_80_2,(void *)Cont_81_3,(void *)Cont_82_4,(void *)Always_151_5,(void *)Always_205_6,(void *)Initial_212_7};
	static char *se[] = {(void *)sp_setup,(void *)sp_reset,(void *)sp_start};
	xsi_register_didat("work_m_00000000001471510615_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000001471510615_3671711236.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
