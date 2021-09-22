#include <stdio.h>

int main()
{
    double x;
    int y, i;
    int notas[6] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[6] = {100, 50, 25, 10, 5, 1};

    scanf("%lf", &x);

    x *= 100.00;
    y = x;

    printf("NOTAS:\n");

    for (i = 0; i < 6; i++)
    {
        printf("%d nota(s) de R$ %.2f\n", (y / notas[i]), (notas[i] / 100.00));
        y = y % notas[i];
    }

    printf("MOEDAS:\n");

    for (i = 0; i < 6; i++)
    {
        printf("%d moeda(s) de R$ %.2f\n", (y / moedas[i]), (moedas[i] / 100.00));
        y = y % moedas[i];
    }


    return 0;
}