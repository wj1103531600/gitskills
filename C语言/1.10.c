#include <stdio.h>


#define MAXLINE 1000     /* ��������еĴ�С */

int max;   /* ��Ŀǰλ�������ֵ���еĳ��� */
char line[MAXLINE];      /* ��ǰ������� */
char longest[MAXLINE];   /* ���ڱ�������� */

int getline(void) ;
void copy ( void );

/* ��ӡ��������У� �ر�汾 */
main( )
{
	int len;
	extern int max;
	extern char longest[ ];
	
	max = 0;
	while ( ( len = getline () ) > 0 )
	    if ( len > max ) {
	    	max = len;
	    	copy( );
		}
	if (max > 0)         /* ��һ�� */
	    printf ("%s", longest ) ;
	return 0 ;
	
 } 
 
 /* getline; �ر�汾 */
 int getline (void )
 {
 	int c, i;
 	extern char line[ ];
 	
 	for (i = 0; i < MAXLINE -1 && (c = getchar ( )) != EOF && c !='\n'; ++i)
 	    line[i] = c;
 	if (c == '\n' ) {
 		line[i] = c;
		++i; 
	 }
	 line[i] = '\O';
	 return i;
	 
	 }

/* copy���ر�汾 */
void copy ( void) 
 
  
