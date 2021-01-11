#include <stdio.h>

int main()
{
  char letter;

  printf("Enter a letter to convert: ");
  scanf("%c", &letter);

  if (letter >= 65 && letter <= 90)
  {
    printf("Small letter of %c is: %c\n", letter, letter | 32);
  }
  else if (letter >= 97 && letter <= 122)
  {
    printf("Capital letter of %c is: %c\n", letter, letter ^ 32);
  }
  else
  {
    printf("Invalid letter!");
  }

  return 0;
}