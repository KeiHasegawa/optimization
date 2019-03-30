float* g(int); struct S { int n; float* v; };
struct S f(int n){ struct S s; s.n = n; s.v = g(n); return s; }
