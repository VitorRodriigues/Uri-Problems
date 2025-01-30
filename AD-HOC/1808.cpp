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
    // freopen("input.txt", "r", stdin);
    char v[101];
    int ans = 0;
    double n = 0;

    scanf("%s", &v);

    for (int i = 0; v[i] != '\0'; i++)
    {
        if (v[i] == '1' && v[i + 1] == '0')
            n += 10, i++;
        else
            n += v[i] - '0';
        ans++;
    }

    printf("%.2f\n", n / ans);

    return 0;
}
