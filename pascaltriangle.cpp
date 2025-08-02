#include <iostream>
#include<vector>
using namespace std;

int main(){
    int rowSize;
    cin>>rowSize;
    
    vector<vector<int>>pascalTriangle(rowSize);

    for(int i=0;i<rowSize;i++){
        pascalTriangle[i].resize(i+1);
        pascalTriangle[i][0]=1,pascalTriangle[i][i]=1;

        for(int j=1;j<i;j++){
            pascalTriangle[i][j] = pascalTriangle[i-1][j]+pascalTriangle[i-1][j-1];
        }
    }

    for(int i=0;i<rowSize;i++){
        for(int j=0;j<pascalTriangle[i].size();j++){
            cout<<pascalTriangle[i][j]<<" ";
        }
        cout<<"\n";
    }
}