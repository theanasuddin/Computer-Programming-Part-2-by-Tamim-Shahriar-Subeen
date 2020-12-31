#include <stdio.h>

int main()
{
  FILE *fp_math, *fp_bangla, *fp_english, *fp_average;

  char *math_file = "files//math.txt";
  char *bangla_file = "files//bangla.txt";
  char *english_file = "files//english.txt";
  char *average_file = "files//average.txt";

  fp_math = fopen(math_file, "r");
  fp_bangla = fopen(bangla_file, "r");
  fp_english = fopen(english_file, "r");
  fp_average = fopen(average_file, "a");

  int roll, math_mark, bangla_mark, english_mark;
  char line[50];
  float average_mark;

  for (int i = 0; i < 10; i++)
  {
    fgets(line, 50, fp_math);
    sscanf(line, "%d %d", &roll, &math_mark);

    fgets(line, 50, fp_bangla);
    sscanf(line, "%d %d", &roll, &bangla_mark);

    fgets(line, 50, fp_english);
    sscanf(line, "%d %d", &roll, &english_mark);

    average_mark = (math_mark + bangla_mark + english_mark) / 3.00;

    fprintf(fp_average, "%d %0.2f\n", roll, average_mark);
  }

  return 0;
}