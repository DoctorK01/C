// Float double and long double for Decimals . values
// Double = 8 Bytes    LongDouble = 12 Bytes       Float = 4 Bytes

#include <stdio.h>

void main()
{
  printf("The value of float is %d       \n", sizeof(float));
  
  printf("The value of double is %ld     \n", sizeof(double));
  
  printf("The value of long double is %ld\n", sizeof(long double));
  
}