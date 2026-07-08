#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> ones, zeros;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') ones.push_back(i + 1);
            else zeros.push_back(i + 1);
        }

        int count_ones = ones.size();
        int count_zeros = zeros.size();

        // If already all zeros, no operation needed
        if (count_ones == 0) {
            cout << 0 << "\n\n";
            continue;
        }

        // If count of zeros is odd → choose zeros (like for "101")
        if (count_zeros % 2 == 1) {
            cout << count_zeros << "\n";
            for (int idx : zeros) cout << idx << " ";
            cout << "\n";
        }
        // Otherwise choose ones (works when ones count is even)
        else if (count_ones % 2 == 0) {
            cout << count_ones << "\n";
            for (int idx : ones) cout << idx << " ";
            cout << "\n";
        }
        else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
