/* binsearch: ��v[0] <=[1]<=v[2]<=����<=v[n-1]�в���x */
int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else		/* �ҵ���ƥ���ֵ */
			return mid;
	}
	return -1;      /* û�в鵽 */
}

