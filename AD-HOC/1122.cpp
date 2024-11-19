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

int n, m, x[50];
bool pos[50], neg[50];
map <ii ,bool> mapa;

bool solve(int i, int w)
{
    if(i >=n && w == m)
        return true;
    else if(i >= n)
        return false;
    if(mapa.count(make_pair(w,i)) != 0)
        return mapa[make_pair(w,i)];
    bool input = false, output = false;
    
    input = solve(i+1, w + x[i]);
    output = solve(i+1, w - x[i]);
    if(input && !output)
        pos[i] = true;
    if(!input && output)
        neg[i] = true;
    if(input && output)
        pos[i] = neg[i] = true;
    return mapa[make_pair(w,i)] = (input || output) ? true : false;

        
}

int main()
{
    //freopen("input.txt", "r", stdin);
    while(scanf("%d %d", &n, &m) and n)
    {
        mapa.clear();
        for(int i = 0; i < n; i++)
            pos[i] = neg[i] = false;
        for(int i = 0; i < n; i++) 
            scanf("%d", &x[i]);
        bool ans = solve(0, 0);
        for(int i = 0; i < n  && ans; i++)
        {
            if(pos[i] && neg[i])
                printf("?");
            else if(pos[i])
                    printf("+");
            else 
                printf("-");
        }
        if(!ans)
            printf("*");
            printf("\n");
        
    }
}