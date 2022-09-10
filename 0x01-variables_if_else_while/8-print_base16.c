#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{

		putchar(digit);
		if (digit == '9')
		{
			digit = 'a';
			for (; digit <= 'f'; digit++)
			{
				putchar(digit);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
