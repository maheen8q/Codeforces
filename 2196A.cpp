#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long p, q;
        cin >> p >> q;

        if (3 * p == 2 * q) {
            cout << "Bob\n";
        }
        else if (p == q) {
            cout << "Alice\n";
        }
        else if (3 * p > 2 * q) {
            cout << "Bob\n";
        }
        else {
            cout << "Alice\n";
        }
    }
}
