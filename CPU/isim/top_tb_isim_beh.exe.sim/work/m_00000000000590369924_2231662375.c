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
static const char *ng0 = "C:/Users/Administrator/Desktop/MIPS/CPU/aluctrl.v";
static unsigned int ng1[] = {15U, 0U};
static unsigned int ng2[] = {32U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {33U, 0U};
static unsigned int ng5[] = {34U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {35U, 0U};
static unsigned int ng8[] = {36U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {37U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {38U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {39U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {42U, 0U};
static unsigned int ng17[] = {6U, 0U};
static unsigned int ng18[] = {43U, 0U};
static unsigned int ng19[] = {0U, 0U};
static unsigned int ng20[] = {8U, 0U};
static unsigned int ng21[] = {9U, 0U};
static unsigned int ng22[] = {10U, 0U};
static unsigned int ng23[] = {7U, 0U};



static void Always_55_0(char *t0)
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    int t33;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2112);
    *((int *)t2) = 1;
    t3 = (t0 + 1656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56, ng0);

LAB13:    xsi_set_current_line(57, ng0);
    t28 = (t0 + 600U);
    t29 = *((char **)t28);

LAB14:    t28 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t28, 6);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB17;

LAB18:    t3 = ((char*)((ng5)));
    t33 = xsi_vlog_unsigned_case_compare(t29, 6, t3, 6);
    if (t33 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB21;

LAB22:    t3 = ((char*)((ng8)));
    t33 = xsi_vlog_unsigned_case_compare(t29, 6, t3, 6);
    if (t33 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng18)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB33;

LAB34:    t3 = ((char*)((ng19)));
    t33 = xsi_vlog_unsigned_case_compare(t29, 6, t3, 6);
    if (t33 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB37;

LAB38:    t3 = ((char*)((ng6)));
    t33 = xsi_vlog_unsigned_case_compare(t29, 6, t3, 6);
    if (t33 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng17)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB41;

LAB42:    t3 = ((char*)((ng9)));
    t33 = xsi_vlog_unsigned_case_compare(t29, 6, t3, 6);
    if (t33 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng23)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB45;

LAB46:
LAB48:
LAB47:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);

LAB49:    goto LAB12;

LAB15:    xsi_set_current_line(59, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 4, 0LL);
    goto LAB49;

LAB17:    goto LAB15;

LAB19:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB49;

LAB21:    goto LAB19;

LAB23:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB49;

LAB25:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB27:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB29:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB31:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB33:    goto LAB31;

LAB35:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng20)));
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB49;

LAB37:    goto LAB35;

LAB39:    xsi_set_current_line(71, ng0);
    t4 = ((char*)((ng21)));
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB49;

LAB41:    goto LAB39;

LAB43:    xsi_set_current_line(73, ng0);
    t4 = ((char*)((ng22)));
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB49;

LAB45:    goto LAB43;

}

static void Cont_80_1(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2172);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 2120);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_81_2(char *t0)
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

LAB0:    t1 = (t0 + 1916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
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
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    t22 = (t0 + 2208);
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
    t35 = (t0 + 2128);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}


extern void work_m_00000000000590369924_2231662375_init()
{
	static char *pe[] = {(void *)Always_55_0,(void *)Cont_80_1,(void *)Cont_81_2};
	xsi_register_didat("work_m_00000000000590369924_2231662375", "isim/top_tb_isim_beh.exe.sim/work/m_00000000000590369924_2231662375.didat");
	xsi_register_executes(pe);
}
