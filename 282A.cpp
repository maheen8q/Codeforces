#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    string s;
    int x=0;
    cin>>n;
    string s1="X++";
    string s2="++X";
    for(int i=0;i<n;i++){
        cin>>s;
        if(s== s1|| s==s2){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x;
    return 0;
}