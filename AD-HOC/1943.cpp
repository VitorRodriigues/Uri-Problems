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

int main()
{
    int N;
    cin >> N;
    if (N == 1)
        cout << "Top 1" << endl;
    if (N > 1 && N <= 3)
        cout << "Top 3" << endl;
    if (N > 3 && N <= 5)
        cout << "Top 5" << endl;
    if (N > 5 && N <= 10)
        cout << "Top 10" << endl;
    if (N > 10 && N <= 25)
        cout << "Top 25" << endl;
    if (N > 25 && N <= 50)
        cout << "Top 50" << endl;
    if (N > 50 && N <= 100)
        cout << "Top 100" << endl;

    return 0;
}
