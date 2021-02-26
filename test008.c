/*
 * Example 10.8, Chapter 10 "Optimization", C compiler document
 */

int x, y;
void f(int b){ int a = b + x; b = a - y; x = b + x; y = a - y; }
