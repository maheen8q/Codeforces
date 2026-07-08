#include <bits/stdc++.h> // include all standard headers
#include <numeric>
using namespace std;
#define vll vector<long long>
#define vpll vector<pair<long long, long long>>
#define ll long long
#define ld long double
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i < b; i++)
const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    int n;
    n = s.size();
    int y = 1;
    for (int i = 0; i < n; i++)
    {
        y *= 10;
    }
    y = y + 1;
    cout << y << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Declare any additional variables here

    int t; // number of test cases
    cin >> t;
    // goodnum();

    while (t--)
    {
        solve();
    }

    return 0;
}