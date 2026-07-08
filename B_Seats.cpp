#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n<=2){
        cout<<1<<endl;
        return;
    }
    if(s[0]=='0' && s[1]=='0')s[1]='1';
    if(s[n-1]=='0' && s[n-2]=='0')s[n-2]='1';
    
    int count=0;
    int prev=-1;
    for(int i=0; i<n; i++){
        if(s[i]!='1'){
            if(i-prev>=3){
            count++;
            prev=i;}
        }
        else{
            count++;
            prev=i;
        }
    }

    
    
    cout << count << endl;
}

int main() {

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}