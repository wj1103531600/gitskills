for (i = 0; i < n; i++)
	for (j = 0; j < m; j++)
		if (a[i] == b[j])
			goto found;
/* û���ҵ���ͬԪ�� */
��
found:
	/* ȡһ������a[i] == b[i]��Ԫ�� */
��

found = 0
for (i = 0; i < n && !found; i++)
	for (j = 0;j < m && !found; j++)
		if (a[i] = b[j])
			found = 1;
if (found)
/* ȡ����a[i-1] == b[j-1]��Ԫ�� */
��
else
/* û���ҵ���ͬԪ�� */
��