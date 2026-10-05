/*
 Step1: Understand the program
Step1:  write the program
Step1:  Decide the programing lang
Step1:  write the program
     Step1:
*/

///////////////////////////////////////////////////////
//
//Step1:Understand the problem statement
//       user is going enter any two integer
//     and we have to perform additon
//
///////////////////////////////////////////////////
/////////////////////////////////////////////////
//step2:write algorithm
/*
start
     Accept first number as no1
      Accept first number as no2
      create variable as Ans to store result
      Perform the addition and store into Ans
      Display the result from Ans
end
*/
////////////////////////////////////////////////
//
//step3:Decide the programing lang
//      we select c prorammming
///////////////////////////////////////////////////

//////////////////////////////////////////////////
//step4:write the program
//
/////////////////////////////////////////////////

#include<stdio.h>

 int main()
 {
   int iValue1 = 0, iValue2 = 0, iResult = 0;

   printf("Enter first Number:\n");
   scanf("%d",&iValue1);

   printf("Enter Second Number:\n");
   scanf("%d",&iValue2);
   
   iResult=iValue1+iValue2;            //Business logic
   printf("Addition is :%d\n",iResult);  
   return 0;
 }