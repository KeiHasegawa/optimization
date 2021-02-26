/*
 * Example 10.14, Chapter 10 "Optimization", C compiler document
 */

int g(int); void f(void){ int n = 2; int* p = &n; g(*p); }
