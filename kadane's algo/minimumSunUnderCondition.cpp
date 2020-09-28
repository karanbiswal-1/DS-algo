//Minimum possible sum of array elements after performing the given operation

#include<bits/stdc++.h>
using namespace std;

int minimumSum(int arr[],int n,int x){
    int max_till=0,max_so_far=0;
    for(int i =0;i<n;i++){
        max_till+=arr[i];
        if(max_till < 0){
            max_till = 0;
        }
        max_so_far = max(max_so_far,max_till);
    }
    return (max_so_far/x);
}

int main(){
    int arr[] = {5,5,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minimumSum(arr,n,5);
}