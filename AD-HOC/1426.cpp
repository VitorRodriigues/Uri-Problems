#include <bits/stdc++.h>

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

using namespace std;

int matriz[12][12];

int main()
{
	int n, i, j;

	scanf("%d", &n);

	while (n--)
	{
		memset(matriz, 0, sizeof matriz);

		for (i = 0; i < 9; i += 2)
			for (j = 0; j <= (i + 1); j += 2)
				scanf("%d", &matriz[i][j]);

		for (i = 0; i < 8; i += 2)
		{
			for (j = 0; j <= (i + 1); j += 2)
			{
				matriz[i + 2][j + 1] = (matriz[i][j] - matriz[i + 2][j] - matriz[i + 2][j + 2]) / 2;
				matriz[i + 1][j] = matriz[i + 2][j] + matriz[i + 2][j + 1];
				matriz[i + 1][j + 1] = matriz[i + 2][j + 1] + matriz[i + 2][j + 2];
			}
		}

		for (i = 0; i < 9; ++i)
		{
			for (j = 0; j < (i + 1); ++j)
			{
				printf("%d", matriz[i][j]);
				if (j != i)
					printf(" ");
			}
			printf("\n");
		}
	}

	return 0;
}