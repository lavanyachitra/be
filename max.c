#include<stdio.h>
int main()
{
int a[50],s,i ,l;
printf("\n enter the size of the array:");
scanf("%d",&s);
printf("\n enter %d elements of the array:",s);
for(i=0;i<s;i++)
scanf("%d",&a[i]);
l=a[0];
for(i=1;i<s;i++)
{
if(l<a[i])
l=a[i];
}
printf("\n largest element:%d",l);
return 0;
}


