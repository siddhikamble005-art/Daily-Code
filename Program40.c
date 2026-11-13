#include<stdio.h>
#include<stdlib.h>
int main()
{
   int iValue1=0, iValue2=0, iResult=0;

   printf("Enter First Value:");
   scanf("%d",&iValue1);

   printf("Enter Second Value:");
   scanf("%d",&iValue2);

  if(iValue1 > iValue2)
  {
    printf("Max value is :%d",iValue1);
  }
  else
  {
    printf("Max value is: %d",iValue2);
  }
   return EXIT_SUCCESS;
}

