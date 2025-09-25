#include<stdio.h>

int main(){
  int num1,num2,num3;
  printf("Enter number 1: ");
  scanf("%d",&num1);

  printf("Enter number 2: ");
  scanf("%d",&num2);

  printf("Enter number 3: ");
  scanf("%d",&num3);

  if(num1>num2 && num1>num3){
    printf("Num1 is the greatest number");
  }
  else if(num2>num1 && num2>num3){
    printf("Num2 is the greatest number");
  }
  else{
    printf("Num3 is the greatest number");
  }
  return 0;
}