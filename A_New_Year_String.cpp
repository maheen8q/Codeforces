#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Calculates the number of replacements needed to transform 
 * a substring starting at index 'start' into "2026".
 */
int costToMake2026(const string& s, int start) {
    string target = "2026";
    int changes = 0;
    for (int i = 0; i < 4; ++i) {
        if (s[start + i] != target[i]) {
            changes++;
        }
    }
    return changes;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool has2026 = (s.find("2026") != string::npos);
    bool has2025 = (s.find("2025") != string::npos);

    // If it already satisfies one of the two conditions
    if (has2026 || !has2025) {
        cout << 0 << endl;
        return;
    }

    int costToRemove2025 = 1;

    int minCostTo2026 = 4; 
    for (int i = 0; i <= n - 4; ++i) {
        minCostTo2026 = min(minCostTo2026, costToMake2026(s, i));
    }

    cout << min(costToRemove2025, minCostTo2026) << endl;
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