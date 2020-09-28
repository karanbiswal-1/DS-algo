#include<bits/stdc++.h>
using namespace std;

int maxSubarrSum(int arr[],int n){
    int max_till=0,max_so_far=0;

    for(int i =0;i<n;i++){
        max_till += arr[i];
        if(max_till < 0){
            max_till =0;
        }
        if(max_so_far < max_till){
            max_so_far = max_till;
            
        }
    }
    return max_so_far;
}

int main(){
    int arr[] = {-2,-3,4,-2,-1,1,5,-6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxSubarrSum(arr,n);
}