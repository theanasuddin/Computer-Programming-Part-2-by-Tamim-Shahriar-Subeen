#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp = fopen("files//github.png", "r");

  if (fp == NULL)
  {
    perror("File opening failed");
    return EXIT_FAILURE;
  }

  fseek(fp, 0, SEEK_END);

  printf("File Size: %ld bytes\n", ftell(fp));
  printf("File Size (KiloByte): %ld\n", ftell(fp) / 1024);

  fclose(fp);

  return 0;
}