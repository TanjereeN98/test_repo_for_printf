#include "main.h"
/**
 * AA_itows - function to convert int to string to be printed
 * @num: integer to be converted
 * @s_buff: string where the string will be stored
 */

void AA_itwos(int num, char *s_buff)
{
	int temp_num, count, len = 0, rem = 0, new_p_int = 0;

	if (num == 0)
	{
		_putchar('0');
		s_buff[0] = '\0';
	}
	temp_num = num;
	while (temp_num != 0)
	{
		temp_num /= 10;
		len++;
	}
	if (num < 0)
	{
		new_p_int = num * -1;
		for (count = 0 ; count < len ; count++)
		{
			rem = new_p_int % 10;
			s_buff[len - count] = (rem + '0');
			new_p_int /= 10;
		}
		s_buff[0] = '-';
		s_buff[len + 1] = '\0';
	}
	if (num > 0)
	{
		for (count = 0 ; count < len ; count++)
		{
			rem = num % 10;
			s_buff[len - (count + 1)] = rem + '0';
			num /= 10;
		}
		s_buff[len] = '\0';
	}
}
