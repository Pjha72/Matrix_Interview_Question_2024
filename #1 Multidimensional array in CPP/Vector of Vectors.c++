#include<bits/stdc++.h>
using namespace std;

int main(){
    int m=3, n=2;
    // Create a 2D array
    // Number os rows can also dynamic
    vector<vector<int>> arr;

    // Assign values to the array
    for(int i=0;i<m;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            v.push_back(10);
        }
        arr.push_back(v);
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

/*
    1. Not as cache friendly as simple 2-D arrays.
    2. Individual rows are of dynamic sizes.
    3. Easy to pass to a function.
*/