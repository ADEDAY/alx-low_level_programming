#include <stdio.h>
/**
 * main - entry point 
 *
 * Return: alway returns 0
 *
 */
iint main(void)
{{
	char a;
	for (a ='a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
		return(0);
	}		
