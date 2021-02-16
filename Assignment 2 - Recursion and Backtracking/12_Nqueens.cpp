#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
bool upperDiagonal(int r,int c){

}

bool lowerDiagonal(int r,int c){

}

bool back(int r,int c){

}

bool isValid(int r,int c){
    if((r>=0 && r<8) && (c>=0 && c<8) && upperDiagonal(r,c) && lowerDiagonal(r,c) && back(r,c) ){
        return true;
    }
}

void NqueensHelper(int n,vector<vector<int> > &board,int index,int r,int c){
    if(index>=n){
        return;
    }
    for(int i=0;i<n;i++){
        if(isValid(r,c)){
            
        }
    }
}


void Nqueens(int n,vector<vector<int> > &board){
    NqueensHelper(n,board,0);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=8;

    vector<vector<int> > board( n , vector<int> (n, 0)); 
     Nqueens(8,board);





    
    
    return 0;
}