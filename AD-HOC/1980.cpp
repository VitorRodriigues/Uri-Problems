#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define all(x) x.begin(), x.end()
#define maxn (int)107

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, pair<int, int>> iii;
typedef pair<int, pair<int, pair<int, int>>> iiii;
typedef long long int ll;

using namespace std;

ll factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    // freopen("input.txt", "r", stdin);
    string s;
    while (cin >> s and s != "0")
    {
        cout << factorial(s.size()) << endl;
    }
}
