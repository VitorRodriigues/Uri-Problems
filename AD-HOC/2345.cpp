#include <bits/stdc++.h>

using namespace std;

#define fst first
#define snd second
#define pb push_back
#define sz(x) x.size()
#define tam(vet) sizeof(vet) / sizeof(vet[0])
#define all(x) x.begin(), x.end()
#define endl "\n"
#define maxn (int)1007

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, pair<int, int>> iii;
typedef long long int ll;

int fs(int &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c == '-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c > 47 && c < 58); c = getchar())
        number = number * 10 + c - 48;
    if (negative)
        number *= -1;
    return number;
}

int main()
{
    int n;
    vi v;
    for (int i = 0; i < 4; i++)
    {

        scanf("%d", &n);
        v.pb(n);
    }
    sort(all(v));

    printf("%d\n", abs((v[0] + v[3]) - (v[1] + v[2])));
    return 0;
}
