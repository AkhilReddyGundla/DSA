#include<iostream>
#include<vector>
using namespace std;


int getEquilibriumIndex(vector<int>&arr, int n){
    int totalSum=0;
    for(int i=0;i<n;i++)totalSum+=arr[i];

    int leftSum=0;
    for(int i=0;i<n-1;i++){
        leftSum+=arr[i];
        if(totalSum-arr[i+1] == 2*leftSum){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<getEquilibriumIndex(arr,n);
}