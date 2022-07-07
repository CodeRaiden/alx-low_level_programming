#include <stdarg.h>
#include <stdiio.h>

/**
 *sum_them_all - ...
 *@n: ...
 *
 *Return: ...
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int i, sum;

	if (n != 0)
	{
		va_start(arg, count);

		sum = 0;
		for (i = 0; i < count; i++)
		{
			sum += va_arg(ap, int);
		}

		va_end(arg);
		return (sum);
	}
	return (0);
}


