#include<stdio.h>

int fab(int);

int fab(int n){
    if(n<=0) return 0;
    else if(n==1) return 1;

    return fab(n-1) + fab(n-2);
}

int main()
{
    int n ;
    printf("entr ur no.: ");
    scanf("%d",&n);

    int x = fab(n);
    printf("%dth fabonacci number is %d", n, x);

    return 0;
}