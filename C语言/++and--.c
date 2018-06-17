/* squeeze:从s中删除掉c */

void squeeze(char s[], int c)
{
	int i,j;
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s [j] ='\0';
 } 
 
 /* 上述的if语句等价于下面 */
 if (s[i] != c) {
 	s[j] = s[i];
 	j++;
 } 
 
 
 /* strcat: 把字符串t连接到字符串s的后面；s必须有足够大的空间 */
 void strcat(char s[], char t[])
 {
 	int i,j;
 	
 	
 	i = j = 0;
 	while (s[i] != '\0')      /* 找到s的末尾 */
		i++;
	/* 将t中的字符逐个拷贝到s后面时，用后缀运算符 ++ 作用与i与j，以保证在循环过程中i与j均指向下一个位置 */ 
	while ( (s[i++] = t[j++]) != '\0')    /* 拷贝t */ 
		; 
  } 
