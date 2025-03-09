#include<stdio.h>
void Movezeros(int arr[],int n)
{
    int count=0 ,temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
}
int main()
{
    int arr[20],n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Movezeros(arr,n);
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;
}
