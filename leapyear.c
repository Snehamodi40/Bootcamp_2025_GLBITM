#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
            {
              printf("this is a leap year");  
            }
            else
            {
                 printf("this is not a leap year");
            }
        }
    
        else{
            printf("this is a leap year");
        }
        
    }
    else
    {
        printf("this is not a leap year");
    }
}