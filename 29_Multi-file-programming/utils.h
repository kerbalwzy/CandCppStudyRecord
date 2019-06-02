// 这里是对应定义函数文件的头文件

// 当一个项目比较大时,往往都是分文件的
// 这个时候可能不小心将同一个头文件include多次, 或者嵌套inlcude
// 为了避免同一个头文件被include多次,C/C++中有两种方法
// 一种是#ifndef方式, 一种是#pragma once方式


// 方法一
#ifndef _UTILS_H_
#define _UTILS_H_
extern int max(int a, int b);
extern int min(int a, int b);
#endif


/*
// 方法二
#pragma once
extern int max(int a, int b);
extern int min(int a, int b);
*/
