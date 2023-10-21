#include<bits/stdc++.h>
using namespace std;

int main(){
    int m=3, n=2;
    // Create a 2D array
    // Allocated in stack
    vector<int>arr[m];

    // Assign values to the array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i].push_back(10);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

/*
    1. Not as cache friendly as simple 2-D arrays.
    2. Individual rows are of dynamic sizes.
    3. Easy to pass to a function.
*/