#include<stdio.h>
int main(){
    int n,original,result=0,rem;
    printf("enter the value of number");
    scanf("%d",&n);
    original=n;
    while(original!=0){
       rem= original%10;
       result+=rem*rem*rem;
       original/=10;
    }
    if(n==result){
        printf("number is armstrong");
    }
    else{
        printf("number is not armstrong");
    }
    return 0;
}