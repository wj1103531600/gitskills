#define MAXVAL 100			/* 栈val的最大深度 */


int sp = 0;					/* 下一个自由栈元素位置 */
double val[MAXVAL];			/* 值栈 */

/* push:把f下推到值栈中 */
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("Error:stack full,cna't push %g\n", f);

}
/*pop:弹出并返回栈顶的值 */
double pop(void);
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error:stack empty\n");
		return 0.0;
	}
}