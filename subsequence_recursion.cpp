#include<bits/stdc++.h>
using namespace std;

void subS(int ind, vector<int> &v, int arr[], int n){
    if(ind==n){
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[ind]);
    subS(ind+1,v,arr,n);
    v.pop_back();

    subS(ind+1,v,arr,n);
}

int main(){
    int arr[] = {1,3,2};
    vector<int> v;
    subS(0,v,arr,3);
}
