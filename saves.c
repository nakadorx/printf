#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * assignment - check the code for Holberton School students.
 * @x : int
 * Return: Always 0.
 */
char* assignment(char ch[], char x[],int i)
{
    int j;
    for (j = 0 ; x[j] ; j++)
    {
        ch[i] = x[j];
        i++;
    }
    return(ch);
}
/**
 * assignment2 - check the code for Holberton School students.
 * @x : int
 * Return: Always 0.
 */
void assignment2(arr2d ch, char x[],int i,int k)
{
    int j;
    for (j = 0 ; x[j] ; j++)
    {
        ch.m[i][k] = x[j];
        i++;
    }
}
/**
 * assignment3 - check the code for Holberton School students.
 * @x : int
 * Return: Always 0.
 */
arr2d assignment3(arr2d ch ,arr2d x)
{
    int j, i;
    for (i = 0 ; x.m[i][0] ; i++)
    {
        for (j = 0; x.m[i][j] ; j++)
          ch.m[i][j] = x.m[i][j]; 
 
    }
    return(ch);
}

/**
 * intToChar - check the code for Holberton School students.
 * @x : int
 * Return: Always 0.
 */
char* intToChar(int x)
{
    int i = 0, k = 1;
    char *ch;
    if (x < 0)
    {
        x *= -1;
        ch[i] = '-';
        
        i++;
    }
    while (x / k != 0)
        k *= 10;
    k /= 10;
    for (;x != 0 ; i++)
    {
        ch[i] = (x / k) + '0';
        x -= (k * (x / k));
        k /= 10;
    }
    if (k == 1)
    {
        ch[i] = 0 + '0';
        i++;
    }
    ch[i] ='\0';
    return(ch + 0);
}



/**
 * save_str - check the code for Holberton School students.
 * @res : int
 * @ch : int
 * @i : int
 * Return: Always 0.
 */
arr2d save_str(arr2d res,char ch[],int i)
{
    int j ;
    for (j = 0 ; ch[j] ; j++)
        res.m[i][j] = ch[j];
    res.m[i][j] = '\0';
    return (res);
}
/**
 * save_int - check the code for Holberton School students.
 * @res : int
 * @ch : int
 * @i : int
 * Return: Always 0.
 */

void save_int(arr2d res,int x,int i)
{
    int j ;
    char ch[509];
    assignment(ch,intToChar(x),0);
    for (j = 0 ; ch[j] ; j++)
    {
        res.m[i][j] = ch[j];
    }
    res.m[i][j] = '\0';
}

