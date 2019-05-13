struct A {
  int x;
};

struct B {
  int y;
  struct A a;
};

struct C {
  struct A a;
  struct B b;
};

void g(struct B*);

void f(struct C c)
{
  struct B b = c.b;
  b.a = c.a;
  g(&b);
}
