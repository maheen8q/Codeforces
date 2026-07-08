#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if(k<1||k>150){
        return -1;
    }
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int winner=a[k-1];
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]>=winner && a[i]>0){
            count++;
        }
    }
    cout<<count;
    return 0;
}
