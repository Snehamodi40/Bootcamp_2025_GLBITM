#include <stdio.h>
#include <math.h>

int isPerfectSquare(long long x)
{

    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return 0;
}

int main()
{
    long long x = 36;
    if (isPerfectSquare(x))
        printf("Yes");
    else
        printf("No");
    return 0;
}