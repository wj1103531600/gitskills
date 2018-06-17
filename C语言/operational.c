/* 二元算术运算符: +, -, *, /, % */
if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
	printf("%d is a leap year\n", year);
else
	printf("%d is not a leap year\n", year );
	
for ( i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
	s[i] = c; 
