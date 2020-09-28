//find the number apeering more then n/2 floor value

#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[],int n){
    int count =0;
    int ele;

    for(int i=0;i<n;i++){
        if(count == 0){
            ele = arr[i];
        }
        if(ele == arr[i]){
            count+=1;
        }else{
            count-=1;
        }
    }
    return ele;
}

int main(){
    int arr[] = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<majorityElement(arr,n);
    return 0;
}