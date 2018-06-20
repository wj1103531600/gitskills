/* shellsort:�Ե���˳���v[0]��v[1]����v[n-1] �������� */
void shellsort(int v[], int n)
{
	int gap, i, j, temp;
	/*���ڿ����������Ƚ�Ԫ��֮��ľ���*/
	for (gap = n/2; gap > 0; gap /= 2 )
		/*���ڿ���ÿһ��Ԫ��*/
		for (i = gap; i < n; i++ )
			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
				temp = v[j];
				v[j] = v[j + gap];
				v[j + gap] = temp;
			}
}