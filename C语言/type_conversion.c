/* atoi: 将字符串s转换成整数 */
int atoi( char s[]) 
{
	int i, n;
	
	
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}

/* lower:把字符c转换成小写字母，仅对ASCII字符集 */
int lower (int c)
{
	if (c >= 'A' && c <= 'Z' )
		return c + 'a' - 'A';
	else
		return c;
 } 

/* 如果变元式通过函数原型说明的，那么在通常情况下，当该函数被调用时，系统对变元自动进行强制转换 */ 
double sqrt(double);
root = sqrt(2);       /*不需要强制转换运算符就已经将整数2转换成double类型的值2.0 */
 
 
unsigned long int next = 1;


/* rand：返回取值在0~32767之间的伪随机数 */
int rand(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65536) % 32768;
 } 

/* srand:为rand()函数设置种子 */
void srand(unsigned int seed)
{
	next = seed;
 } 
