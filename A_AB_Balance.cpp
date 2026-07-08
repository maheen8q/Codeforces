#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>s;
        n=s.size();
        if(s[0]!=s[n-1]){
            if(s[0]=='a'){
                s[0]='b';
            }
            else{
                s[0]='a';
            }
        }
        cout<<s<<endl;
    }
}