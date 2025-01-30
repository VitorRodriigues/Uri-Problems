#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, b, iv, ev, lvl, ans, cnt = 1;
    string pokemon;
    cin >> t;

    while (t--)
    {
        cin >> pokemon >> lvl;
        cout << "Caso #" << cnt++ << ": " << pokemon << " nivel " << lvl << endl;
        for (int i = 0; i < 4; i++)
        {
            cin >> b >> iv >> ev;
            ans = ((iv + b + sqrt(ev) / 8) * lvl) / 50 + 5;
            if (!i)
                cout << "HP: " << (int)((iv + b + sqrt(ev) / 8 + 50) * lvl) / 50 + 10 << endl;
            else if (i == 1)
                cout << "AT: " << ans << endl;
            else if (i == 2)
                cout << "DF: " << ans << endl;
            else if (i == 3)
                cout << "SP: " << ans << endl;
        }
    }
}