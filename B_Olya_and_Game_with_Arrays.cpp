#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll second_element;
        ll lowest_first_min=INT_MAX;

        for(int i=0; i<n; i++){
            ll m;
            cin>>m;
            vll a(m);

            for(auto &it: a){
                cin>>it;
            }
            sort(a.begin(), a.end());
            second_element.push_back(a[1]);
            lowest_first_min=min(lowest_first_min, a[0]);
        }
        sort(second_element.begin(), second_element.end());
        ll sum_second_element=accumulate(second_element.begin(), second_element.end(), 0LL);
        ll lowes_second_ele=second_element[0];
        ll answer=lowest_first_min+sum_second_element-lowes_second_ele;
        cout<<answer<<endl; 
    }
}