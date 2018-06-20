/* itoa:将数字n转换成字符存到s中 */
void itoa(int n, char s[])
{
	int i, sign;


	if ((sign = n) < 0)		/* 记录符号 */
		n = -n;				/* 使n成为正数 */
	i = 0;

	do {						/* 以反序生成数字*/
		s[i++] = n % 10 + '0';	/* 取下一个数字*/
	} while ((n /= 10) > 0);	/* 删除该数字 */
	if (asign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}