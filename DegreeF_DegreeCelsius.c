#include<stdio.h> 
int main(){
  float celsius,fahrenheit;
  printf("Enter fahrenheit: ");
  scanf("%f",&fahrenheit);
  celsius= (5.0/9.0)*(fahrenheit-32);
  printf("The Temperature in celcius is %.2f degrees\n",celsius);
  return 0;
}