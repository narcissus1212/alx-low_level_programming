#include <stdio.h>
/**
*main - a program to print the size of types
*Return:0(success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char:%lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int:%lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int:%lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int:%lu bytes(s) \n", (unsigned long)sizeof(d));
print("size of a float :%lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
