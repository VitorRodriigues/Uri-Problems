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

int g[9][9];

bool minigrid(int x, int y){
  set <int> ans;
  for(int i = x; i < x+3; i++)
    for(int j = y; j < y+3; j++)
      ans.insert(g[i][j]);
  return sz(ans) == 9;
}

int main(){
  int t, cnt = 1;
  cin >> t;
  while(t--){
    for(int i = 0; i < 9; i++)
      for(int j = 0; j < 9; j++)
        cin >> g[i][j];
    bool ans = true;
    for(int i = 0; i < 9; i++){
      set <int> check;
      for(int j = 0; j < 9; j++)
        check.insert(g[i][j]);
      ans &= sz(check) == 9;
    }
    for(int i = 0; i < 9; i++){
      set <int> check;
      for(int j = 0; j < 9; j++)
        check.insert(g[j][i]);
      ans &= sz(check) == 9;
    }
    ans &= minigrid(0, 0) & minigrid(0, 3) & minigrid(0, 6)
        & minigrid(3, 0) & minigrid(3, 3) & minigrid(3, 6)
        & minigrid(6, 0) & minigrid(6, 3) & minigrid(6, 6);
    cout << "Instancia " << cnt++ << endl;
    cout << (ans ? "SIM" : "NAO") << endl;
    cout << endl;
  }
  return 0;
}
