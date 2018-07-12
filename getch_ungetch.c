#define BUFSIZE 100

char buf[BUFSIZE];		/* ���� unget�����Ļ����� */
int bufp = 0;			/* buf����һ������λ�� */

int getch(void)			/* ȡһ���ַ����������ƻص��ַ���*/
{
	return (bufp > 0) ? buff[--bufp] : getchar();
}

void ungetch(int c)		/* ���ַ��ƻص������� */
{
	if (bufp >= BUFSIZE)
		printf("ungetch:too many characters\n");
	else
		buf[bufp++] = c;
}