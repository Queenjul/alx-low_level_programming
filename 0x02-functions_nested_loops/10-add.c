[04:36, 22/03/2023] Queenjulia: #include "main.h"

/**
 * jack_bauer -prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar (a / 10 + '0');
			_putchar (a % 10 + '0');
			_putchar (':');
			_putchar (b / 10 + '0');
			_putchar (b % 10 + '0');
			_putchar ('\n');

		}

	}

}
[04:56, 22/03/2023] Queenjulia: #include "main.h"
/**
 * times_table -prints tables
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if ((c / 10) == 0)
			{
				if (b == 0)
				{
					_putchar ('0');
				}
				if (b != 0)
				{
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar ((c / 10) + '0');
				_putchar ((c % 10) + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar ('\n');
	}
}
[05:08, 22/03/2023] Queenjulia: #include "main.h"
/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return: void
 */

void print_times_table(int n)
{
	int a = 0, rep, b;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			rep = a * b;
			if  (b == 0)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (rep < 100)
			{
				_putchar(' ');
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			else
			{
				_putchar('0' + rep / 100);
				_putchar('0' + (rep - 100) / 10);
				_putchar('0' + rep % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
