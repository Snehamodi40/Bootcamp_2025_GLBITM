#include <stdio.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
double getMedian(int a[], int size1, int b[], int size2) {
    int totalSize = size1 + size2;
    int c[size1 + size2];
    for (int i = 0; i < size1; i++)
        c[i] = a[i];
    for (int i = 0; i < size2; i++)
        c[size1 + i] = b[i];
    qsort(c, totalSize, sizeof(int), compare);
    int mid1 = totalSize / 2;
    int mid2 = mid1 - 1;
  
    return (c[mid1] + c[mid2]) / 2.0;
}
int main() {
  
    int a[] = { 1, 12, 15, 26, 38 };
    int b[] = { 2, 13, 17, 30, 45 };
    
    int size1 = sizeof(a) / sizeof(a[0]);
    int size2 = sizeof(b) / sizeof(b[0]);

    printf("%f", getMedian(a, size1, b, size2));
    
    return 0;
}