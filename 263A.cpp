#include<iostream>
using namespace std;

int main(){
    int matrix[5][5];
    int position1=0;
    int position2=0;
    int count=0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                position1=i+1;
                position2=j+1;
            }
        }
    }

    while(position1 > 3){
        count++;
        position1--;
    }
    while(position1 < 3){
        count++;
        position1++;
    }

    while(position2 > 3){
        count++;
        position2--;
    }
    while(position2 < 3){
        count++;
        position2++;
    }

    cout<<count;
    return 0;
}
