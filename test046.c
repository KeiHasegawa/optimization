void g(double);

void f(int n, int i)
{
  double a[n];
  a[i] = 4.4;
  goto lab4;
  a[i] = 5.5;
lab4:
  a[i] = 6.6;
  g(a[i]);
}
