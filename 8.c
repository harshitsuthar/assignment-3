#include<stdio.h>
int main()
{int a,b,c;
printf("enter three no. in which two are equal and get output different one");
scanf("%d%d%d",&a,&b,&c);
if(a==b&&b!=c)
printf("%d",c);
else if(b==c&&b!=a)
printf("%d",a);
else if(c==a&&c!=b)
printf("%d",b);
else
printf("enter another no.");}
