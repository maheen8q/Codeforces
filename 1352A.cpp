#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];

    for(int i=0; i<n; i++){
        cin>>s[i];
    }

  for(int i=0; i<n; i++) {

        int len = s[i].length();
        int count = 0;

        // count non-zero digits
        for (int j = 0; j < len; j++) {
            if (s[i][j] != '0')
                count++;
        }

        cout << count << endl;

        // print round numbers
        for (int j = 0; j < len; j++) {
            if (s[i][j] != '0') {
                cout << s[i][j];
                for (int k = j + 1; k < len; k++)
                    cout << '0';
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
