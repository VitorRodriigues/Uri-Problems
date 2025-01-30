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
    // freopen("input.txt", "r", stdin);
    int c, p;
    scanf("%d", &c);

    if (c <= 10)
        p = 7;
    else if (c >= 11 && c <= 30)
        p = (c - 10) * 1 + 7;
    else if (c >= 31 && c <= 100)
        p = (c - 30) * 2 + 27;
    else if (c >= 101)
        p = (c - 100) * 5 + 167;

    printf("%d\n", p);
}