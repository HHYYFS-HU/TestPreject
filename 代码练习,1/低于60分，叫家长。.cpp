#include<stdio.h>
int main()
{
    int a,b,c,sum,average;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    average=sum/3;
    if(average>=60)
        printf("NO");
    if(average<60)
        printf("YES");
    return 0;
}
