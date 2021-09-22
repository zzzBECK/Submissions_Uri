#include <stdio.h>

int main()
{
    int tempo, hr = 0, min = 0;

    scanf("%d", &tempo);

    while (tempo > 60)
    {
        min++;
        tempo -= 60;
    }

    while (min > 60)
    {
        hr++;
        min -=60;
    }

    printf("%d:%d:%d\n", hr, min, tempo);
    

    return 0;
    
}