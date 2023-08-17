#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *	Starting from 00:00 to 23:59.
 *
 * Return: return nothing.
 */
void jack_bauer(void)
{
	int hours = 48;
	int hour = 48;
	int minutes = 48;
	int minute = 48;
	int AmOrPm = 57;

	while (hours <= 50)
	{
		if (hours == 50)
		{
			AmOrPm = 51;
		}

		while (hour <= AmOrPm)
		{
			while (minutes <= 53)
			{
				while (minute <= 57)
				{
					_putchar(hours);
					_putchar(hour);
					_putchar(':');
					_putchar(minutes);
					_putchar(minute);
					_putchar('\n');
					minute++;
				}

				minutes++;
				minute = 48;
			}

			hour++;
			minutes = minute = 48;
		}

		hours++;
		hour = minutes = minute = 48;

	}
}
