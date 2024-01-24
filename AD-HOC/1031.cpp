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

#include <stdio.h>

int re(int n, int k) {
    int r = 0;
    for (int i = 1; i < n; i++)
        r = (r + k) % i;

    return r;
}

int main() {
    //freopen("input.txt", "r", stdin);
    int n;

    while (cin >> n and n) {

        int y = 1;

        for (;;) {
            if (re(n, y) != 11)
                y++;
            else
                break;
        }

        printf("%d\n", y);
    }

    return 0;
}
