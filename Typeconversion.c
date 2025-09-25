#include<stdio.h> 

int main(){  /*Implicit conversion(Coersion) - C automatically changes one data type to another when needed (e.g., int to float in operations)*/
int a;
float b;
a=2,b=5.0; //Either number should be real
printf("Implicit conversion %f\n",b/a); /*Assignment conversion-when assigning values,the type is converted to match the variables type*/




/*Explicit conversion(casting)- Use(type_name)to explicitly convert a value to a diiferent type(e.g., (float)var ) */
float(a);
printf("Explicit conversion %f\n",a/b);



/*Promotion-Smaller types(like char)are automatically promoted to int in expressions*/
return 0;
}

