/* qsort：以递增顺序对v[left]… v[right] 进行排序 */
void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);

	if (left >= right)	/* 若数组所包含的元素数少于两个，则什么也不做 */
		return;
	swap(v, left, (left + right) / 2);	/* 把分区元素移到v[0] */
	last = left;
	for (i = left + 1; i <= right;i++)	/* 分区 */
		if （v[i] < v[left] )
			swap(v, ++last, i);
	swap(v, left, right);	/* 恢复分区元素 */
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);



}	


/* swap:交换v[i]与v[j]的值 */
void swap(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}