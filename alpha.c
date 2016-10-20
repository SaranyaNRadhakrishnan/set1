#include<stdio.h>
#include<conio.h>
int main()
{
char a;
scanf("%c",&a);
if(isdigit(a))
{
printf("number");
}
else
{
printf("character");
}
return 0;
}
