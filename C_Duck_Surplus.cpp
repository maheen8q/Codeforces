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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            a[i] += a[i - 1];
        }
    }
    cout << a[n - 1] << endl;
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
        // write your code here for each test case
        solve();
    }

    return 0;
}