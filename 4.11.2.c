x = max(p + q, r + s);
/* ¿ÉÌæ»»³É */
x = ((p + q) > (r + s) ? (p + q) : (r + s));

max(i++, j++);		/* ´í */


#define square(x) x*x		/* ´í */



#undef getchar
int getchar(void) {¡­}

#define dprint(expr) printf(#expr"=%g\n",expr)
dprint(x / y)
printf("x/y""=%g\n", x / y);