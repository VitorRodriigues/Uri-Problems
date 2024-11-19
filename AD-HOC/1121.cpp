#include <bits/stdc++.h>

#define ft first
#define sd second
#define pb push_back
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define mkp make_pair
#define ini int i
#define inj int j
#define sz size
#define ll long long int
#define rep(i, a, n) for (i = a; i < n; i++)
#define tam(vet) sizeof(vet) / sizeof(vet[0])
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MAXN (int)1e5 + 5
using namespace std;

typedef pair<int, ii> iii;

int main()
{
    char MA[101][101],CMD[50001],D;
    int N,M,S,i,j,L,C,X1,Y1,cont;
    while(1)
    {
        cont=0;
        scanf("%d %d %d",&N,&M,&S);
        if(N==0 && M==0 &&S==0)break;
        for(i=0; i<N; i++)
        {
            scanf("%s",MA[i]);
            for(j=0; j<M; j++)
            {
                if(MA[i][j]=='N' || MA[i][j]=='S'|| MA[i][j]=='O'|| MA[i][j]=='L')
                {
                    L=i;
                    C=j;
                    D=MA[i][j];
                }
            }

        }
        scanf("%s", CMD);
        for(i=0; i<S; i++)
        {
            if(CMD[i]=='D')
            {
                if(D=='N')D='L';
                else if(D=='L')D='S';
                else if(D=='S')D='O';
                else if(D=='O')D='N';
            }
            if(CMD[i]=='E')
            {
                if(D=='N')D='O';
                else if(D=='L')D='N';
                else if(D=='S')D='L';
                else if(D=='O')D='S';
            }
            if(CMD[i]=='F')
            {
                X1=L;
                Y1=C;
                if(D=='N')X1--;
                if(D=='L')Y1++;
                if(D=='S')X1++;
                if(D=='O')Y1--;
                if(X1>=0&&X1<N&&Y1>=0&&Y1<M&&MA[X1][Y1]!='#')
                {
                    L=X1;
                    C=Y1;
                    if(MA[L][C]=='*')
                    {
                        cont++;
                        MA[L][C]='.';
                    }
                }
            }
          }
    printf("%d\n",cont);
    }
    return 0;
}
