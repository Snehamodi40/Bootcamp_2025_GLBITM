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
int min=arr[0];
for(i=0;i<n;i++)
  {
if(min>arr[i])
    min=arr[i];
   }
   printf("minimum element is: %d",min);
   
}