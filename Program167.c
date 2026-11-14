
#include<stdio.h>
#include<stdlib.h>
float AvgDigits(int iNo)
{
    
    int iDigit = 0;
    int iSum =0;
    int Avg =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
         iNo = iNo / 10;
         Avg = (iSum + iDigit)%iDigit;
       
    }
}
   
int main()
{
    int iValue = 0;
    float fRet =0.0f;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    fRet= AvgDigits(iValue);
    printf("Avg of digit : %f\n",fRet);

    return EXIT_SUCCESS;
}
