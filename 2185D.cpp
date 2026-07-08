#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<vector<long long>> answers;  // store final arrays

    while(t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> original(n), current(n);

        for(int i = 0; i < n; i++) {
            cin >> original[i];
            current[i] = original[i];
        }

        for(int i = 0; i < m; i++) {
            int b;
            long long c;
            cin >> b >> c;

            b--;  // convert to 0-based index

            current[b] += c;

            if(current[b] > h) {
                current = original;  // reset
            }
        }

        answers.push_back(current);  // store result
    }

    // Print all results after processing everything
    for(auto &arr : answers) {
        for(auto &x : arr) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
