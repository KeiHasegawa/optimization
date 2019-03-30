extern int a[];
void f(int i, int j){ int x = a[i]; a[i] = a[j]; a[j] =	x; }

