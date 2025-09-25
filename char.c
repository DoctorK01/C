#include <stdio.h>

void main()
{
   
  // char Name = 'N';
  // printf("The numeral value for name is %d\n",Name);
  //   char Name = 78;
  // printf("The character value for %d is %c\n",Name,Name);

 for (int i = 0; i < 127; i++) {
    if (i <= 32 || i == 127)
        printf("The Character value for %d is (non-printable)\n", i);
    else
        printf("The Character value for %d is %c\n", i, i);
}


}