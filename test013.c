/*
 * Example 10.13, Chapter 10 "Optimization", C compiler document
 */

int f(void){ int n = 2; int* p = &n; *p = 1; return *p; }
