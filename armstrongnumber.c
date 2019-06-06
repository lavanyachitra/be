#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int number,s=0,r=0,c=0,temp;
printf("enter the number");
scanf("%d",&number);
temp=number;
while(number!=0)
{
r=number%10;
c=pow(r,3)
s=s+c;
number=number/10;
}
if(s==temp)
printf("yes the given number is a armstrong");
else
printf("no the given number is not  a armstrong");
}
