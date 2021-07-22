#include <stdio.h>
#define ip int *;

int main(int argc char *argv[])
{
  int *a;  // a is an integer pointer
  ip b;    // b is also an integer pointer
  ip c, d; // c is an integer pointer
  // but, d is only an integer

  return 0;
}