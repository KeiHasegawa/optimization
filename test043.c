/*
 * Example 10.39, Chapter 10 "Optimization", C compiler document
 */

void g(int, int);
void f(int x, int y)
{ int* ip = &x; int* iq = &y; iq = ip; g(x,y); *iq = 5; g(x,y); }
