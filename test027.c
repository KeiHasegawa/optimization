/*
 * Example 10.24, Chapter 10 "Optimization", C compiler document
 */

int f(void){ static int s; return s++; }
