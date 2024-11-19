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
    //freopen("input.txt", "r", stdin);
    int k, x, y, n, m;
    while (cin >> k and k)
    {
        cin >> n >> m;
        for (int i = 0; i < k; i++)
        {
            cin >> x >> y;
            if (x == n || y == m)
                cout << "divisa\n";
            else if (x > n && y > m)
                cout << "NE\n";
            else if (x > n && y < m)
                cout << "SE\n";
            else if (x < n && y > m)
                cout << "NO\n";
            else if (x < n && y < m)
                cout << "SO\n";
        }
    }
}
