/*
 * Example 10.9, Chapter 10 "Optimization", C compiler document
 */

int x, y;
void f(int a, int b, int c){ x = a + b; a = a - c; b = b + c; y = a + b; }
