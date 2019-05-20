struct S {
  int a;
  int b;
  int c;
};

struct S y;

struct S f(struct S x, int ya, int xa)
{
  y.a = ya;
  x = y;
  x.a = xa;
  return x;
}
