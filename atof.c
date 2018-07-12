#include <ctype.h>

/* 把字符串s转换成相应的双精度浮点数 */
double atof(char s[])
{
	double val, power;
	int i, sign;

	/* isspace函数判断参数是否为空白字符 */
	for (i = 0;isspace(s[i]）; i++)			/* 跳过空白 */
		;
		sign = (s[i] == '-') ? -1 : 1;
		if (s[i] == '+'|| s[i] == '-')
			i++;
		/* isdigit用于判断字符c是否为数字 */
		for (val = 0.0; isdigit(s[i]); i++)
			val = 10.0 * val + (s[i] -'0');
		if (s[i] == '.')
			i++;
		for (power = 1.0; isdigit(s[i]); i++) {
			val = 10.0 * val + (s[i] - '0');
			power *= 10.0;
		}
	return sign * val / power;
}