#include<bits/stdc++.h>
using namespace std;

void sort1s2s3s(int arr[],int n){
    int c1=0,c2=0;
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            c1++;
        }
        else if(arr[i]==1){
            c2++;
        }
    }
    for(int i =0;i<c1;i++){
        arr[i] = 0;
    }
    for(int i =c1;i<c1+c2;i++){
        arr[i] = 1;
    }
    for(int i =c1+c2;i<n;i++){
        arr[i] = 2;
    }

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {0,1,1,0,0,2,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort1s2s3s(arr,n);
    return 0;
}