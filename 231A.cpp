#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    
    int sum = 0;
    
    while (m) {
        int a,b,c;
        cin >> a >> b >> c;
        int total = a + b + c;
        if (total >= 2) {
            sum++;
        }
        m--;
    }    

    cout << sum;
    return 0;
}
