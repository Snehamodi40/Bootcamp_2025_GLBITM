#include<stdio.h>
int countsetbit(int n,int arr[])
{
    int count=0;
    while(n)
    {
        if(arr[n]%2==1)
        {
            count++;
            n=n/2;
        }
    }
    return count;
}
int main(){
    int arr[5],i,n;
    printf("Enter the element");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("%d",countsetbit(arr,n));
    return 0;
}