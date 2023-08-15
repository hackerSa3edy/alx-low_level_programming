#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int stLoop = 48;
	int ndLoop = 48;
	int rdLoop = 48;
	int thLoop = 49;

	while (stLoop <= 57)
	{
		while (ndLoop <= 57)
		{
			while (rdLoop <= 57)
			{
				while (thLoop <= 57)
				{
					putchar(stLoop);
					putchar(ndLoop);
					putchar(32);
					putchar(rdLoop);
					putchar(thLoop);

					if (stLoop != 57 || ndLoop != 56)
					{
						putchar(44);	/* Comma */
						putchar(32);	/* Space */
					}
					thLoop++;
				}
				thLoop = 48;
				rdLoop++;
			}
			rdLoop = stLoop;
			ndLoop++;
			thLoop = ndLoop + 1;
		}
		stLoop++;
		rdLoop = stLoop;
		ndLoop = 48;
		thLoop = ndLoop + 1;
	}
	putchar(10);
	return (0);
}
