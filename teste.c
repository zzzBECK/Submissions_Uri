#include<stdio.h>

void matrix(int n)
{
    int i, j, cnt;
    int m[n][n];

        for (i=0, cnt=1; i<n; i++, cnt++)
        {
            for(j=i; j<n-i; j++)
            {
                m[i][j] = cnt;
                m[n-i-1][n-j-1] = cnt;
                printf("count = %d\n", cnt);
                printf("m[%d-%d-1][%d-%d-1] = %d\n", n, i, n, j, m[n-i-1][n-j-1]);
            }
        }

        for (j=0, cnt=1; j<n; j++, cnt++)
        {
            for(i=j; i<n-j; i++)
            {
                m[i][j] = cnt;
                m[n-i-1][n-j-1] = cnt;
                printf("count = %d\n", cnt);
                printf("m[%d-%d-1][%d-%d-1] = %d\n", n, i, n, j, m[n-i-1][n-j-1]);
            }
        }

        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                if(j!=n-1)
                {
                    printf("%3d ",m[i][j]);
                }
                else
                {
                    printf("%3d\n", m[i][j]);
                }
            }
        }
        printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        matrix(n);
        scanf("%d",&n);
    }
    return 0;
}