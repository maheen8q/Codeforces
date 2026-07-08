#include <bits/stdc++.h> // include all standard headers
#include <numeric>
using namespace std;
#define ll long long
#define vll vector<long long>
#define read(v)       \
    for (auto &x : v) \
        cin >> x;
#define write(v)            \
    for (const auto &x : v) \
        cout << x << ' ';   \
    cout << endl;
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
    ll n, x, y, k;
    cin >> n >> x >> y >> k;
    if (x > y)
        swap(x, y);
    ll ans = min(y - x, n + x - y);

    if (n == 2 || n == 3)
    {
        cout << 1 << endl;
        return;
    }

    cout << ans + k << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; // number of test cases
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}