#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long maximum_time=b;
        for(int i=0; i<n; i++){
            maximum_time+=min(v[i], a-1);
        }
        cout<<maximum_time<<endl;
    }
}