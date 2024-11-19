#include <bits/stdc++.h>

#define ft first
#define sd second
#define pb push_back
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define mkp make_pair
#define ini int i
#define ini int i
#define sz size
#define ll long long int
#define rep(i, a, n) for (i = a; i < n; i++)
#define tam(vet) sizeof(vet) / sizeof(vet[0])
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MAXN (int)1e3 + 5

using namespace std;

int main()
{

    int N,VET[3],Pico,PIC0,PIC1,i;

    while(1)
    {
        scanf("%d", &N);
        if(N == 0) break;
        Pico = 0;
        scanf("%d", &VET[0]);
        scanf("%d", &VET[1]);
        if(N == 2)
        {
            if(VET[0] != VET[1]) Pico = 2;
        }
        else
        {
            PIC0=VET[0];
            PIC1=VET[1];

            for(i = 2; i < N; i++)
            {
                scanf("%d", &VET[2]);
                if(((VET[1]>VET[0]) && (VET[1]>VET[2])) || ((VET[1]<VET[0]) && (VET[1]<VET[2]))) ++Pico;
                VET[0]=VET[1];
                VET[1]=VET[2];
            }
            if ((PIC0>PIC1 && PIC0>VET[2]) || (PIC0<PIC1 && PIC0<VET[2])) ++Pico;

            if ((VET[2]>VET[0] && VET[2]>PIC0) || (VET[2]<VET[0] && VET[2]<PIC0)) ++Pico;
        }
        printf("%d\n", Pico);
    }
    return 0;
}