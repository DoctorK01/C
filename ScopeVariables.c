#include <stdio.h>

int fun();
int var = 10;

int main()
{
  int var = 3;
  printf("%d\t", var);
  fun();
}

int fun()
{
  printf("%d", var);
}
