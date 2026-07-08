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
    int n;
    cin >> n;

    if (n == 2)
    {
        cout << "1 2 1 1 2 2 1 2\n";
        return;
    }

    for (int i = 1; i <= n - 2; ++i)
    {
        cout << i << ' ' << i << ' ';
    }
    cout << n << ' ' << n << ' ';
    cout << n - 1 << ' ' << n - 1 << ' ';
    for (int i = 1; i <= n; ++i)
    {
        cout << i << ' ';
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << i << ' ';
    }
    cout << '\n';
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
