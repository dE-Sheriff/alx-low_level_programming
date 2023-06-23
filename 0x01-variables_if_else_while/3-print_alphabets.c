#include <stdio.h>

int main(void)
{
	char ch = 'a';
	char uch = 'A';
	/* using while loop */

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/* Another while loop */

	while (uch <= 'Z')
	{
		putchar(uch);
		uch++;
	}
	putchar('\n');
	return (0);
}
