#include <bits/stdc++.h>

#define ft first
#define sd second
#define pb push_back
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define mkp make_pair
#define sz size
#define ll long long int
#define rep(i, a, n) for (i = a; i < n; i++)
#define tam(vet) sizeof(vet) / sizeof(vet[0])
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define endl '\n'
#define MAXn(int) 1e3 + 5
#define maxn(int) 1e4 + 5
using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);


	int n;
	while(cin >> n and n)
	{
		int sum = 0;
		for(int i = 1; i + sum <= n; i++)
			sum+=i;
		cout << sum << " " << n-sum << endl;
	}

	return 0;
}