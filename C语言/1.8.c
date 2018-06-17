/* power：求底的n次幂； n>=0;第二个版本 */


int power(int base, int n)
{
	int p;
	
	for (n = 1; n > 0; --n )
	    p = p * base;
	return p;  
 } 
