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

int main(){
    string S;
 
    while(getline(cin,S)){
        
        if(S[0]=='*')
            break;
        
        set <char> ST;

        stringstream SS(S);
 
        while(SS>>S){
             transform(all(S), S.begin(), ::tolower);
             ST.insert(S[0]);

        }
 
        (ST.size()>1)? cout << "N"<<endl : cout << "Y" << endl;
 
        S.clear();

    }
 
    return 0;
}
