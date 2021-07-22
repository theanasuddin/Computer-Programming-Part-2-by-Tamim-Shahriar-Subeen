#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Please enter one argument (your name)\n");
    return 1;
  }
  printf("Welcome %s\n", argv[1]);

  return 0;
}