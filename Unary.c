/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a = 5;

    char ch;
    short sh;
    int i;
    long l;

    printf("%d %d %d %d\n",sizeof(ch),sizeof(sh),sizeof(i),sizeof(l));
    printf("%d %d %d %d\n",sizeof(+ch),sizeof(+sh),sizeof(+i),sizeof(+l));
    
    //printf("%d %d %d %d %d %d %d %d %d",a--,a,++a,--a,a++,--a,a,a--,--a);
    return 0;
}
