#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
#define vpll vector<pair<ll, ll>>
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        bool hasB = false;
        for (char c : s)
        {

            if (c == 'B')
            {
                hasB = true;
            }
        }

        f(i, 0, q)
        {
            long long a;
            cin >> a;
            if (!hasB)
            {
                cout << a << (i == q - 1 ? "" : " ");
                continue;
            }
            int sec = 0;
            int machine = 0;
            while (a > 0)
            {
                if (s[machine] == 'A')
                {
                    a--;
                }
                else
                {
                    a++;
                }
                machine = (machine + 1) % s.size();
            }
            cout << machine + 1 << (i == q - 1 ? "" : " ");
        }
        cout << endl;
    }
}
