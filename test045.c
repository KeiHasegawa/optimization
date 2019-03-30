struct S {
  char c[3];
};

struct S x = { "a" };

void g(const struct S*);

void f(void)
{
  struct S y = { "bc" };
  g(&x);
  g(&y);
  x = y;
  g(&x);
  g(&y);
}
