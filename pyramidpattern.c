#include <stdio.h>

int main()
{
    int i,j,n;

    // first loop for printing rows
    printf("enter the value of n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {

        // second loop for printing character in each rows
        for (int j = 0; j <n-i-1; j++) {
            printf(" ");
        }
        for(j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
