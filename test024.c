/*
 * Example 10.21, Chapter 10 "Optimization", C compiler document
 */

void g(int*, int*); void f(void){ int i[2]; g(&i[0],&i[1]); }
