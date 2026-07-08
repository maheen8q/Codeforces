#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        long long current_length=1;
        long long maximum_length=1;
        for(int i=1; i<n; i++){
            if(s[i]==s[i-1]){
                current_length++;
            }
            else{
                maximum_length=max(maximum_length,current_length);
                current_length=1;
            }
            
        }
        maximum_length=max(maximum_length,current_length);
        cout<<maximum_length+1<<endl;
    }
}