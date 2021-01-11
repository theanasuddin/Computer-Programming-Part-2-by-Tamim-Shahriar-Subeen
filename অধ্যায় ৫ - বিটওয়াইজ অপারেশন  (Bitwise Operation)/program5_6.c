#include <stdio.h>

int main()
{

  int n1, n2 = 1, n3;

  printf("Enter the number: ");
  scanf("%d", &n1);

  n3 = n1 & n2;
  if (n3 == 1)
  {
    printf("%d is odd\n", n1);
  }
  else
  {
    printf("%d is even\n", n1);
  }

  return 0;
}