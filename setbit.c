#include<stdio.h>
int setBit(int n)
{
    int count=0;
    while(n)
    {
        if(n%2==1)
        
        count++; 
        n=n/2;   
    }
      return count;
}
int main()
{
      int n;
      printf("Enter the no");
      scanf("%d",&n);

      printf("%d",setBit(n));
      return 0;
}