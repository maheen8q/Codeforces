#include<iostream>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;

    for(int i=0; i<s1.length(); i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
        if(s1[i]==s2[i])
        {
            continue;
        }
        else{
            if(s1[i]>s2[i]){
                cout<<"1";
                return 0;
            }
            else{
                cout<<"-1";
                return 0;
            }
        }
    }
    cout<<"0";
    return 0;
}