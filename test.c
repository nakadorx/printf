#include <stdio.h>
int main(){
    {
    int i = 0, j, k = 0;
    char format[509] = "abcs %d %fs azeaz %dffe ";
    char types[509];
    for(;format[i] != '\0'; i++) 
    {
        if (format[i] == '%')
        {
            for (j = i + 1; format[j] != ' '; j++)
            {
                types[k] = format[j];
                k++;
            }
            i = j - 1;
            types[k] = '+';
            k++;
            
        }

    }
    types[k + 1]='\0';
    printf("%s \n",types);

    return(0);
}
}