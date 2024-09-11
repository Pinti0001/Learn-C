#include<stdio.h>

int main(){
    int c;
    printf("write ur temrature in °c: ");
    scanf("%d", &c);
    float f = (9/5)*c + 32;
    printf("%d°c to farenhifght: %f)", c, f);
    return 0;
}