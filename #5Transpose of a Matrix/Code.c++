#include<bits/stdc++.h>
using namespace std;


// Naive solution
void printTransposeMatrix(int mat[3][3],int m, int n){
    int temp[3][3];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            temp[i][j] = mat[j][i];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat[i][j] = temp[i][j];
        }
    }
}

// Efficent solution
void printTransposeMatrix(int mat[3][3],int m, int n){
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
}


int main(){
    int m=3, n=3;
    int mat[m][n];

    printTransposeMatrix(mat,m,n);
}