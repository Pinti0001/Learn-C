#include<stdio.h>

int main(){
    int r, h;
    printf("give ur radius: ");
    scanf("%d", &r);
    printf("give ur hight: ");
    scanf("%d", &h);
    float pi = 3.14;
    printf("area of a circle with radius r = %d is %f: \n", r, pi*r*r);
    printf("area of a circle with radius r = %d is %f: ", r, pi*r*r*h);
    return 0;
}