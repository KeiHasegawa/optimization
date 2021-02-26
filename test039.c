/*
 * Example 10.35, Chapter 10 "Optimization", C compiler document
 */

struct S { int m, n; };
struct S f(int x){ return x ? (struct S){1, 2} : (struct S){7, 8}; }
