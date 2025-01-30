#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, l, a;
    scanf("%d %d %d %d", &n, &m, &l, &a);
    printf((n <= m && n <= l && n <= a) ? "S\n" : "N\n");

    return 0;
}