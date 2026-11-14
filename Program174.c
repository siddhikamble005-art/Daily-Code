
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
float AvgDigits(int iTotal, int iFrequency)
{
   float fAns =0.0f;
   fAns = (float)iTotal/(float)iFrequency;

   fAns;
}
   
int main()
{
    int iValue = 0, iSum =0, iCount =0;
    float fAvg =0.0f;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

     iSum = SumDigit(iValue);
    iCount = CountDigits(iValue);
    
    fAvg = AvgDigits(iSum,iCount);

    printf("Num of digit : %d\n",iCount);
    printf("Sum of digit : %d\n",iSum);
    printf("Avg of digit : %2f\n",fAvg);

    return EXIT_SUCCESS;
}