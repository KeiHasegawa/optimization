void g(char*);

int f(void)
{
  char a[] = "hello";  /* erasable string literal */
  g(&a[0]);
  return sizeof "world";  /* erasable string literal */
}
