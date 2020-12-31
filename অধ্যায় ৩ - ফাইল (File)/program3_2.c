#include <stdio.h>

int main()
{

  FILE *fp;
  char filename[] = "my_file.txt";

  fp = fopen(filename, "w");

  fprintf(fp, "This is a file created by mu program! ");
  fprintf(fp, "I am so happy.\n");

  fclose(fp);

  fprintf(fp, "Second line.\n");

  return 0;
}