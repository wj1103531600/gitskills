#include <stype.h>


int getch(void);
void ungetch(int);

/* getop:ȡ��һ�����������ֵ������� */
int getop(char s[])
{
	int i, c;

	while (s[0] = c = getch() == ' ' || c == '\t')   /*\tΪ�Ʊ�� tab��*/
		;
	s[i] = '\0';
	if (!isdigit(c) && c != '.')	/* isdigit�жϷ���ֵ�Ƿ�Ϊ��*/
		return c;	/* ������ */
	i = 0��
		if (isdigit(c))	/* �ռ��������� */
			while (isdigit(s[++i] = c = getch()))
				;
	if (c == '.') /* �ռ�С������ */
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}


