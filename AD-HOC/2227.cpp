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

    int a, v, x, y, cont[101];
    int n = 1;
    while (cin >> a >> v and a and v)
    {
        for (int i = 0; i < 101; i++)
            cont[i] = 0;
        for (int i = 0; i < v; i++)
        {
            cin >> x >> y;
            cont[x]++;
            cont[y]++;
        }
        int maior = 0;
        cout << "Teste " << n << "\n";
        for (int i = a; i > 0; i--)
        {
            if (cont[i] > maior)
                maior = cont[i];
        }
        int z = 0;
        for (int i = 1; i <= a; i++)
        {
            if (cont[i] == maior)
                z++;
        }
        int q = 1;
        for (int i = 0; i <= a; i++)
        {
            if (q < z && cont[i] == maior)
            {
                q++;
                cout << i << " ";
            }
            else if (q == z && cont[i] == maior)
            {
                cout << i << " " << "\n";
                break;
            }
        }
        n++;
        cout << "\n";
    }
}