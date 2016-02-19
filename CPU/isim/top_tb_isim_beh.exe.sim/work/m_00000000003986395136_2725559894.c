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

/* This file is designed for use with ISim build 0x36e8438f */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Administrator/Desktop/MIPS/CPU/alu.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {11U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {4294967295U, 4294967295U};



static void Always_30_0(char *t0)
{
    char t17[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2768);
    *((int *)t2) = 1;
    t3 = (t0 + 2024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);

LAB9:    xsi_set_current_line(32, ng0);
    t11 = (t0 + 784U);
    t12 = *((char **)t11);

LAB10:    t11 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t11, 4);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB35:    goto LAB8;

LAB11:    xsi_set_current_line(34, ng0);
    t14 = (t0 + 600U);
    t15 = *((char **)t14);
    t14 = (t0 + 692U);
    t16 = *((char **)t14);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t15, 32, t16, 32);
    t14 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t14, t17, 0, 0, 32, 0LL);
    goto LAB35;

LAB13:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t4, 32, t5, 32);
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t17, 0, 0, 32, 0LL);
    goto LAB35;

LAB15:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 & t7);
    *((unsigned int *)t17) = t8;
    t3 = (t4 + 4);
    t11 = (t5 + 4);
    t14 = (t17 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t11);
    t18 = (t9 | t10);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t14);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB36;

LAB37:
LAB38:    t39 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t39, t17, 0, 0, 32, 0LL);
    goto LAB35;

LAB17:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 | t7);
    *((unsigned int *)t17) = t8;
    t3 = (t4 + 4);
    t11 = (t5 + 4);
    t14 = (t17 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t11);
    t18 = (t9 | t10);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t14);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB39;

LAB40:
LAB41:    t39 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t39, t17, 0, 0, 32, 0LL);
    goto LAB35;

LAB19:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    *((unsigned int *)t17) = t8;
    t3 = (t4 + 4);
    t11 = (t5 + 4);
    t14 = (t17 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t11);
    t18 = (t9 | t10);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t14);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB42;

LAB43:
LAB44:    t15 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t15, t17, 0, 0, 32, 0LL);
    goto LAB35;

LAB21:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 | t7);
    *((unsigned int *)t40) = t8;
    t3 = (t4 + 4);
    t11 = (t5 + 4);
    t14 = (t40 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t11);
    t18 = (t9 | t10);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t14);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB45;

LAB46:
LAB47:    memset(t17, 0, 8);
    t39 = (t17 + 4);
    t41 = (t40 + 4);
    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    *((unsigned int *)t17) = t36;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB49;

LAB48:    t44 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t45 & 4294967295U);
    t46 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t46, t17, 0, 0, 32, 0LL);
    goto LAB35;

LAB23:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB51;

LAB50:    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB52;

LAB53:    t15 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t15, t17, 0, 0, 32, 0LL);
    goto LAB35;

LAB25:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    memset(t40, 0, 8);
    t4 = (t40 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t40) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t10 & 65535U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 65535U);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t40, 16, t3, 16);
    t14 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t14, t17, 0, 0, 32, 0LL);
    goto LAB35;

LAB27:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_lshift(t40, 32, t4, 32, t17, 5);
    t14 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t14, t40, 0, 0, 32, 0LL);
    goto LAB35;

LAB29:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_rshift(t40, 32, t4, 32, t17, 5);
    t14 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t14, t40, 0, 0, 32, 0LL);
    goto LAB35;

LAB31:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t40, 32, t4, 32, t17, 5);
    t14 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t14, t40, 0, 0, 32, 0LL);
    goto LAB35;

LAB36:    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t17) = (t21 | t22);
    t15 = (t4 + 4);
    t16 = (t5 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t37 & t33);
    t38 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t38 & t34);
    goto LAB38;

LAB39:    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t17) = (t21 | t22);
    t15 = (t4 + 4);
    t16 = (t5 + 4);
    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t5);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t33 & t29);
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t30);
    goto LAB41;

LAB42:    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t17) = (t21 | t22);
    goto LAB44;

