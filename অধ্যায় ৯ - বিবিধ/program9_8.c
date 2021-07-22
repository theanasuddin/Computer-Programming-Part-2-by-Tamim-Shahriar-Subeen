#include <stdio.h>

enum DAY
{
  SUNDAY,
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY
};

int main()
{
  enum DAY today = SUNDAY;

  switch (today)
  {
  case SUNDAY:
    printf("Today is Sunday. It is a work day.\n");
    break;

  case MONDAY:
    printf("Today is Monday. It is a work day.\n");
    break;

  case TUESDAY:
    printf("Today is Tuesday. It is a work day.\n");
    break;

  case WEDNESDAY:
    printf("Today is Wednesday. It is a work day.\n");
    break;

  case THURSDAY:
    printf("Today is Thursday. It is a work day.\n");
    break;

  case FRIDAY:
    printf("Today is Friday. It is holiday.\n");
    break;

  case SATURDAY:
    printf("Today is Saturday. It is holiday.\n");
    break;

  default:
    break;
  }
  return 0;
}