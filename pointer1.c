#include <stdio.h>
int main() 
{ 
	char a[] = { 'A', 'B', 'C', 'D' }; 
	char* ppp = &a[0]; 
	*ppp++; // Line 1 
	printf("%c %c ", *++ppp, --*ppp); // Line 2 

    return 0;
} 
