#include <stdio.h>
/* 该说明叫做函数原型*/ 
int power(int m, int n);


/* 测试power函数 */
main()
{
	int i;
	
	for ( i = 0; i < 10; ++i)
	printf("%d  %d  %d\n", i, power(2,i),power(-3, i));
	return 0;
	
 } 
 
 /* power：求底的n次幂； n >=0 */
 int power(int base, int n)
 {
 	int i, p;
 	
 	p = 1;
 	for ( i = 1; i <=n; ++i )
	 p = p * base;
	 /*return语句返回给main()函数，关键词return可以后跟任何表达式 
	 return p; 
  } 
  
  /*函数定义的一般形式为：
                         返回值类型函数名{
						 说明序列
						 语句序列}*/ 
