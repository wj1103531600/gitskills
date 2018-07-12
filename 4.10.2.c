/* qsort���Ե���˳���v[left]�� v[right] �������� */
void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);

	if (left >= right)	/* ��������������Ԫ����������������ʲôҲ���� */
		return;
	swap(v, left, (left + right) / 2);	/* �ѷ���Ԫ���Ƶ�v[0] */
	last = left;
	for (i = left + 1; i <= right;i++)	/* ���� */
		if ��v[i] < v[left] )
			swap(v, ++last, i);
	swap(v, left, right);	/* �ָ�����Ԫ�� */
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);



}	


/* swap:����v[i]��v[j]��ֵ */
void swap(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}