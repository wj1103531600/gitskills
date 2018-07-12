static char buf[BUFSIZE];	/* 供ungetch函数使用的缓冲区 */
static int bufp = 0;		/* 缓冲区buf的下一个自由位置 */

int getch(void) {…}

void ungetch(int c) {…}