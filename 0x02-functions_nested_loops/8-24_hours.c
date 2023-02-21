#include "main.h"

/**
 * void jack_bauer- print all minutes of the day of Jack Bauer
 * each second followed by new line.
 * Return: Aways 0 (Sucess)
 */
void jack_bauer(void)
{
	int min,sec;

	min = 0;
	while (min < 24)
	{

		sec = 0;
		if (min != 23)
		{
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
		}
		else
		{
			while (sec < 51)
			{
				_putchar(2 + '0');
				_putchar(3 + '0');
				_putchar(':');
				_putchar(sec / 10 + '0');
				_putchar(sec % 10 + '0');
				_putchar('\n');
				sec++;
			}
		min++;
		}
	}
}
