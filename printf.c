#include <stdarg.h>
#include <stdio.h>
#include "printf.h"

/**
 * _printf - check the code for Holberton School students.
 * @format : int
 * 
 * Return: Always 0.
 */

int _printf(const char *format, ...)
{
va_list params;
int i,j;
char ch[509];   
arr2d types, vars;
char res[509];
va_start(params, format);
for (i = 0; format[i]; i++)
ch[i] = format[i];
ch[i] = '\0';

types = assignment3(types,getParamsType(ch));

vars = allToChar(types,params);
//for (i = 0; vars.m[i][0]; i++)
//printf("%s \n", vars.m[i]);
/*res = affect(format, vars);*/


/*for(i = 0;res[i];i++)
_putchar(res[i]);
_putchar('\n');
*/
va_end(params);
printf("\n");
}

