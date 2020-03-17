#include <stdarg.h>
#include <stdio.h>
#include "printf.h"
/**
 * getParamsType - check the code for Holberton School students.
 * @format : int
 * 
 * Return: Always 0.
 */
arr2d  getParamsType(char *format)
{
    int i = 0, j, k = 0, z = 0;
    arr2d types;
    for(;format[i] != '\0'; i++) 
    {
        if (format[i] == '%')
        {
            for (j = i + 1; format[j] != ' ' && format[j]; j++)
            {
                types.m[z][k] = format[j];
                k++;
            }
            types.m[z][k + 1] = '\0';
            i = j;
            k = 0;
            z++;
        }
        
    }
    return(types);
}

