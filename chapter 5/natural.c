#include<stdio.h>

int nat(int);

int nat(int n){
    if(n==1) return 1;

    return nat(n-1) + n;
    // 1+2+3+4+. . . . + n-1 + n
}

int main()
{
    int n =11;
    int res = nat(n);

    printf("first %d natura nuber's sum is : %d", n,res);

    return 0;
}