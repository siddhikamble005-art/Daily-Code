
#include<stdio.h>
#include<stdlib.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}
int SumDigit(int iNo)
{
    int iDigit = 0;
    int iSum =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}
   
int main()
{
    int iValue = 0, iSum =0, iCount =0;
    float fAvg =0.0f;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

     iSum = SumDigit(iValue);
    iCount = CountDigits(iValue);
    fAvg = (float)iSum /(float)iCount;

    printf("Num of digit : %d\n",iCount);
    printf("Sum of digit : %d\n",iSum);
    printf("Avg of digit : %d\n",fAvg);

    return EXIT_SUCCESS;
}