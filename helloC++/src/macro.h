/*
 * macro.h
 *
 *  Created on: 2017年7月7日
 *      Author: Administrator
 */

#ifndef MACRO_H_
#define MACRO_H_


//预处理指令，比如 #include、#define、#if、#else、#line 等

//#define 预处理指令用于创建符号常量。该符号常量通常称为宏

#define PI 3.1415926

//#函数宏

#define MAX(a,b)(a>b?a:b)


//条件编译

#ifndef xxx
#define xxx x
#endif


//# 和 ## 预处理运算符在 C++ 和 ANSI/ISO C 中都是可用的。# 运算符会把 replacement-text 令牌转换为用引号引起来的字符串。

#define MKSTR(x) #x

//## 运算符用于连接两个令牌
//参数会被连接起来，并用来取代宏

#define CONCAT( x, y )  x ## y

#endif /* MACRO_H_ */
