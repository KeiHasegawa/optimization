/*
 * Example 10.7, Chapter 10 "Optimization", C compiler document
 */

int f(int a, int b, int c, int d, int e)
{ return (a+b+(a+b-c)*(d+e))*((a+b-c)*(d+e)-e); }
