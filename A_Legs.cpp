#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        while(n>=4){
            n=n-4;
            c++;
        }
        while(n>=2){
            n=n-2;
            c++;
        }
        cout<<c<<endl;
    }
}