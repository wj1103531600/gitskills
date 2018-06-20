/* shellsort:以递增顺序对v[0]、v[1]……v[n-1] 进行排序 */
void shellsort(int v[], int n)
{
	int gap, i, j, temp;
	/*用于控制两个被比较元素之间的距离*/
	for (gap = n/2; gap > 0; gap /= 2 )
		/*用于控制每一个元素*/
		for (i = gap; i < n; i++ )
			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
				temp = v[j];
				v[j] = v[j + gap];
				v[j + gap] = temp;
			}
}