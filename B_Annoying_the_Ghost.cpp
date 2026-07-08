#include <bits/stdc++.h> // include all standard headers
#include <numeric>
using namespace std;
#define ll long long
#define ld long double
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    c = a;
    sort(c.begin(), c.end());
    for (int i = 0; i < n; i++)
    {
        if (c[i] > b[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    ll swaps = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] <= b[i])
            {
                swaps += j;
                a.erase(a.begin() + j);
                break;
            }
        }
    }
    cout << swaps << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Declare any additional variables here

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}