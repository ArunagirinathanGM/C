/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct data
{
    int id_no;
    char name[15];
    int age;
};

int main()
{
    int i,number;
    struct data *ptr;
    printf("Enter number of employees:\n");
    scanf("%d",&number);
    
    ptr = (struct data*) malloc(number * sizeof(struct data)); //DMA for the no. of employees
    
    for(i=0;i<number;i++)
    {
        printf("Enter Person id_no,name,age:\n");
        scanf("%d %s %d",&(ptr+i)->id_no,&(ptr+i)->name,&(ptr+i)->age);
    }
    
    printf("Employee details...\n");
    
    for(i=0;i<number;i++)
    {
        printf("%d\t",(ptr+i)->id_no);
        printf("%s\t",(ptr+i)->name);
        printf("%d\t",(ptr+i)->age);
        printf("\n");
    }

    return 0;
}