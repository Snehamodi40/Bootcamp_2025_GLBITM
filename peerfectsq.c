#include <stdio.h>
int main() {
   int n,i;
   printf("enter the number");
   scanf("%d",&n);
   for(i=1;i< (n/2)+1;i++){
       if(n== (i*i))
       {
           printf("number is perfect square");
             return 0;
       }
   }
       printf("number is not a perfect sqaure");
}
