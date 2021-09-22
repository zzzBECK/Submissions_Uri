#include <stdio.h>

int main()
{

    int initialDay, inititialHour, initialMin, initialSec, endDay, endHour, endMin, endSec, dia, hora, min, sec, initialTotal, endTotal, total;

    scanf("Dia %d %d : %d : %d Dia %d %d : %d : %d", &initialDay, &inititialHour, &initialMin, &initialSec, &endDay, &endHour, &endMin, &endSec);

    initialTotal = initialSec + (initialMin * 60) + (inititialHour * 60 * 60) + (initialDay * 60 * 60 * 24);

    endTotal = endSec + (endMin * 60) + (endHour * 60 * 60) + (endDay * 60 * 60 * 24);

    total = endTotal - initialTotal;

    dia = total / (60 * 60 * 24);
    total %= (60 * 60 * 24);

    hora = total / (60 * 60);
    total %= (60 * 60);

    min = total / 60;
    total %= 60;

    sec = total;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, min, sec);


    return 0;
}