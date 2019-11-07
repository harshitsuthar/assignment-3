#include<stdio.h>
int main()
{int a,b,c;
printf("enter three side of triangle to know that rather A is 90 Degree or not");
scanf("%d%d%d",&a,&b,&c);
if(a*a==b*b+c*c)
printf("it is 90 degree");
else
printf("it is not 90 degree");
}
