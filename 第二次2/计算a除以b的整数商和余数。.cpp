#include<stdio.h>
int main()
{
    long int a,b,c,d;
    scanf("%ld%ld",&a,&b);
    c=a%b;
    d=a/b;
    printf("%ld %ld",d,c);
    return 0;
}
