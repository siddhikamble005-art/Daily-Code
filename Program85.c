/*
       operation &&
-----------------------------------
 result1    result2    final result
 -----------------------------------
  True      True         
  True      False
  False     True
  false     True
  False     False
 ----------------------------------



*/
#include<stdio.h>
#include<stdlib.h>
 void CheckDivisible(int iNo)
 {
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("Divisible by 3 and 4\n");
    }
    else
    {
        printf("Not Divisible by 3and 4\n");
    }

 }
int main()
{
    int iValue=0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);
    
    return EXIT_SUCCESS;
}