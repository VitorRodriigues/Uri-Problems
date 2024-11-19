#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define all(x) x.begin(), x.end()
#define maxn (int)1007
#define mod 1e9 + 7

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, pair<int, int>> iii;
typedef pair<int, pair<int, pair<int, int>>> iiii;
typedef long long int ll;

int main()
{
	//freopen("input.txt", "rt", stdin);

	int n, m, ans;
	while (cin >> n and n)
	{
		m = n;
		ans = n;
		int sm;

		while (m != 1)
		{

			sm = (m%2 ==0)? 0.5*m : 3 * m + 1;
			
			ans = max(ans, sm);
				
				m = sm;
		}
		cout << ans << endl;
	}
}