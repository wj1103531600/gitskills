#include <stdio.h>

/* ͳ��������ַ����� ��һ���汾 */
main()
{
	long nc;
	nc = 0;
	while ( getchar() != EOF)
	/* ++nc �൱�� nc = nc + 1 */
	++nc;
	/* ת��˵��%1d��������printf������Ӧ�ı�Ԫ��long�������� */ 
	printf("%1d\n", nc);
	
 } 
 
 
 
 
 #include <stdio.h>
 
 /* ͳ��������ַ������ڶ����汾 */
 main()
 {
 	double nc;
 	
 	for ( nc = 0; getchar () != EOF; ++nc);
 	/* %.0f���ڿ��Ʋ���ӡС�����С�����֣����С������Ϊ0,���С������Ϊ0 */ 
	 printf("%.0f\n",nc);
  } 
