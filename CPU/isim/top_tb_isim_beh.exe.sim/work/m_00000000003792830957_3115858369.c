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
static const char *ng0 = "C:/Users/Administrator/Desktop/MIPS/CPU/top_tb.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};



static void Always_15_0(char *t0)
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

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1252);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);
    t4 = (t0 + 736);
    t5 = (t4 + 36U);
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
    t24 = (t0 + 736);
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

static void Initial_17_1(char *t0)
{
    char t5[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;

LAB0:    t1 = (t0 + 1496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);

LAB4:    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1396);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2720);
    t4 = *((char **)t3);
    t7 = (t0 + 2744);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 44U);
    t10 = *((char **)t9);
    t11 = (t0 + 2768);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 40U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2792);
    t4 = *((char **)t3);
    t7 = (t0 + 2816);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 44U);
    t10 = *((char **)t9);
    t11 = (t0 + 2840);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 40U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    goto LAB1;

LAB6:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB7;

LAB8:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB9;

}


extern void work_m_00000000003792830957_3115858369_init()
{
	static char *pe[] = {(void *)Always_15_0,(void *)Initial_17_1};
	xsi_register_didat("work_m_00000000003792830957_3115858369", "isim/top_tb_isim_beh.exe.sim/work/m_00000000003792830957_3115858369.didat");
	xsi_register_executes(pe);
}
