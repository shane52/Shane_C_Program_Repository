#include<stdio.h>
int main()
{
int a,b,sum,minus,mult,Divide;
printf("Enter the first number= ");
scanf("%d",&a);

printf("Enter the second number= ");

scanf("%d",&b);
sum=a+b;
minus= a-b;
mult= a*b;
Divide= a/b;


printf("Answer is = %d , %d, %d, %d", sum,minus,mult,Divide);

return 0;
}