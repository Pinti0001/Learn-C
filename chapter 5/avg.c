#include<stdio.h>

int average(int, int, int);

int average(int a, int b, int c){
    return (a+b+c)/3;
}

int main()
{
    int a, b, c;
    printf("enter ur 1st number: ");
    scanf("%d", &a);
    printf("enter ur 2nd number: ");
    scanf("%d", &b);
    printf("enter ur 3rd number: ");
    scanf("%d", &c);

    int x = average(a,b,c);

    printf("the average is: %d", x);
    return 0;
}