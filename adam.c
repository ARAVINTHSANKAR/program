#include <stdio.h>
int main(void)
{
int num,square1,revsqr=0,square2,revnum=0,digit;
scanf("%d",&num);
square1=num*num;
while(num!=0)
    {
    digit=num%10;
    num=num/10;
    revnum=revnum*10+digit;
    }
square2=revnum*revnum;
while(square2!=0)
    {
    digit=square2%10;
    square2=square2/10;
    revsqr=revsqr*10+digit;
    }
if(revsqr==square1)
printf("adam num");
else
printf("no");
	return 0;
}

