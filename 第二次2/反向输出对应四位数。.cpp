#include<stdio.h>
int main()
{ long int x,x1,x2,x3,x4,y; 
scanf("%ld",&x);
x1=x/1000;
x2=x/100%10;
x3=x/10%10;
x4=x%10;
y=x4*1000+x3*100+x2*10+x1;
printf("%ld",y);
}
