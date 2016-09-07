#include <stdio.h>
#include<string.h>
int main()
{
char a[30];
int i,count=0;
char b,c;
for(i=0;i<=25;i++)
{
scanf("%c",&a[i]);
}
for(i=0;i<=25;i++)
{
if(a[i]==',')
{
    if(tolower(a[i-1])==tolower(a[i+1]))
    {
        count++;
    }
    
}
}
if(count==2)
{
    printf("door opened");
}
else
printf("door closed");
}


