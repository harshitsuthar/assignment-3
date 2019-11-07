#include<stdio.h>
int main()
{int a,b,c;
printf("enter any three no. to print middle no.");
scanf("%d%d%d",&a,&b,&c);
if((a>b&&b>c)||(b>a&&b<c))
printf("%d",b);
else if((b>a&&a>c)||(c>a&&a>b))
printf("%d",a);
else if((a>c&&c>b)||(c>a&&c<b))
printf("%d",c);
else
printf("enter another no.");
}
