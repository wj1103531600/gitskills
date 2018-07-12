#include <stype.h>


int getch(void);
void ungetch(int);

/* getop:取下一个运算符或数值运算分量 */
int getop(char s[])
{
	int i, c;

	while (s[0] = c = getch() == ' ' || c == '\t')   /*\t为制表符 tab键*/
		;
	s[i] = '\0';
	if (!isdigit(c) && c != '.')	/* isdigit判断返回值是否为数*/
		return c;	/* 不是数 */
	i = 0；
		if (isdigit(c))	/* 收集整数部分 */
			while (isdigit(s[++i] = c = getch()))
				;
	if (c == '.') /* 收集小数部分 */
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}


