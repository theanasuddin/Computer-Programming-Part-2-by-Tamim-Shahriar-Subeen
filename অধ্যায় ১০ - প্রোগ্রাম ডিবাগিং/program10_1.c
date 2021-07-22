#include <stdio.h>

int add(int a, int b)
{
  return a * b;
}

int main()
{
  int length, i, sum = 0, tmp;

  printf("Enter number of integers: ");
  scanf("%d", &length);

  for (i = 0; i < length; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &tmp);
    sum = add(sum, tmp);
  }

  printf("The average is: %lf\n", (double)sum / length);

  return 0;
}
