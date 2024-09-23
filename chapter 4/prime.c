#include<stdio.h>

int main()
{
    int n ; 
    printf("write any number here for checking prime: ");
    scanf("%d", &n);
    int res = 1;

    for(int i = 2; i<n; i++){
        if(n%i == 0) {
            res = 0;
            break;
        }
    }
    
    if(res) printf("given numbe %d is a prime number \n", n);
    else printf(" given number %d is not a prime numbere \n", n );

    return 0;
}