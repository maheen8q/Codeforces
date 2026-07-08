#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int s[t], x[t], n[t];
    int a[t][1000];

    for(int i=0; i<t; i++){
        cin>>n[i]>>s[i]>>x[i];
        for(int j=0; j<n[i]; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<t; i++){
        int sum=0;
        for(int j=0; j<n[i]; j++){
            sum=sum+a[i][j];
        }
        if(sum==s[i]){
            cout<<"YES"<<endl;
            //break;
        }
        else{
            int key=s[i]-sum;
            if(key<0){
                cout<<"NO"<<endl;
            }
            else if(key==x[i]){
                cout<<"YES"<<endl;
                //break;
            }
            else if(key%x[i]==0){
                cout<<"YES"<<endl;
                //break;
            }
            else{
                cout<<"NO"<<endl;
                //break;
            }
        }
    }
    return 0;
}