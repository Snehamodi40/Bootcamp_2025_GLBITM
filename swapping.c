#include<stdio.h>
int main()
{
    int a , b;
    printf("enter values of a and b");
    scanf("%d%d",&a,&b);
    printf("before swapping the values are %d %d\n", a,b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("after swapping the values %d %d",a,b);
    return 0;
}