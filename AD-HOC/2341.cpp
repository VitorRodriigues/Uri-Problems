#include <bits/stdc++.h>

using namespace std;

#define fst first
#define snd second
#define pb push_back
#define sz(x) x.size()
#define tam(vet) sizeof(vet) / sizeof(vet[0])
#define all(x) x.begin(), x.end()
#define endl "\n"
#define maxn (int)1e3 + 5

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, pair<int, int>> iii;
typedef long long int ll;

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
using namespace std;
int compare(const void *x, const void *y)
{
	return (*(int *)x - *(int *)y);
}

int main()
{
	//freopen("input.txt", "r", stdin);
	int v[1001] = {0};
	int n, k, q;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &q);
		v[q - 1] += 1;
	}
	qsort(v, k, sizeof(int), compare);
	printf("%d\n", v[0]);
	return 0;
}
