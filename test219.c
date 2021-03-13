inline int f(int a, int b, int c)
{
  return a > 0 ? b : c;
}

int g()
{
  return f(-1, 10, 20);
}



