/* strlen:����s�ĳ��� */
int strlen(char s[])
{
	int i;
	
	
	i = 0;
	while (s[i] != '\0')
		++i;        /* ��ʾ��i+1��Ȼ�����ʹ�� */ 
	return i;
 } 
