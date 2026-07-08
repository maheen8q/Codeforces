#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        long long zeros=0;
        long long ones=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                zeros++;
            }
            else{
                ones++;
            }
        }
        long long lengtht=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'&&ones>0){
                ones--;
                lengtht++;
            }
            else if(s[i]=='1'&&zeros>0){
                zeros--;
                lengtht++;
            }
            else{
                break;
            }
        }
        cout<<n-lengtht<<endl;
    }
}