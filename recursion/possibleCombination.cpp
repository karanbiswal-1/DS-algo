//Print all possible combinations of r elements in a given array of size n

#include<bits/stdc++.h>
using namespace std;

void recursive(int arr[],int n,int r,int start,int end,int index){
    int data[r];
    data[start] = arr[index]
}

void printPossible(int arr[],int n,int r){
    if(r == 1){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<' ';
        }
    }else{
        recursive(arr,n,r,0,n-1,0);
    }
}