#include<stdio.h>
#include<conio.h>
{
int digit=0,n;
scanf("%d",&n);
while(n!=0)
{
n=n/10;
digit++;
printf("count=%d",digit);
return 0;
}
