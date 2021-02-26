/*
 * Example 10.30, Chapter 10 "Optimization", C compiler document
 */

extern int a[];
void f(int i, int j){ int x = a[i]; a[i] = a[j]; a[j] =	x; }

