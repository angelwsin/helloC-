/*
 * macro.h
 *
 *  Created on: 2017��7��7��
 *      Author: Administrator
 */

#ifndef MACRO_H_
#define MACRO_H_


//Ԥ����ָ����� #include��#define��#if��#else��#line ��

//#define Ԥ����ָ�����ڴ������ų������÷��ų���ͨ����Ϊ��

#define PI 3.1415926

//#������

#define MAX(a,b)(a>b?a:b)


//��������

#ifndef xxx
#define xxx x
#endif


//# �� ## Ԥ����������� C++ �� ANSI/ISO C �ж��ǿ��õġ�# �������� replacement-text ����ת��Ϊ���������������ַ�����

#define MKSTR(x) #x

//## ���������������������
//�����ᱻ����������������ȡ����

#define CONCAT( x, y )  x ## y

#endif /* MACRO_H_ */
