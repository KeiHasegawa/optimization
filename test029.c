void g(int, int*, int*);
void f(void)
{ int a = 0; int b = 1; int c = 2; g(a,&b,&c); ++a; g(a,&b,&c); }
