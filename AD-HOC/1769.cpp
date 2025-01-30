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

using namespace std;

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    string cpf, ans;
    int x, y;
    while (cin >> cpf)
    {
        int j = 1, k = 9, sumA = 0, sumB = 0, sumD = 0, n;
        for (ini = 0; i < cpf.sz(); i++)
            if (isdigit(cpf[i]))
                ans += cpf[i];
        for (ini = 0; i < ans.sz(); i++)
        {
            cpf = ans[i];
            n = atoi(cpf.c_str());
            if (k)
            {
                sumA += (n * j++);
                sumB += (n * k--);
            }
            sumD += n;
            if (i == 9)
                x = atoi(cpf.c_str());
            if (i == 10)
                y = atoi(cpf.c_str());
        }
        sumD = sumD % 11;
        sumA = sumA % 11;
        sumB = sumB % 11;
        if (sumA == 10)
            sumA = 0;
        if (sumB == 10)
            sumB = 0;
        if (ans.sz() == 9 and !sumD or sumA == x and sumB == y)
            cout << "CPF valido\n";
        else
            cout << "CPF invalido\n";
        ans.clear();
    }
}