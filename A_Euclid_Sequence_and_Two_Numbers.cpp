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
    // write your code here for each test case
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<ll>());

    if (n == 2)
    {
        cout << v[0] << " " << v[1] << '\n';
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            cout << -1 << '\n';
            return;
        }
    }

    ll x = v[0], y = v[1];

    ll a = x, b = y;

    for (int i = 2; i < n; i++)
    {
        if (a % b != v[i])
        {
            cout << -1 << '\n';
            return;
        }
        a = b;
        b = v[i];
    }

    cout << x << " " << y << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Declare any additional variables here

    int t; // number of test cases
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}