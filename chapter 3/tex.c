
#include<stdio.h>

int main()
{
    int income, tex;
    printf("write ur income is here: ");
    scanf("%d", &income);

    if(income<=250000) tex = 0;
    else if(income> 250000 && income<=500000) tex = 0.05 * (income- 250000);
    else if(income> 500000 && income<=1000000) tex = 0.05 * (500000- 250000) + 0.2 * (income - 500000);
    else tex = 0.05 * (500000- 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);

    printf("ur tex is: %d" , tex);


    return 0;
}