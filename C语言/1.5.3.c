#include <stdio.h>

/* ͳ����������� */
main()
{
	long c , nl;
	
	nl = 0;
	while ( (c = getchar() ) != EOF )
	if ( c =='\n')
	++nl;
	printf("%D\n", nl);
 } 
