#include <stdarg.h>
#include <stdio.h>
#include "printf.h"
/**
 * _printf - check the code for Holberton School students.
 * @format : int
 * 
 * Return: Always 0.
 */

arr2d allToChar(arr2d types, va_list params)
{
    int i = 0, k = 0, j = 0, x;
    double f;
    arr2d res;
    char c;
    char *ch;
   for (;types.m[i][0];i++)
    {
        for (j = 0 ; types.m[i][j] ; j++)
        {
           switch (types.m[i][j])
            {
                case  's' :
                    ch = va_arg(params, char *);
                    res = save_str(res,ch,i);
                    break;
                case  'd' :
                    x = va_arg(params, int);
                    save_int(res,x,i);
                    break;
                case  'i' :
                    x = va_arg(params, int);
                    save_int(res,x,i);
                    break;
                case 'c' :
                    c = va_arg(params, int);
                    res.m[i][0] = c ;
                    break;
                default:
                    break;
            }
        }
    }
return(res);
}


