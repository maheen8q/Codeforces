#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    int max_layers = 0;
    // We only need to check up to 20-25 layers because 2^20 already exceeds 10^6
    for (int n = 1; n <= 30; ++n) {
        long long s1 = 0; // Sum of layers 1, 3, 5... (indices 0, 2, 4...)
        long long s2 = 0; // Sum of layers 2, 4, 6... (indices 1, 3, 5...)

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                s1 += (1LL << i);
            } else {
                s2 += (1LL << i);
            }
        }

        // Check both alternating configurations:
        // 1. a uses s1, b uses s2
        // 2. a uses s2, b uses s1
        if ((a >= s1 && b >= s2) || (a >= s2 && b >= s1)) {
            max_layers = n;
        } else {
            // If we can't make n layers, we definitely can't make n+1
            break;
        }
    }
    cout << max_layers << endl;
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