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
	int tLoop = 50;
	int Def2Loop = sLoop;
	int Def3Loop = tLoop;

	while (fLoop <= 55)
	{
		while (sLoop <= 56)
		{
			while (tLoop <= 57)
			{
				putchar(fLoop);
				putchar(sLoop);
				putchar(tLoop);
				if (fLoop != 55)
				{
					putchar(44);
					putchar(32);
				}
				tLoop++;
			}
			sLoop++;
			Def3Loop++;
			tLoop = Def3Loop;
		}
		fLoop++;
		sLoop = Def2Loop;
		Def2Loop++;
		Def3Loop = Def2Loop;
	}
	putchar(10);
	return (0);
}
