for (i = 0; i < n; i++)
	for (j = 0; j < m; j++)
		if (a[i] == b[j])
			goto found;
/* 没有找到相同元素 */
…
found:
	/* 取一个满足a[i] == b[i]的元素 */
…

found = 0
for (i = 0; i < n && !found; i++)
	for (j = 0;j < m && !found; j++)
		if (a[i] = b[j])
			found = 1;
if (found)
/* 取满足a[i-1] == b[j-1]的元素 */
…
else
/* 没有找到相同元素 */
…