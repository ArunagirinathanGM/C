#include <stdio.h>

int main()
{
    char str[100];
    
    sprintf((char*)str,"My name is %s, I am %d years old.","Mike",23);
    
    printf("Text is: %s\n",str);

    return 0;
}
