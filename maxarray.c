#include<stdio.h>
int main()
{
    int arr[100],i,n;
printf("array size");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int max=arr[0];
for(i=0;i<n;i++)
  {
if(max<arr[i])
    max=arr[i];
  }
     printf("maximum element is:%d",max);
  }