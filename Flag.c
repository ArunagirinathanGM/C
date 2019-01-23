#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool flag=0;
    int i;
    printf("Enter i value...\t");
    scanf("%d",&i);
    if(i%2==0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    printf("Flag=%d\n",flag);
    return 0;
}
