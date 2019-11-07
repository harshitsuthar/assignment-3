#include<stdio.h>
int main()
{float p,a,b,c;
printf("enter eqn of line in format of ax+by+c=0 to get it slope or know that it is vertical or not");
scanf("%fx%fy%f=0",&a,&b,&c);
if(b/a==0)
printf("it is vertical");
p=-(a/b);
printf("%f",p);




}
