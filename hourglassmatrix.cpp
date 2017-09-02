//
//  main.cpp
//  hourglassmatrix
//
//  Created by Apul Gupta on 01/09/17.
//  Copyright © 2017 Apul Gupta. All rights reserved.
//
#include <limits>
#include <iostream>
using namespace std;
const int R=6;
const int C=6;
int MAX_SUM = numeric_limits<int>::min();

int findMaxSum(int mat[R][C]){
 
    if(R<3 || C<3){
        return -1;
    }
    
    
    for(int i=0;i<R-2;i++){
        for(int j=0;j<C-2;j++){
            int sum = mat[i][j] + mat[i][j+1] + mat[i][j+2] +
                                 mat[i+1][j+1] +
                      mat[i+2][j] + mat[i+2][j+1] + mat[i+2][j+2];
        
            
            MAX_SUM = max(MAX_SUM,sum);
        }
    }
    return MAX_SUM;
}

int main(int argc, const char * argv[]) {
    int mat[R][C] ={{1,1,1,0,0,0},{0,1,0,0,0,0},{1,1,1,0,0,0},{0,0,2,4,4,0},{0,0,0,2,0,0},{0,0,1,2,4,0}};
    int result = findMaxSum(mat);
    
    if(result==-1){
        cout<<"Not possible";
    }
    else{
        cout<<result;
    }
    
    return 0;
}
