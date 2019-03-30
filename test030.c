void g(void); struct S { int a; }; void h(struct S);
void f(struct S y){ struct S x = { 1 }; g(); x = y; h(x); }
