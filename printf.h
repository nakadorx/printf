#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdarg.h>
#include <stdio.h>

typedef struct{
	char m[509][509];
}arr2d;
int _putchar(char c);
int _printf(const char *format, ...);
arr2d allToChar(arr2d types, va_list params);
arr2d getParamsType(char *format);
char* intToChar(int x);
int floatToInt(int x);
char* floatToChar(int x); 
arr2d save_str(arr2d res,char ch[],int i);
void save_int(arr2d res,int x,int i);
void save_float(arr2d res,float x,int i);
char* assignment(char ch[], char x[],int i);
void assignment2(arr2d ch, char x[],int i, int k);
arr2d assignment3(arr2d ch , arr2d x);

#endif
