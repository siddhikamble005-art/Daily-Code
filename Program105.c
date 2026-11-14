#include<stdio.h>
#include<stdlib.h>
void CheckPerfect(int iNo)
{

int iCnt=0, iSum=0;

for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum==iNo)
    {
        printf("it is perfect number\n");
    }
    else
    {
         printf("it is not perfect number\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    CheckPerfect(iValue);
   
    
    return EXIT_SUCCESS;
}
