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
#define MAXN (int)2e5 + 5
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    ll a;
    cin >> a;
    while(a--)
    {
        int X;
        cin >> X;
        if(X==1)
            cout << 1 << endl;
        else if(X%2==0)
            cout << X/2 << endl;
        else
            cout << (X/2)+1 << endl;
    }
    
    return 0;
}