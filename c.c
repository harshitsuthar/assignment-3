#include<stdio.h>
int main()
{int a,b,c,d,x;
printf("enter five no. in which one of the first four no. will be equal to last one");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
if(a==x&&a!=b&&a!=c&&a!=d)
printf("%d",x);
else if(b==x&&a!=b&&b!=c&&b!=d)
printf("%d",x);
else if(c==x&&c!=a&&c!=b&&c!=d)
printf("%d",x);
else if(d==x&&d!=a&&d!=b&&d!=b)
printf("%d",x);
else
printf("enter another no.");}
