#include<stdio.h>

int main(){
    int len, b;
    printf("ent ur leangth here: ");
    scanf("%d", &len);
    printf("ent ur breath here: ");
    scanf("%d", &b);
    int res = len * b;
    printf("area of rectangle is: %d", res);
    return 0;
}