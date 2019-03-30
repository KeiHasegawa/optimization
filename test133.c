extern void g(const char*);

void f(void)
{
  if ( 0 )
    g("abcd");
  else
    g("efgh");
}
