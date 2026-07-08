#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int diff;
        int temp=n/2;
        if(n>2)
        diff=n-2*temp;

        else
        diff=n;

        cout<<diff<<endl;
    }
}