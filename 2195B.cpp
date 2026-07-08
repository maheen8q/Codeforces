#include <bits/stdc++.h>
using namespace std;

int odd_part(int x) {
    while (x % 2 == 0)
        x /= 2;
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        bool ok = true;
        for (int i = 1; i <= n; i++) {
            if (odd_part(i) != odd_part(a[i])) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
