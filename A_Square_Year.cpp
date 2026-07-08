#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    while(t--){
        string n;
        cin>>n;
        int y= stoi(n);
        int x=sqrt(y);
        if(x*x==y){
            cout<<0<<" "<<x<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
    }
}