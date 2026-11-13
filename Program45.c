#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1,int iNo2)
{   
    float fResult=0.0f;

    fResult=((float)iNo1+(float)iNo2); //TYPECASTING
    return fResult;
}

int main()
{
    int iValue1 = 0, iValue2=0;
    float fResult=0.0f;
    
    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    fResult=Average(iValue1,iValue2);

    printf("Average is:%f\n",fResult);
    return 0;
}