#include<stdio.h> //ARITHMETIC OPERATORS or ARITHMETIC INSTRUCTIONS    OA-(LEFT to RIGHT)


int main(){
  int a,b;
  printf("Enter number1\n ");
  scanf("%d",&a);
   printf("Enter number2\n");
   scanf("%d\n",&b);


  printf("%d\n",a+b);         // ADDITION
  printf("%d\n",a-b);         // SUBTRACTION
  printf("%d\n",a*b);       // MULTIPLICATION
  printf("%d\n",a/b);       // DIVISION GETS QUOTIENT as Output 
  printf("%d\n",a%b);       /* Modulus operator to get REMAINDer in integer division*/
 
  
 /*ASSIGNMENT OPERATORS   OA-(RIGHT TO LEFT)

printf("%d"\n,a=b);
printf("%d\n",a+=b);
printf("%d\n",a-=b);
printf("%d\n"a/=b);
printf("%d\n",a%=b);
printf("%d\n"a&=b);
printf("%d\n",a^=b);
printf("%d\n",a|=b);
printf("%d\n",a<<=b);
printf("%d\n"a>>=b);
printf("%d\n",a>>>=b);
printf("%d\n"a<<<=b);


//Unary Operators    OA-(RIGHT TO LEFT)

printf("%d\n",a++); //USE CURRENT VALUE IN THE STATEMENT AND THEN INCREMENT IT (POST INCREMENT)  BY 1//



printf("%d\n",a--);//USE CURRRENT VALUE IN THE STATEMENT AND THEN DECREMENT IT BY 1 (POST DECREMENT ) //


printf("%d\n",+a);


printf("%d\n",++a);//INCREMENT THE VALUE BY 1 AND THEN USE """"""(PRE INCREMENT)


printf("%d\n",-a);//CONVERTS A POSITIVE VALUE TO A NEGATIVE


printf("%d\n",--a);//DECREMENT THE VALUE BY 1 AND THEN USE IN STATEMENT(PRE DECREMENT)


printf("%d\n",~);
printf("%d\n",!);







//Logical Operators   OA-(LEFT TO RIGHT)

printf("%d\n",a&&b);
printf("%d\n",a||b);
printf("%d\n",a!b);



//Relational Operators    OA-(LEFT TO RIGHT)

printf("%d\n",a<=b);
printf("%d\n",a>=b);
printf("%d\n",a<b);
printf("%d\n",a<b);
printf("%d\n",instanceof);



//Bitwise Operators    OA-(LEFT TO RIGHT)

printf("%d\n",a&b);
printf("%d\n",a|b);
printf("%d\n",a^b);


//SHIFT OPERATORS OA-(LEFT TO RIGHT)

printf("%d\n",a>>b);
printf("%d\n",a>b);
printf("%d\n",a<<<b);



//TERNARY OPERATORS


printf("%d\n",a?b);
printf("%d\n",a:b);



//SHORTHAND OPERATORS

printf("%d\n",a+=b); //ADDITION ASSIGNMENT SHORTHAND OPERATOR
printf("%d\n",a-=b);//SUBTRACTION ASSIGNMENT SHORTHAND OPERATOR
printf("%d\n",a*=b);//MULTIPLICATION ASSIGNMENT SHORTHAND OPERATOR
printf("%d\n",a/=b);//DIVISION ASSIGNMENT SHORTHAND OPERATOR
printf("%d\n",a%=b);//REMAINDER ASSIGNMENT SHORTHAND OPERATOR













//OPERATORS ASSOCIATIVITY*/
return 0;
}