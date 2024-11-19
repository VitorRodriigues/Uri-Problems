#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, r1, i,Y=0,X=0;

    while(1)
    {
        scanf("%d",&N);

        if(N==0)break;


        for(i=1; i<=N; i++)
        {
            scanf("%d",&r1);
            if(r1==1)X++;
            if(r1==0)Y++;

        }
        printf("Mary won %d times and John won %d times\n",Y,X);
        Y=0;
        X=0;
    }
    return 0;
}
