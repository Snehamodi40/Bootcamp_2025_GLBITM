#include<stdio.h>
int print(int n )
{
    if(n==0) {
    return 0;
    }
    printf("%d",n);
         print(n-1);
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
   
        print(n);
    
    return 0;
}
