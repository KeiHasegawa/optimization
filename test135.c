struct S {
  int i;
  char c[1024];
  double d;
};

struct T {
  char cc[3];
  struct S s;
  char ccc[5];
};

struct T array[10];

void g(char*, char*, char*);

void f(int i)
{
  g(array[i].cc, array[i].s.c, array[i].ccc);
}
