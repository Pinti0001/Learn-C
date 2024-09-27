#include<stdio.h>

void star(int);

void star(int n){
    for(int i =0; i<n; i++){
        /// if using this then i<n*2 hoga
        // if(i%2==1) continue;
        // for(int j=0; j<=i; j++){
        //     printf("*");
        // }
        for(int j=0; j<2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n = 3;
    star(n);
    


    return 0;
}