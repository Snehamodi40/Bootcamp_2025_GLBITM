#include<stdio.h>
int main()
{
 int n,i,temp=0;
 printf("enter number");
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
 {
    if(n%i==0)
    {
        temp++;
        break;
    }
 }
    if(temp==0)
     {
    printf("number is prime");
     }
    else
    {
    printf("number is not prime");
    }
return 0;
}