LAB45:    t21 = *((unsigned int *)t40);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t40) = (t21 | t22);
    t15 = (t4 + 4);
    t16 = (t5 + 4);
    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t5);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t33 & t29);
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t30);
    goto LAB47;

LAB49:    t37 = *((unsigned int *)t17);
    t38 = *((unsigned int *)t41);
    *((unsigned int *)t17) = (t37 | t38);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t39) = (t42 | t43);
    goto LAB48;

LAB51:    t14 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB53;

LAB52:    *((unsigned int *)t17) = 1;
    goto LAB53;

}

static void Cont_54_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 2140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 2844);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 2776);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_55_2(char *t0)
{
    char t3[8];
    char t6[8];
    char t32[8];
    char t37[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;

LAB0:    t1 = (t0 + 2284U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1472);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    memset(t3, 0, 8);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t15) == 0)
        goto LAB4;

LAB6:    t21 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t21) = 1;

LAB7:    t22 = (t3 + 4);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    *((unsigned int *)t3) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB9;

LAB8:    t30 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t33 = (t0 + 1472);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng9)));
    memset(t37, 0, 8);
    t38 = (t35 + 4);
    t39 = (t36 + 4);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB13;

LAB10:    if (t49 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t37) = 1;

LAB13:    memset(t32, 0, 8);
    t53 = (t37 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t53) == 0)
        goto LAB14;

LAB16:    t59 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t59) = 1;

LAB17:    t60 = (t32 + 4);
    t61 = (t37 + 4);
    t62 = *((unsigned int *)t37);
    t63 = (~(t62));
    *((unsigned int *)t32) = t63;
    *((unsigned int *)t60) = 0;
    if (*((unsigned int *)t61) != 0)
        goto LAB19;

LAB18:    t68 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t68 & 1U);
    t69 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t69 & 1U);
    t71 = *((unsigned int *)t3);
    t72 = *((unsigned int *)t32);
    t73 = (t71 & t72);
    *((unsigned int *)t70) = t73;
    t74 = (t3 + 4);
    t75 = (t32 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB20;

LAB21:
LAB22:    t102 = (t0 + 2880);
    t103 = (t102 + 32U);
    t104 = *((char **)t103);
    t105 = (t104 + 40U);
    t106 = *((char **)t105);
    memset(t106, 0, 8);
    t107 = 1U;
    t108 = t107;
    t109 = (t70 + 4);
    t110 = *((unsigned int *)t70);
    t107 = (t107 & t110);
    t111 = *((unsigned int *)t109);
    t108 = (t108 & t111);
    t112 = (t106 + 4);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t113 | t107);
    t114 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t114 | t108);
    xsi_driver_vfirst_trans(t102, 0, 0);
    t115 = (t0 + 2784);
    *((int *)t115) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t26 = *((unsigned int *)t3);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t3) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB8;

LAB12:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t32) = 1;
    goto LAB17;

LAB19:    t64 = *((unsigned int *)t32);
    t65 = *((unsigned int *)t61);
    *((unsigned int *)t32) = (t64 | t65);
    t66 = *((unsigned int *)t60);
    t67 = *((unsigned int *)t61);
    *((unsigned int *)t60) = (t66 | t67);
    goto LAB18;

LAB20:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    t84 = (t3 + 4);
    t85 = (t32 + 4);
    t86 = *((unsigned int *)t3);
    t87 = (~(t86));
    t88 = *((unsigned int *)t84);
    t89 = (~(t88));
    t90 = *((unsigned int *)t32);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (~(t92));
    t94 = (t87 & t89);
    t95 = (t91 & t93);
    t96 = (~(t94));
    t97 = (~(t95));
    t98 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t98 & t96);
    t99 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t99 & t97);
    t100 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t100 & t96);
    t101 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t101 & t97);
    goto LAB22;

}

static void Cont_56_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2428U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 2916);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 2792);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_57_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2572U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2952);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2800);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000003986395136_2725559894_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Cont_54_1,(void *)Cont_55_2,(void *)Cont_56_3,(void *)Cont_57_4};
	xsi_register_didat("work_m_00000000003986395136_2725559894", "isim/top_tb_isim_beh.exe.sim/work/m_00000000003986395136_2725559894.didat");
	xsi_register_executes(pe);
}
