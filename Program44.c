#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1,int iNo2)
{
    float iAns;
   iAns = (iNo1 + iNo2)/2;
   return iAns;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float iResult = 0.0f;

    printf("Enter first num :");
    scanf("%d",&iValue1);

    printf("Enter second num :");
    scanf("%d",&iValue2);

    iResult = Average(iValue1,iValue2);

    printf("The Average of numbers is :%d ",iResult);

}