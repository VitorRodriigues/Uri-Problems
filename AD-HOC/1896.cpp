#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fst first
#define snd second

typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef pair<int, iii> iiii;
typedef pair<int, string> is;

int main()
{
    int n, x, y, z, see;
    while (cin >> n >> x >> y >> z)
    {
        see = 0;
        iii prass(x, {y, z});
        vector<iii> v;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y >> z;
            v.pb({x, {y, z}});
        }
        for (int i = 0; i < (1 << n) and !see; i++)
        {
            if (__builtin_popcount(i) < 2)
                continue;
            int a = 0, b = 0, c = 0;
            for (int j = 0; j < n; j++)
            {
                if ((i >> j) & 1)
                {
                    a += v[j].fst;
                    b += v[j].snd.fst;
                    c += v[j].snd.snd;
                }
            }
            if (iii(a, {b, c}) == prass)
                see = true;
        }
        cout << (see ? "Y" : "N") << endl;
    }
    return 0;
}