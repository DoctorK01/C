  //TYPE DECLARATION INSTRUCTION can also use Double etc//
  // %c,%d,%f etc are used except ARRAY and STRINGS//
#include<stdio.h>

int main(){
  int a;

  printf("Enter number: "); 
  scanf("%d",&a);  /*%d used for integer which is a format specifier and &a used for giving address of variable same for others as well */

  float dec;
  printf("Enter decimal: ");
  scanf("%f",&dec);

  
  char c=getchar();
  printf("Enter a character: ");
  scanf("%c",&c);

  printf("The integer input is %d\n",a);
  printf("The float input is %.2f\n",dec);
  printf("The character input is %c\n", c);
  return 0;   

}
  