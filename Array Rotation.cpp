//
//  main.cpp
//  Array Rotation
//
//  Created by Apul Gupta on 02/09/17.
//  Copyright © 2017 Apul Gupta. All rights reserved.
//

#include <iostream>
using namespace std;

void leftrotatebyone(int arr[],int n);

void arrayrotate(int arr[],int d,int n){

    for (int i=0; i<d; i++) {
        leftrotatebyone(arr,n);
    }
}

void leftrotatebyone(int arr[],int n){
    int temp = arr[0];
    
    for (int i=0; i<n-1; i++) {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void printarray(int arr[],int n){
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<"\t";
    }
    
}
int main(int argc, const char * argv[]) {
    int arr[] = {1,2,3,4,5,6,7};
    arrayrotate(arr, 3, 7);
    printarray(arr, 7);
    
    
    return 0;
}
