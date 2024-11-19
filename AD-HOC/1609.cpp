#include <bits/stdc++.h>
using namespace std;

set <int> S;

int main()
{
    int N, M,X;

    cin>>N;

    for(int i=0;i<N;i++)
    {
        cin>>M;
       for(int J=0; J<M;J++)
       {
           cin>>X;
           S.insert(X);
       }
       cout << S.size()<<endl;
       S.clear();
    }

    return 0;
}
