/* atoi: ���ַ���sת�������� */
int atoi( char s[]) 
{
	int i, n;
	
	
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}

/* lower:���ַ�cת����Сд��ĸ������ASCII�ַ��� */
int lower (int c)
{
	if (c >= 'A' && c <= 'Z' )
		return c + 'a' - 'A';
	else
		return c;
 } 

/* �����Ԫʽͨ������ԭ��˵���ģ���ô��ͨ������£����ú���������ʱ��ϵͳ�Ա�Ԫ�Զ�����ǿ��ת�� */ 
double sqrt(double);
root = sqrt(2);       /*����Ҫǿ��ת����������Ѿ�������2ת����double���͵�ֵ2.0 */
 
 
unsigned long int next = 1;


/* rand������ȡֵ��0~32767֮���α����� */
int rand(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65536) % 32768;
 } 

/* srand:Ϊrand()������������ */
void srand(unsigned int seed)
{
	next = seed;
 } 
