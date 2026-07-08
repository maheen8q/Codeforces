#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long diff = x - 2 * y;

        // Must be divisible by 3
        if (diff % 3 != 0) {
            cout << "NO\n";
            continue;
        }

        long long tval = diff / 3; // this is 't' in derivation

        if (tval < 0) {
            cout << "NO\n";
            continue;
        }

        // condition: max(0, -y) <= t/2
        if (max(0LL, -y) <= tval / 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
