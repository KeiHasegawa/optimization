/*
 * Example 10.23, Chapter 10 "Optimization", C compiler document
 */

struct S { unsigned int a : 1; unsigned int b : 2; };
extern struct S s; int f(void){ return s.a + s.b; }
