# 32-bit CPU by Single Cycle 

## 描述
　　本科二年级暑假出于个人爱好，捣鼓的一个小项目，使用的开发环境是 **Xilinx ISE 12.3** 。通过编写**Verilog HDL** 实现了一个单周期的32位CPU，兼容MIPS指令集，并通过ISE软件进行软件仿真与调试。   
　　本仓库仅用作代码保存与共享目的，上述已经提供本项目的所有参考资料。

## 目录介绍 
    . 
    ├── CPU		文件夹，ISE工程完整源代码  
    ├── 6-Datapath(1).pdf		《计算机组成原理》课程课件(版权归授课老师)，本项目主要参考资料(绝大部分)  
    ├── MIPS流水线CPU的verilog实现.pdf		阅读了解资料
    ├── MIPS体系结构透视.pdf		指令集设计参考资料
	└── MIPS体系结构与编程.pdf		指令集设计参考资料

## 内容
<img src="/block diagram.png" width="800px">

+ 指令集设计，参考MIPS指令集。  
+ Datapath设计，参考上图，分模块实现。  
+ P(rogram)C(ounter)的计算，主要涉及跳转指令的处理。   
+ Instruction Memory和Data Memory的模拟仿真。  