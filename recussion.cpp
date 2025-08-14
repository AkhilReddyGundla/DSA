#include<vector>
#include<iostream>
using namespace std;


void getPermutations(vector<vector<int>>&allPermutations, vector<int>&part,int n, int k, int start){

    if(part.size() == k){
        allPermutations.push_back(part);
        return;
    }

    for(int i=1;i<=n;i++){
        part.push_back(i);
        getPermutations(allPermutations,part,n,k,i);
        part.pop_back();
    }

}

// all permutations from 1 to n of size k
int main(){
    int n,k;cin>>n>>k;
    vector<int>part;
    vector<vector<int>>allPermutations;
    getPermutations(allPermutations,part,n,k,0);
    for(int i=0;i<allPermutations.size();i++){
        for(int j=0;j<k;j++){
            cout<<allPermutations[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}