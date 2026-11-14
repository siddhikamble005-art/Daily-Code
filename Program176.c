      
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckPallindrom()
{
    int iNo=0;
    int iRev=0;
    int iDigit=0;
while (iNo != 0)
{
    iDigit = iNo % 10;
        iRev = ((iRev * 10)+iDigit);
        iNo = iNo / 10;
}

    
       
     }
     
   
int main()
{
        int iTem =0;
        int iRet=0;
        int iValue=0;
        
        if(iRet == iTem)
        {
            printf("num is p");
        }
        else
        {
            printf("num is not p");
        }
    printf("Enter Number:\n");
    scanf("%d", &iValue);
    iRet = CheckPallindrom(iValue);

    return EXIT_SUCCESS;
}