#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        long long zero=0;
        long long one=0;
        for(int i=0; i<s.length(); i++){
        if(s[i]=='0') zero++;
        else one++;
                 }
        int op=min(one, zero);
        if(op%2!=0) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;

    }
}