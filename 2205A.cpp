#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0; i<t; i++){
        cin>>a[i];
    }
    for(int i=0; i<t; i++){
        for(int j=i+1; j<t; j++){
            if(i==1){
                if(i==max(0, a[i])){
                    swap(a[i], a[j]);
                }
            }
            else{
                if(i==max(a[i], a[j])){
                    swap(a[i], a[j]);
                }
            }
        }
    }
    for(int i=0; i<t; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}