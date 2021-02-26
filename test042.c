/*
 * Example 10.38, Chapter 10 "Optimization", C compiler document
 */

void g(int); void f(int i, int j){ g((i++) > (j++) ? (i++) : (j++)); }
