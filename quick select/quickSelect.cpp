#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int quickSelect(int arr[],int n){
    int i = -1;
    int pivot = n-1;
    for(int j =0;j<=pivot;j++){
        if(arr[j] < arr[pivot]){
            i++;
            swap(arr[i+1],arr[pivot]);
        }else{
            j++;
        }
    }
}