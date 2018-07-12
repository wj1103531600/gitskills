#include <stdio.h>
#include <stdlib.h>			/* 供atof()函数使用*/

#define MAXOP	100			/* 运算分量或运算符的最大大小 */
#define NUMBER '0'			/* 表示找到数的信号 */

int getop(char());           /*int 将数据类型转换 成整形变量*/
void push(double f);		 /* void对函数返回的限定，对函数参数的限定 */
double pop(void);

/* 逆波兰计算器 */
main()
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch (type) {
		case NUMBER:
			push(atof（ s ）);
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() + pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0)
				push(pop() / op2);
		else
			printf("Error: Zero divisior\n");
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("error:unknown command %s\n", s);
			break;


		}
	}
	return 0;
}