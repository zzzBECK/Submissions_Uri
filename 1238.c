#include <stdio.h>
#include <string.h>

int main()
{
    int teste, i;
    char str1[50], str2[50], maior_str;
    
    scanf("%d", &teste);

    while (teste != 0)
    {
        teste--;
        scanf("%s %s", &str1, &str2);

        if (strlen(str1) > strlen(str2))
            maior_str = strlen(str1);
        else
            maior_str = strlen(str2);
        
        for (i = 0; i < maior_str; i++)
        {
            if (strlen(str1) > i)
                printf("%c", str1[i]);
            if (strlen(str2) > i)
                printf("%c", str2[i]);
        }
        printf("\n");
    }

    return 0;
}