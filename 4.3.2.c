#define MAXVAL 100			/* ջval�������� */


int sp = 0;					/* ��һ������ջԪ��λ�� */
double val[MAXVAL];			/* ֵջ */

/* push:��f���Ƶ�ֵջ�� */
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("Error:stack full,cna't push %g\n", f);

}
/*pop:����������ջ����ֵ */
double pop(void);
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error:stack empty\n");
		return 0.0;
	}
}