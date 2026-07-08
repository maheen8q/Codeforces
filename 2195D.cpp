#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> f(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> f[i];
        }

        vector<int> a(n+1);

        // Step 1: compute middle elements
        for (int i = 2; i <= n-1; i++) {
            a[i] = (f[i+1] - 2*f[i] + f[i-1]) / 2;
        }

        // Step 2: compute total sum S
        int S = (f[n] - f[1]) / (n-1);

        // Step 3: compute a1
        a[1] = ((f[2] - f[1]) + S) / 2;

        // Step 4: compute an
        int sum = 0;
        for (int i = 1; i <= n-1; i++) {
            sum += a[i];
        }
        a[n] = S - sum;

        // Output
        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
