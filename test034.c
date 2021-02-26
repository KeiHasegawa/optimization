/*
 * Example 10.31, Chapter 10 "Optimization", C compiler document
 */

void g(int); void f(void){ int a; int *p; p = &a; a = 3; g(*p); }
