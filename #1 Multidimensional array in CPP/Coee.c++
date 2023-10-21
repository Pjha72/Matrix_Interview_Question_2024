/*
    Important Points
    1. Elements are sorted in row-major order.
        Ex : 1 2 3
             4 5 6
             7 8 9
        O/P : 1 2 3 4 5 6 7 8 9
    2. Elements are stored in contiguous memory locations.
    3. Internal curly bracket are opional.
    4. Only the first dimension can be omitted when we initialize.
        Ex : int arr[][2] = {{1,2},{3,4},{5,6}};
             int arr[][2] = {1,2,3,4,5,6};
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // O/P: 1 2

    // Vaiable Size
    int m=3,n=2;
    int arr1[m][n] = {{1,2},{3,4},{5,6}};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr1[i][j] = i+j;
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    // O/P : 0 1 1 2 2 3


    /*
    Ways of Creating  Multidimensional Arrays in C++
        1. Double Pointer Method
        2. Array of Pointers
        3. Array of Vectors
        4. Vector of Vectors
    */
}