/* power����׵�n���ݣ� n>=0;�ڶ����汾 */


int power(int base, int n)
{
	int p;
	
	for (n = 1; n > 0; --n )
	    p = p * base;
	return p;  
 } 
