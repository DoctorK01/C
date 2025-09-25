#include<stdio.h>

int main(){
  int age;
  printf("Welcome to ARTO\nPlease Enter your age:");
  scanf("%d",&age);
  if(age>=18){
    printf("You are eligible for driving license");
  }
  if(age<18){
    printf("You are not eligible ");
  }
  printf("Your age is %d\n",age);
  return 0;
}