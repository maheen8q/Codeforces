#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>num(n);
        
        for(int i=0; i<n; i++){
            cin>>num[i];
        }
        long long total_and=num[0]; 
        for(int i=0; i<n; i++){
            total_and&=num[i];
        }
        cout<<total_and<<endl;
    }
}