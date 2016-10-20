#include<stdio.h>
#include<coino.h>
int main()
{
int a,b,c;
printf("\n Enter the values of A,B and C:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c){
printf("A is Greater");
}
else if(b>c){
printf("B is Great");
}
else
printf("Cis great");
return 0;
}
