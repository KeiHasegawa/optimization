struct S {
  int a;
  int b;
  int c;
};

struct S f(int x)
{
  return x ? (struct S){1, 2, 3} : (struct S){4, 5, 6};
}
