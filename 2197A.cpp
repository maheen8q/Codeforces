#include<iostream>
#include<vector>

using namespace std;


int sum (int num){
    int sum=0;

    while(num!=0){
    int temp=num%10;
    sum=sum+temp;
    num=num/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector <int> numbers(n);
    vector <int> count(n, 0);

    for(int i=0; i<n; i++){
        cin>>numbers[i];
    }
    for(int i=0; i<n; i++){
        for(int j=numbers[i]; j<numbers[i]+10000; j++){
            if(j==numbers[i]+sum(j)){
                count[i]++;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<count[i]<<endl;
    }
    return 0;   
}