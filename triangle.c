#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three sides");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c)
    {
        if((b+c)>a)
        {
            if((a+c)>b)
            {
             printf("this is a triangle");
            }
        }
    }
    else{
        printf("this is not a triangle");
    }
    return 0;
} 