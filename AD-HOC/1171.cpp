#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back
#define fst first
#define snd second


typedef long long int ll;
typedef unsigned long long int ull;
typedef vector <int> vi;
typedef pair <int, int> ii;
typedef pair <int, ii> iii;
typedef pair <int, iii> iiii;

int main()
{
    int n,i,j,ara[2001],k, t;
    
    scanf("%d", &n);
    
    for(k=0; k<2001; k++) {
        ara[k]=0;
    }
    
    for(i=0; i<n; i++) {
        scanf("%d", &j);
        ara[j]=ara[j]+1;
    }
    
    for(i=0; i<2001; i++) {
        if(ara[i]!=0)
        {
            printf("%d aparece %d vez(es)\n", i, ara[i]);
        }
    }
}