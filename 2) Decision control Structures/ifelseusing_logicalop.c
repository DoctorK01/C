#include<stdio.h>

int main(){
  int num;
  printf("Enter number: ");
  scanf("%d",&num);

  if( num>=1 && num!=0){
    printf("Num is a natural and positive number");
  }
  else{
    printf("Num is a real number ");
  }
  return 0;
}
  