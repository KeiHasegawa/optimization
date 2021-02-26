/*
 * Example 10.33, Chapter 10 "Optimization", C compiler document
 */

void g(double);
void f(int n, int j){ double a[n]; g(1.0); a[j] = 2.0; g(a[j]); }
