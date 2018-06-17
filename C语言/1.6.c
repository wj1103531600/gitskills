#include <stdio.h>


/* 统计各个数字、空白符及其他字符分别出现的次数 */
main()
{
	int c, i, nwhite, nother;
	/*说明ndight是由10各整数组成的数组，数组下标从0开始到9 */ 
	int ndigit[10];
	
	nwhite = nother = 0;
	for ( i = 0; i < 10; ++i )
	ndigit[i] = 0;
	
	while ( (c = getchar() ) != EOF )
	if ( c >= '0' && c <= '9')
	++ndigit[c - '0'];
	else if ( c == ' ' || c == '\n' || c == '\t')
	++nwhite;
	else
	++nother;
	printf("digits =");
	for ( i = 0; i < 10; ++i)
	printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d/n", nwhite,nother);
	 
 } 
