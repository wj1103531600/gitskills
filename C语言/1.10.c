#include <stdio.h>


#define MAXLINE 1000     /* 最大输入行的大小 */

int max;   /* 至目前位置所发现的最长行的长度 */
char line[MAXLINE];      /* 当前输入的行 */
char longest[MAXLINE];   /* 用于保存最长的行 */

int getline(void) ;
void copy ( void );

/* 打印最长的输入行； 特别版本 */
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
	if (max > 0)         /* 有一行 */
	    printf ("%s", longest ) ;
	return 0 ;
	
 } 
 
 /* getline; 特别版本 */
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

/* copy；特别版本 */
void copy ( void) 
 
  
