#include <stdio.h>

char to_upper(char c)
{
  return c & 95;
}

char to_lower(char c)
{
  return c | 32;
}

int main()
{

  char *str = "AbabidqhiHDHJDFpowkndkasd";

  for (int i = 0; i < 25; i++)
  {
    printf("Uppercase: %c, ", to_upper(str[i]));
    printf("Lowercase: %c\n", to_lower(str[i]));
  }

  return 0;
}