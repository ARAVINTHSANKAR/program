#include <stdio.h>
int main(void)
{
int a[]={2,2,4,8};
int count=0;
int i;
int x=0;
for(i=0;i<=3;i++)
{
if(a[i]%2==0)
x++;
}
if(x==4)
{
count++;
}
if(a[i]!=2011)
{
a[i]++;
}
printf("%d",count);
}

