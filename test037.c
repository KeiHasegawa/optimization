void g(int*); void h(void);
void f(void){ int a; int* p = &a; g(p); a = 3; h(); g(p); }
