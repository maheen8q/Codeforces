#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
       int s, k, m;
       cin >> s >> k >> m;

       if(s<k){
        cout<<s-min(m%k, s)<<endl;
       }
       else{
        if((m/k)%2==0){
            cout<<s-(m%k)<<endl;
        }
        else{
            cout<<k-(m%k)<<endl;
        }
       }
    }
    return 0;
}