#include<stdio.h>

int main(){
  int age;
  printf("Welcome to ARTO\nPlease Enter your age:");
  scanf("%d",&age);
  if(age<=18){
    printf("You are not eligible for driving license\n");
  }
  else if(age>90){
    printf("You are a senior,you cannot apply\n");
  }
  else{
    printf("You are eligible\n");
  }
  printf("Your age is %d\n",age);
  return 0;
}


