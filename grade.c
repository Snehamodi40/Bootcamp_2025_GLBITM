#include <stdio.h>
 
int main()
{
    char grd;
 
    printf("Input the grade :");
    scanf("%c", &grd);
    switch(grd)
    {
    case 'E':
        printf("Excellent");
        break;
    case 'V':
        printf("Very Good");
        break;
    case 'G':
        printf("Good");
        break;
    case 'A':
        printf("Average");
        break;
    case 'F':
        printf("Fails");
        break;
    default :
        printf("Invalid grade");
        break;
    }
        return 0;
    }