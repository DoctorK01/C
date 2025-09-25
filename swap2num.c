#include <stdio.h>

int main()
{
  int num1, num2, temp;
  printf("Enter num1: ");
  scanf("%d", &num1);
  printf("Enter num2: ");
  scanf("%d", &num2);

  // After swapping//

  temp = num1;
  num1 = num2;
  num2 = temp;
  printf("After swapping num1 is %d and num2 is %d\n", num1, num2);
  return 0;
}