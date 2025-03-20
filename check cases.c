#include<stdio.h>
int main()
{
    int n;
    printf("enter character");
    scanf("%d",&n);
    if(n>=65 && n<=90)
    {
        printf("character is uppercase");
    }

    else if(n>=97 &&  n<=122)
    {
        printf("character is lowercase");
    }
    else 
    {
printf("character is special case");
    }
    
}