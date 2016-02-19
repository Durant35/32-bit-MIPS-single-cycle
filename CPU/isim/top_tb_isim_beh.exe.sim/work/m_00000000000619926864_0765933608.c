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
static const char *ng0 = "C:/Users/Administrator/Desktop/MIPS/CPU/InstrMem.v";
static const char *ng1 = "instrMemFile.dat";



static void Initial_13_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(13, ng0);

LAB2:    xsi_set_current_line(14, ng0);
    t1 = (t0 + 920);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Cont_17_1(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 1588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 920);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 920);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 63U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 63U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 6, 2);
    t22 = (t0 + 1828);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 1784);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000000619926864_0765933608_init()
{
	static char *pe[] = {(void *)Initial_13_0,(void *)Cont_17_1};
	xsi_register_didat("work_m_00000000000619926864_0765933608", "isim/top_tb_isim_beh.exe.sim/work/m_00000000000619926864_0765933608.didat");
	xsi_register_executes(pe);
}
