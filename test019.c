/*
 * Example 10.40, Chapter 10 "Optimization", C compiler document
 */

#include <stdarg.h>

void g(int);

void f(char *fmt, ...)
{
  va_list ap;
  va_start(ap,fmt);
  char* p = fmt;
  g(va_arg(ap,int));
  g(*p);
}
