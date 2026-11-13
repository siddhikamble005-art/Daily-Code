#include<stdio.h>
#include<stdlib.h>
int Summation(int iNo)

{
    int iCnt=0;
    int iSum=0;

    for (iCnt=1; iCnt<=iNo; iCnt++)
    {
     iSum = iSum + iCnt;

    }
    return iSum;
}

int main()
{
    int ivalue=0;
    int iRet=0;
    printf("enter the frequency\n");
    scanf("%d",&ivalue);

    iRet=Summation(ivalue);
    printf("Summetion is %d\n",iRet);
    return EXIT_SUCCESS;
}