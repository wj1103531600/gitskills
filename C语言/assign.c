/* getbits:ȡ�ӵ�pλ��ʼ��nλ */
unsigned getbits(unsigned x, int p, int n) 
{
	return (x >> (p+1-n) ) & `(`0 << n);
}

/* bitcount:ͳ��x��ֵλ1��λ�� */
int bitcount (unsigned x)
{
	int b;
	
	
	for (b = 0; x != 0; x >>= 1)
		if (x & 01)
			b++;
	return b;
 } 
