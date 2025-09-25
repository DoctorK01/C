#include <stdio.h>

int main()
{
  int age;
  printf("Welcome to ARTO\nPlease Enter your age:");
  scanf("%d", &age);

  char is_indian;
  printf("Are you an Indian(Y/N)\n");
  scanf(" %c", &is_indian);

  if (is_indian == 'Y')
  {
    if (age < 18)
    {
      printf("You are not eligible for driving license,please apply after you turn 18\n");
    }

    else if (age > 90)
    {
      printf(" YOU A SENIOR, so You are not eligible\n");
    }
    else
    {
      printf("You are eligible\n");
    }
  }
  else
  {
    printf("You are not an indian so you cannot apply yet\n");
  }

  printf("Your age is %d\n", age);
  return 0;
}
