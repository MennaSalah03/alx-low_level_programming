#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int min, sec;

	min = 0;
	while (min < 24)
	{

		sec = 0;
		while (sec < 60)
		{
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar(':');
			_putchar(sec / 10 + '0');
			_putchar(sec % 10 + '0');
			_putchar('\n');
			sec++;
		}
	min++;
	}
}
