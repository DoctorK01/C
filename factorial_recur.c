#include<stdio.h>

int fact(int n){
  if(n==0 || n==1){
    return 1;
  }
  else{
    return n*fact(n-1);
  }
}

int main(){

  int n,factorial;
  printf("Enter element:\n");
  scanf("%d",&n);
  factorial=fact(n);
  printf("The factorial of %d is %d",n,factorial);


  return 0;
}