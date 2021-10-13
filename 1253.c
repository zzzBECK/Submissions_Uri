#include <stdio.h>
#include <string.h>

int main()
{
    int teste, qtd_posicoes, i;
    char str[50];

    scanf("%d", &teste);

    while (teste != 0)
    {
        teste--;

        scanf("%s", &str);
        scanf("%d", &qtd_posicoes);

        for (i= 0; i < strlen(str); i++)
        {
            if (str[i] - qtd_posicoes < 65)
            {
                str[i] -= 90 - qtd_posicoes;
            }
            else if (str[i] - qtd_posicoes > 90)
            {
                str[i] -= 65 - qtd_posicoes;
            }
            else
                str[i] -= qtd_posicoes;
        }

        printf("%s\n", str);

    }


    return 0;
}