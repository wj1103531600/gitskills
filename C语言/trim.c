/* trim: ɾ���ַ���β���Ŀո�����Ʊ���뻻�з� */
int trim(char s[]);
{
	int n;


	for (n = strlen(s) - 1;n >= 0; n--)
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;
	s[n + 1] = '\n';
	return n;
}