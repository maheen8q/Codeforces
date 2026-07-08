#include <iostream>
#include <algorithm>

using namespace std;
#define ll long long

void solve() {
    ll a, b;
    cin >> a >> b;
    ll min_ops = 1e18; // Start with a very large number

    // We only need to check a small number of increments for b
    // because log(a) decreases very rapidly as b increases.
    for (ll i = 0; i <= 30; i++) {
        ll current_b = b + i;
        if (current_b == 1) continue; // Division by 1 is useless

        ll ops = i; // Number of b = b + 1 operations
        ll temp_a = a;

        // Count how many divisions are needed for the current_b
        while (temp_a > 0) {
            temp_a /= current_b;
            ops++;
        }

        min_ops = min(min_ops, ops);
    }

    cout << min_ops << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}