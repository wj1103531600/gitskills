/* getbits:取从第p位开始的n位 */
unsigned getbits(unsigned x, int p, int n) 
{
	return (x >> (p+1-n) ) & `(`0 << n);
}

/* bitcount:统计x中值位1的位数 */
int bitcount (unsigned x)
{
	int b;
	
	
	for (b = 0; x != 0; x >>= 1)
		if (x & 01)
			b++;
	return b;
 } 
