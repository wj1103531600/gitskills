#include <ctype.h>

/* ���ַ���sת������Ӧ��˫���ȸ����� */
double atof(char s[])
{
	double val, power;
	int i, sign;

	/* isspace�����жϲ����Ƿ�Ϊ�հ��ַ� */
	for (i = 0;isspace(s[i]��; i++)			/* �����հ� */
		;
		sign = (s[i] == '-') ? -1 : 1;
		if (s[i] == '+'|| s[i] == '-')
			i++;
		/* isdigit�����ж��ַ�c�Ƿ�Ϊ���� */
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