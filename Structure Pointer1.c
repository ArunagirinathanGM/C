/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct data
{
    int sno;
    char name[15];
    int age;
};

int main()
{
    struct data *ptr, person;
    ptr = &person;
    
    printf("Enter s.no...\n");
    scanf("%d",&ptr->sno);
    
    printf("Enter name...\n");
    scanf("%s",&ptr->name);
    
    printf("Enter age...\n");
    scanf("%d",&ptr->age);
    
    printf("Data stored is...\n");
    printf("sno = %d\n",ptr->sno);
    printf("name = %s\n",ptr->name);
    printf("age = %d\n",ptr->age);

    return 0;
}
