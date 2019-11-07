#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,f,g,h,k,l,n;
printf("enter quadratic equation to get it's root");
scanf("%f%f%f",&a,&b,&c);
k=-(b*b-4*a*c);
l=sqrt(k)/(2*a);
n=-b/(2*a);
f=b*b-4*a*c;
g=(-b+sqrt(f))/(2*a);
h=(-b-sqrt(f))/(2*a);
if(k>0)
printf("roots are imaginary=%f+i%f,%f-i%f",n,l,n,l);
else if(g==h)
printf("roots are real and equal%f",g);
else if(g!=h)
printf("roots are real and unequal%f%f",g,h);}
