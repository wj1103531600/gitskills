/* squeeze:��s��ɾ����c */

void squeeze(char s[], int c)
{
	int i,j;
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s [j] ='\0';
 } 
 
 /* ������if���ȼ������� */
 if (s[i] != c) {
 	s[j] = s[i];
 	j++;
 } 
 
 
 /* strcat: ���ַ���t���ӵ��ַ���s�ĺ��棻s�������㹻��Ŀռ� */
 void strcat(char s[], char t[])
 {
 	int i,j;
 	
 	
 	i = j = 0;
 	while (s[i] != '\0')      /* �ҵ�s��ĩβ */
		i++;
	/* ��t�е��ַ����������s����ʱ���ú�׺����� ++ ������i��j���Ա�֤��ѭ��������i��j��ָ����һ��λ�� */ 
	while ( (s[i++] = t[j++]) != '\0')    /* ����t */ 
		; 
  } 
