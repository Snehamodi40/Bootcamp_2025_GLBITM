#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is the largest number");
    }
    else if(b>c)
    {
        printf("b is largest number");
    }
    else
    {
        printf("c is largest number");
    }
    return 0;
}