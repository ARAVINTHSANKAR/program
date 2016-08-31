#include <stdio.h>

int main()
{
 char a[17]="today is a bad day";
 char b[17];
 int i;
for(i=0;i<=17;i++)
{
    if(a[i]=='a')
    {
      a[i]='e';
    }
    }
    for(i=0;i<=17;i++)
    {
    b[i]=a[i];
    }
b[0]=(toupper(b[0]));
b[6]=(toupper(b[6]));
b[9]=(toupper(b[9]));
b[11]=(toupper(b[11]));
b[15]=(toupper(b[15]));
for(i=0;i<=17;i++)
{
printf("%c",b[i]);
 }
 return 0;
}
