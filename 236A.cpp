#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    int repeated=0; 
    if(s.length()<1){
        return -1;
    }
    if(s.length()>100){
        return -1;
    }
    for(int i = 0; i < s.length(); i++){
    bool repeated = false;
    for(int j = 0; j < i; j++){  // check all previous characters
        if(s[i] == s[j]){
            repeated = true;     // already seen
            break;
        }
    }
    if(!repeated){
        count++;                 // first time, count it
    }
}

    count=count;
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}