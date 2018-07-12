#include <stype.h>


int getch(void);
void ungetch(int);

/* getint:将输入流的下一个整数赋给*pn */
int getint(int *pn)
{
	int c, sign;
	while (isspace(c = getch()))	/* 跳过空白符 */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c); /* 输入不是一个数字 */
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c = = '+' || c = = '-')
		c = getch();
	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * * pn + (c - '0');
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}