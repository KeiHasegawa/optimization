/*
 * Example 10.18, Chapter 10 "Optimization", C compiler document
 */

int n; int g(int); void f(void){ n = 2; n = g(3); ++n; }
