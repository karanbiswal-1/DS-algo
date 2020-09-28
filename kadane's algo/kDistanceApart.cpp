#include<bits/stdc++.h>
using namespace std;

int kDistanceApart(int arr[],int n,int k){
    int max_till =0;
    int max_so_far =0;

    for(int i =0;i<n;i++){
        max_till =0;
        for(int j =i;j<n;j+=k){
            max_till+=arr[j];
            if(max_till < 0){
                max_till =0;
            }
            max_so_far = max( max_so_far,max_till);
        }
    }
    return max_so_far;
}

int main(){
    int arr[] = {2, 3, -1, -1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =3;
    cout<<kDistanceApart(arr,n,k);
}