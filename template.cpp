#include <bits/stdc++.h>
#include <stdio.h>

#define msg "Hello this is meet kumar\n"
#define BEGIN \
  int main()  \
  {
#define END }
#define square(x) ((x) * (x))
#define max(x, y) ((x) > (y) ? (x) : (y))
#define min(x, y) ((x) < (y) ? (x) : (y))
#define isLower(ch) (ch >= 97 && ch <= 122)
#define isUpper(ch) (ch >= 65 && ch <= 90)
#define space(n)                \
  {                             \
    for (int i = 0; i < n; i++) \
      cout << endl;             \
  }
#define sswap(dtype, a, b) \
  {                        \
    dtype t;               \
    t = a;                 \
    a = b;                 \
    b = t;                 \
  }

#define show(x) (cout << (x));

typedef int *ptr;
#define ch char *

using namespace std;

BEGIN
int u = 13;
ptr q = &u;
cout << *q;
space(1);
ch r, s = 'l';
r = &s;
cout << r;
space(1);
cout << msg;
cout << square(5);
space(1);
cout << max(10, 15);
space(1);
cout << min(6, 16);
space(1);
cout << isLower('a');
space(1);
cout << isLower('H');
space(1);
cout << isUpper('B');
space(1);
cout << isUpper('b');
space(1);
int a = 10, b = 30;
sswap(int, a, b);
show(a);
space(1);
show(b);
END
#undef space
