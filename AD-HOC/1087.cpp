#include <bits/stdc++.h>

#define ft first
#define sd second
#define pb push_back
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define mkp make_pair
#define ini int i
#define ini int i
#define sz size
#define ll long long int
#define rep(i, a, n) for (i = a; i < n; i++)
#define tam(vet) sizeof(vet) / sizeof(vet[0])
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MAXN (int)1e3 + 5

using namespace std;

int main() {
    //freopen("input.txt", "r", stdin);

    int x1, y1, x2, y2;
    while (scanf("%d %d %d %d", &x1, &y1, &x2, &y2) and x1 + y1 + x2 + y2) {
        if (x1 == x2 && y1 == y2)
            printf("0\n");
        else if ((x2 - x1) == -(y2 - y1) || -(x2 - x1) == -(y2 - y1) || -(x2 - x1) == (y2 - y1) || (x2 - x1) == (y2 - y1))
            printf("1\n");
        else if (x1 == x2 || y1 == y2)
            printf("1\n");
        else
            printf("2\n");
    }
}