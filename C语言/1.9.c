#include <stdio.h>
#define MAXLINE 1000  /* ��������еĴ�С */


int getline (char line[ ], int maxline );
void copy ( char to[], char from [] );

/* ��ӡ��������� */
main()
/* main�����еı�����Ϊ�ֲ������������������ܷ��������ⲿ�����������ı��Ա���ԭ����ֵ���� 
{
	int len;
	int max;
	/* char˵������Ϊ���� */ 
	char line[MAXLINE];
	
	char longest[MAXLINE];
	
	max = 0;
	while ( (len = getline (line, MAXLINE) ) > 0)
	    if (len>max) {
		
		max = len;
		copy (longest, line );
	}
	if (max > 0) 
	    printf("%s" , longest ) ;
	return 0 ;
 } 
 
 /* getline:��һ�ж���s�в������䳤�� */
 int getline (char s [ ], int lim)
 {
 	int c, i;
 	
 	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i )
 	s[i] = c;
 	if (c == '\n'){
 		s[i] = c;
 		++i;
	 }
	 s[i] = '\O';
	 return i;
  } 
  
  /* copy:��from������to���ٶ�to�㹻�� */
  void copy ( char to [], char from [ ])
  {
  	int i;
  	
  	
  	i = 0;
  	while ( (to[ i ] = from [i]) != '\O')
  	++i;
   } 
