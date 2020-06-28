#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
        if(n>=60)
            printf("Pass\n");
    else
        printf("Fail\n");
    return 0;
}
