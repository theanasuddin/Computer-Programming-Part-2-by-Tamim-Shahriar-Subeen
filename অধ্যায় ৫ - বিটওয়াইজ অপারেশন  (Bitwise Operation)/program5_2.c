#include <stdio.h>

int main()
{

  int m, x, n;

  while (1)
  {
    printf("Enter your number (enter 0 to exit): ");
    scanf("%d", &n);

    if (n == 0)
    {
      break;
    }
    printf("How many bits you want to shift left?: ");
    scanf("%d", &x);

    m = n << x;

    printf("The number is: %d\n\n", m);
  }

  return 0;
}