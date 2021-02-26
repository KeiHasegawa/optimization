/*
 * Example 10.17, Chapter 10 "Optimization", C compiler document
 */

void g(double, int, int);
void f(double d){ int a = (int)d; int b = a; g(d,a,b); }
