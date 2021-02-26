/*
 * Example 10.28, Chapter 10 "Optimization", C compiler document
 */

struct S { int a; }; void g(struct S);
void f(struct S y){ struct S x = { 1 }; g(x); x = y; g(x); }
