#include<stdio.h>

int sum(int, int);

int sum(int a, int b){
    a = 5;
    return a+b;
}

int main()
{
    int x = 4, y = 5;
    int res = sum(x,y);

    printf("the sum is: %d\n", res);
    printf("the sum is: %d\n", x+y);
    printf("the value of x is: %d\n", x);

    // yha sum fn me a ki vale change krne se x ki value ko koi fark nhi pdega because yha x ki value ja rhi he refrence nhi 

    return 0;
}