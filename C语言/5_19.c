#include <stdio.h>

/* 统计输入的字符数： 第一个版本 */
main()
{
	long nc;
	nc = 0;
	while ( getchar() != EOF)
	/* ++nc 相当于 nc = nc + 1 */
	++nc;
	/* 转换说明%1d用来告诉printf函数对应的变元是long整数类型 */ 
	printf("%1d\n", nc);
	
 } 
 
 
 
 
 #include <stdio.h>
 
 /* 统计输入的字符数，第二个版本 */
 main()
 {
 	double nc;
 	
 	for ( nc = 0; getchar () != EOF; ++nc);
 	/* %.0f用于控制不打印小数点和小数部分，因此小数部分为0,因此小数部分为0 */ 
	 printf("%.0f\n",nc);
  } 
