inline int f(int a, int b, int c)
{
  return a <= 0 ? b : c;
}

int g()
{
  return f(0, 10, 20);
}



