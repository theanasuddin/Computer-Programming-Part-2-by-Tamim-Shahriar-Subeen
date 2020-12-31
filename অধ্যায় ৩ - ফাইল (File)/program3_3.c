#include <stdio.h>

int main()
{
  FILE *fp;
  char filename[] = "files//my_file.txt";

  fp = fopen(filename, "w");

  fprintf(fp, "This is a file created by my program! ");
  fprintf(fp, "I am so happy.\n");

  fclose(fp);

  fp = fopen(filename, "a");

  fprintf(fp, "Second line.\n");

  fclose(fp);

  return 0;
}