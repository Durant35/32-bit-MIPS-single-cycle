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
static const char *ng0 = "C:/Users/Administrator/Desktop/MIPS/CPU/signext.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {16, 0};



static void Always_20_0(char *t0)
{
    char t4[8];
    char t16[8];
    char t17[8];
    char t30[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    int t29;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1876);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t14, 2);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng4)));
    t29 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 2);
    if (t29 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(23, ng0);
    t18 = (t0 + 600U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 6);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 6);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 31U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 31U);
    t27 = ((char*)((ng2)));
    xsi_vlogtype_concat(t16, 32, 32, 2U, t27, 27, t17, 5);
    t28 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t28, t16, 0, 0, 32, 0LL);
    goto LAB17;

LAB9:    goto LAB7;

LAB11:    xsi_set_current_line(24, ng0);
    t5 = (t0 + 600U);
    t6 = *((char **)t5);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 65535U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 65535U);
    t14 = ((char*)((ng5)));
    t18 = (t0 + 600U);
    t19 = *((char **)t18);
    memset(t31, 0, 8);
    t18 = (t31 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 15);
    t23 = (t22 & 1);
    *((unsigned int *)t31) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 15);
    t26 = (t25 & 1);
    *((unsigned int *)t18) = t26;
    xsi_vlog_mul_concat(t30, 16, 1, t14, 1U, t31, 1);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t30, 16, t17, 16);
    t27 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t27, t16, 0, 0, 32, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 65535U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 65535U);
    t7 = ((char*)((ng2)));
    xsi_vlogtype_concat(t16, 32, 32, 2U, t7, 16, t17, 16);
    t14 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t14, t16, 0, 0, 32, 0LL);
    goto LAB17;

}

static void Cont_30_1(char *t0)
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

LAB0:    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 1884);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000000744935596_0967167703_init()
{
	static char *pe[] = {(void *)Always_20_0,(void *)Cont_30_1};
	xsi_register_didat("work_m_00000000000744935596_0967167703", "isim/top_tb_isim_beh.exe.sim/work/m_00000000000744935596_0967167703.didat");
	xsi_register_executes(pe);
}
