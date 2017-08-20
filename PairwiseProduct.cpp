//
//  main.cpp
//  Maximum Pairwise Product
//
//  Created by Apul Gupta on 19/08/17.
//  Copyright © 2017 Apul Gupta. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    int temp;
    cin>>n;
    int arr[100];
    
    //Enter no. in an array
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    
    
    for(int i=0;i<n-1;i++){
        
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    
         int mul = arr[n-1]*arr[n-2];
    
        cout<<mul;
    
    
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    

    
    return 0;
}
