#include <bits/stdc++.h>

using namespace std;

#define fst first
#define snd second
#define pb push_back
#define sz(x) x.size()
#define tam(vet) sizeof(vet) / sizeof(vet[0])
#define all(x) x.begin(), x.end()
#define endl "\n"
#define maxn (int)1e4 + 7

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
    // freopen("input.txt", "r", stdin);
    int n, x, y, cnt = 1, z = 0;
    while (cin >> n and n)
    {
        printf("Teste %d\n", cnt++);
        string s, ss;
        cin >> s >> ss;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            if ((x + y) % 2 == 0)
                cout << s << endl;
            else
                cout << ss << endl;
        }

        cout << endl;
    }

    return 0;
}
