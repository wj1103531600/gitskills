/* itoa:������nת�����ַ��浽s�� */
void itoa(int n, char s[])
{
	int i, sign;


	if ((sign = n) < 0)		/* ��¼���� */
		n = -n;				/* ʹn��Ϊ���� */
	i = 0;

	do {						/* �Է�����������*/
		s[i++] = n % 10 + '0';	/* ȡ��һ������*/
	} while ((n /= 10) > 0);	/* ɾ�������� */
	if (asign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}