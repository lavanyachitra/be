#include<stdio.h>
int main()
{
int l,h,i,f,t;
printf("enter the two numbers:");
scanf("%d %d",&l,&h);
if(l>h)
{
t=l;
l=h;
h=t;
}
printf("prime numbers between %d and %d are:",l,h);
while(l<h)
{
f=0;
for(i=2;i<=l/2;++i)
{
if(l%i==0)
{
f = 1;
break;
}
}
if(f==0)
printf("%d",l);
++l;
}
return 0;
}
