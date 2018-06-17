#include <stdio.h>
#define MAXLINE 1000  /* 最大输入行的大小 */


int getline (char line[ ], int maxline );
void copy ( char to[], char from [] );

/* 打印最长的输入行 */
main()
/* main函数中的变量都为局部变量，其他函数不能访问它，外部变量被函数改变仍保留原来的值不变 
{
	int len;
	int max;
	/* char说明变量为数组 */ 
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
 
 /* getline:将一行读入s中并返回其长度 */
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
  
  /* copy:从from拷贝到to；假定to足够大 */
  void copy ( char to [], char from [ ])
  {
  	int i;
  	
  	
  	i = 0;
  	while ( (to[ i ] = from [i]) != '\O')
  	++i;
   } 
