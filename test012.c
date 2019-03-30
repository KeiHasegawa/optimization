int g(int); void f(void){ int n = 2; int* p = &n; *p = 1; g(*p); }
