#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ara[5], num[5];
  int i, j, n;

  for (i = 0; i < 5; i++)
  {
    printf("please enter the number of students in class %d: ", i + 1);
    scanf("%d", &n);
    num[i] = n;

    // now allocate memory
    ara[i] = (int *)malloc(sizeof(int) * n);

    if (ara[i] == NULL)
    {
      printf("Memory allocation failed\n");
      return 1;
    }

    for (j = 0; j < n; j++)
    {
      printf("Please enter the mark for student %d: ", j + 1);
      scanf("%d", &ara[i][j]);
    }
  }

  // now print the results
  printf("Output\n");
  for (i = 0; i < 5; i++)
  {
    printf("Class %d: ", i + 1);
    for (j = 0; j < num[i]; j++)
    {
      printf("%4d", ara[i][j]);
    }
    printf("\n");
  }

  return 0;
}