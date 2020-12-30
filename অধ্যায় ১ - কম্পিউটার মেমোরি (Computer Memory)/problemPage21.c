#include <stdio.h>

int isDigit(char c);

int main()
{
  char c;

  printf("Please enter a character: ");
  c = getchar();

  if (isDigit(c) == 1)
  {
    printf("It's a digit.");
  }
  else
  {
    printf("Not a digit.");
  }

  return 0;
}

int isDigit(char c)
{
  if (c >= 48 && c <= 57)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}