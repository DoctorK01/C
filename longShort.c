#include<stdio.h>
#include<limits.h>

int main(){
  int VAR1=INT_MIN;
  int VAR2=INT_MAX;
printf("Range of signed integer is from: %d to %d\n",VAR1,VAR2);
 
unsigned int v1=0;
unsigned int v2=UINT_MAX;
printf("Range of unsigned integer is from: %u to %u\n",v1,v2);

short int i1=SHRT_MIN;
short int i2=SHRT_MAX;
printf("Range of short signed integer is from: %d to %d\n",i1,i2);

printf("size of  integer is %d\n",sizeof(int));
printf("size of long integer is %lu\n",sizeof(long int));
printf("size of long long integer is %llu\n",sizeof(long long int));
// printf("size of character is %lu\n",sizeof(int));
// printf("size of long integer is %lu\n",sizeof(int));
// printf("size of long character is %lu\n",sizeof(int));
// printf("size of long integer is %lu\n",sizeof(int));
// printf("size of long integer is %lu\n",sizeof(int));
// printf("size of long integer is %lu\n",sizeof(int));
// printf("size of long integer is %lu\n",sizeof(int));
// printf("size of long integer is %lu\n",sizeof(int));
// printf("size of long integer is %lu\n",sizeof(int));





  return 0;
}









































// #include<stdio.h>

// int main(){

//   printf("%d",sizeof(long int));


//   return 0;
// }
