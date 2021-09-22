#include <stdio.h>

int main()
{
    double salary, total;
    char name[20];

    scanf("%s %lf %lf", &name, &salary, &total);

    printf("TOTAL = R$ %.2f\n", salary + (0.15 * total));

    return 0;
    
}