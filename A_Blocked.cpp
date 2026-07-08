#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sorting descending often helps place larger "hard-to-sum" 
    // numbers before the smaller "building block" numbers.
    sort(a.rbegin(), a.rend());

    vector<int> result;
    vector<bool> used(n, false);
    
    // dp[s] will be true if sum 's' can be formed by elements in 'result'
    // Max possible sum is 200 * 100 = 20,000
    bitset<20001> reachable;
    reachable[0] = 1;

    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int j = 0; j < n; ++j) {
            if (!used[j] && !reachable[a[j]]) {
                // We found a number that is NOT blocked
                result.push_back(a[j]);
                reachable |= (reachable << a[j]);
                used[j] = true;
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << -1 << endl;
            return;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << result[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
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