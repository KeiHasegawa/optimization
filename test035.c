/*
 * Example 10.32, Chapter 10 "Optimization", C compiler document
 */

void g(int**); void f(void){ int n = 7; int* p = &n; g(&p); }
