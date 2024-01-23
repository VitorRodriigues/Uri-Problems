#include <bits/stdc++.h>

using namespace std;

vector<int> V;

int main() {
    int NC, N, K, P, ultimo;

    cin >> NC;

    for(int i = 1; i <= NC; i++)
    {
        cin >> N >> K;

        for(int j = 0; j < N; j++) {
            V.push_back(j);
        }

        P=1;

        while((int)V.size() > 1) {
            P = P + K - 1;
            P = P % (int) V.size();
            V.erase(V.begin() + P);

        }

        ultimo = V[0];
        cout << "Case " << i<< ": " << ultimo<<endl;

        V.clear();
    }

    return 0;
}