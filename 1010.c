#include <stdio.h>

int main()
{
    int prod1, num1, prod2, num2;
    float price1, price2;

    scanf("%d %d %f", &prod1, &num1, &price1);
    scanf("%d %d %f", &prod2, &num2, &price2);

    printf("VALOR A PAGAR: R$ %.2f\n", (num1 * price1) + (num2 * price2));

    return 0;
    
}