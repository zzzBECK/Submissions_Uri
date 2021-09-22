#include <stdio.h>

int main()
{
    double r, n = 3.14159, a;

    scanf("%lf", &r);
    
    a = n * r * r;

    printf("A=%.4lf\n", a); 

    return 0;
    
}