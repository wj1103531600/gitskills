#include <stype.h>


int getch(void);
void ungetch(int);

/* getint:������������һ����������*pn */
int getint(int *pn)
{
	int c, sign;
	while (isspace(c = getch()))	/* �����հ׷� */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c); /* ���벻��һ������ */
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