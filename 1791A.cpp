#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string c="codeforces";
        char a;
        cin>>a;
        for(int i=0;i<10;i++){
            if(a==c[i]){
                cout<<"YES\n";
                break;
            }
            if(i==9){
                cout<<"NO\n";
            }
        }
    }
}