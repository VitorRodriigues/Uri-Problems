
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
typedef pair <int, string> is;


/// Crive de Erastóstenes - O(nlog(sqrt(n)))

bitset <1000005> bs;
ll crivosize;
vector <ll> primes;

int save(int N) {
    int ans = 0;

    for (int i = 1; i <= N; i++) {
        ans=(ans+primes[N-i])%i;
    }

    return ans;
}

void sieve(ll n) {
    crivosize = n+1;
    bs.set();
    bs[0] = bs[1] = 0;

    for(ll i = 2; i <= crivosize; i++) {
        if(bs[i]) {
            for(ll j = i*i; j <= crivosize; j += i)
                bs[j] = 0;
            primes.pb(i);
        }
    }
}

bool isprime(ll n) {
    if(n < crivosize)
        return bs[n];
    for(auto i : primes)
        if(n%i == 0)
            return false;
    return true;
}

int main() {

    sieve(32650);

    int NUM;

    while(1) {
        cin>>NUM;
        if(NUM == 0) break;
        cout<<save(NUM)+1<<endl;
    }

    return 0;
}
