#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TEMPMIN,TEMPMAX,VOLTA;
    scanf("%d %d", &TEMPMIN,&TEMPMAX);
    while(1)
    {
        VOLTA=1;
        TEMPMAX=TEMPMAX-TEMPMIN;
        while(TEMPMIN>0)
        {
            TEMPMIN-= TEMPMAX;
            VOLTA++;

        }
        break;
    }
    printf("%d\n", VOLTA);
    return 0;
}
