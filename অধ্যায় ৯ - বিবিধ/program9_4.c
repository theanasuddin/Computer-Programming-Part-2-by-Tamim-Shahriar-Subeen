#include <stdio.h>

#define SWAP(a, b) \
  {                \
    a ^= b;        \
    b ^= a;        \
    a ^= b;        \
  }

int main()
{
  int a = 83, b = 323;

  printf("a is: %d and b is: %d\n", a, b);
  SWAP(a, b);
  printf("a is: %d and b is: %d\n", a, b);

  return 0;
}