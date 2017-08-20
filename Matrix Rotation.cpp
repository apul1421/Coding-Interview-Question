//
//  main.cpp
//  MatrixRotate
//
//  Created by Apul Gupta on 14/08/17.
//  Copyright © 2017 Apul Gupta. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    
    int m=4;
    int n=4;
    
    int matrix[m][n];
    
    //add random number in matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrix[i][j]= rand() % 100;
        }
    }
    
    //print the matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
    //transpose of matrix
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    
    cout<<endl<<"Transpose Matrix"<<endl;
    
    //print Transpose matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        
        cout<<endl;
    }

    
    
    
    //swap column of matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix [i][n-1-j];
            matrix[i][n-1-j] = temp;
        }
    
    }
    
    cout<<endl<<"Rotated Matrix"<<endl;
    
    //print final matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        
        cout<<endl;
    }

    
}
