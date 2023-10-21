#include<bits/stdc++.h>
using namespace std;

void printSnake(int mat[3][2],int m, int n){
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
}

int main(){
    int m = 3, n=2;
    int mat[m][n];

    printSnake(mat,m,n);
}