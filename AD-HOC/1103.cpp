#include <bits/stdc++.h>

#define ft first
#define sd second
#define pb push_back
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define mkp make_pair
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
    int h1,m1,h2,m2,ini,end;
    while(1)
    {
        scanf("%d%d%d%d",&h1, &m1, &h2, &m2);
        if(h1==0 && m1==0 && h2==0 && m2==0)break;


         ini = h1*60+m1;


        end = h2*60 + m2;

        if(end >ini)printf("%d\n", end-ini);
        else printf("%d\n",24*60-(ini-end));

    }

    return 0;
}
