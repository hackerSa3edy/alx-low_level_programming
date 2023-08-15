#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fLoop = 48;
	int sLoop = 49;
	int DefLoop = sLoop;

	while (fLoop <= 56)
	{
		while (sLoop <= 57)
		{
			putchar(fLoop);
			putchar(sLoop);
			if (fLoop != 56)
			{
				putchar(44);
				putchar(32);
			}
			sLoop++;
		}
		fLoop++;
		DefLoop++;
		sLoop = DefLoop;
	}
	putchar(10);
	return (0);
}
