/*
 * Example 10.25, Chapter 10 "Optimization", C compiler document
 */

struct S { int m; int n; }; void g(struct S);
void f(void){ struct S x, y = { 1, 2 }; x = y; g(x); }
