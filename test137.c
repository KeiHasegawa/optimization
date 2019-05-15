struct A {
  int x;
};

struct B {
  int y;
  struct A a;
};

struct C {
  struct B b;
  char gap[20];
  struct A a;
};

void g(struct B*);

void f(struct C src)
{
  struct B dst, dst2;
  dst = src.b;
  dst.a = src.a;
  dst2 = dst;
  g(&dst2);
}
