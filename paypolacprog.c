#include <stdio.h>

int main()
{
 char a[5];
 int i;
 printf("enter the string");
 for(i=0;i<=5;i++)
 {
      scanf("%d,&a[i]");
}
for(i=0;i<=5;i++)
{
    if(a[i]=='a')
    {
        a[i]='e';
    }
    }
    for(i=0;i<=5;i++)
    {
        if(a[i]=='e')
        {
            a[i]='a';
        }
    }
    return 0;
}

