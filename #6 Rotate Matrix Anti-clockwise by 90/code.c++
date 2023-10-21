#include<bits/stdc++.h>
using namespace std;

// Naive solution : T.C : O(n^2) , S.C : O(n^2)
/*
    1. Last Column becomes first row
    2. Second Last Column becomes second row.
*/
void RotateMatrixByNinty(int mat[3][3],int m,int n){
    int temp[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            temp[n-j-1][i] = mat[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat[i][j] = temp[i][j];
        }
    }
}

// Efficent Solution : O(n^2), S.C : O(1)
/*
    1. Find Transpose of matrix
    2. Reverse individual columns
*/
void RotateMatrixByNinty(int mat[3][3],int m, int n){
    // Transpose of the matrix
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }

    // Reverse individual columns
    for(int i=0;i<m;i++){
        int low = 0, high = n-1;
        while(low<high){
            swap(mat[low][i],mat[high][i]);
            low++,high--;
        }
    }
}

int main(){
    int m=3,n=3;
    int mat[m][n];

    RotateMatrixByNinty(mat,m,n);
}