#include <stdio.h>
#include <stdlib.h>
/**
*main - main block
*description: get a rasndom it with s
*Return:0
*
*/

int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
