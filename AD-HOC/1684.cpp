#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define all(x) x.begin(), x.end()
#define maxn (int)1e5+7
#define mod 1e9 + 7

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, pair<int, int>> iii;
typedef pair<int, pair<int, pair<int, int>>> iiii;
typedef long long int ll;


vector<int> g[maxn];
int see[maxn], dist[maxn];

int n, p, q;

int par[maxn];

bool eul(int r)
{
	bool ans = 1;
	for(int i = 0; i < r; i++)
		ans &= par[i]%2==0;
	return ans;
}


int main()
{
//	freopen("input.txt", "rt", stdin);
	int n, m;
	scanf("%d", &n);
	while(n--)
	{	
		
	
		scanf("%d %d", &p, &q);
		for(int i = 0; i < p; i++)
			par[i] = 0;
		for(int i = 0; i < q; i++)
		{
			int x, y;
			scanf("%d%d", &x, &y);
			par[x]++,par[y]++;
		}

		printf("%s\n", (eul(p) == false)? "No" : "Yes");
	}
	
}