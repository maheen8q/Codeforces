#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin>>x>>y;
        
        //2A+3B+4C=x
        //A-C=y
        //2y+6c+3b=x
        //3(b+2c)=x-2y
        int diff=x-2*y;

       
        if (diff % 3 != 0) {
            cout<<"NO\n";
            continue;
        }

        int t=diff/3;

        if (t<0) {
            cout<<"NO"<<endl;;
            continue;
        }

        
        if (max(0,-y) <= t/2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
