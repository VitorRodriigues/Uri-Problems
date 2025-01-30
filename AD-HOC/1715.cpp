#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Jog[101][101], N, M, quant = 0, quant2 = 0, k = 0, i, j;
    scanf("%d %d", &N, &M);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &Jog[j][i]);
        }
    }
    for (i = 0; i < N; i++)
    {

        quant = 0;
        for (j = 0; j < M; j++)
        {
            if (Jog[j][i] != 0)
                quant++;
        }
        if (quant == M)
            quant2++;
    }
    printf("%d\n", quant2);
    return 0;
}