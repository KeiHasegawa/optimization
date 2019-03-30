void g(void);
void f(void)
{
  int i = 1;
  if ( *(char*)&i ) g();
  if ( *(char*)&i ) g();
}
