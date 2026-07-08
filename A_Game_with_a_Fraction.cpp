#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long a[t];
    long long b[t];
    string ans[t];
    for(int i=0; i<t; i++){
        cin>>a[i];
        cin>>b[i];

        while(a[i]>0&&b[i]>1){

            if(a[i]*3==b[i]*2){
            ans[i]="Bob";
            break;
        }
        else{
            a[i]--;
            if(a[i]*3==b[i]*2){
            ans[i]="Bob";
            break;}
            else{
                b[i]--;
                if(a[i]*3==b[i]*2){
            ans[i]="Bob";
            break;}
            }
    }
}
        
    for(int i=0; i<t; i++){
        cout<<ans[i]<<endl;
    }
}
}