void g(int*);

void f(int i)
{
  int a[10];
  a[i] = 1;
  goto label;
  a[i] = 2;
 label:
  a[i] = 3;
  g(a);
}
