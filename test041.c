/*
 * Example 10.37, Chapter 10 "Optimization", C compiler document
 */

void g(int*);
void f(void)
{ int a[3]; int* p = &a[0]; for ( int i = 0 ; i != 3 ; ++i ) a[i] = i; g(p); }
