#include<stdio.h>

void change(int*);

void change(int* x){
    *x = 10* (*x);
}

int main()
{
    int x = 9;
    change(&x);
    printf("%d\n",x);

    return 0;
}