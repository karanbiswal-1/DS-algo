#include<bits/stdc++.h>
using namespace std;

 int maxZeros(int arr[],int n){
     int countZeros = 0;
     int max_till =0;
     int max_so_far =0;
     for(int i =0;i<n;i++){
         if(arr[i]==0){
             countZeros++;
             arr[i] = -1;
         }
     }
     for(int i =0;i<n;i++){
         max_till += arr[i];
         if(max_till < 0){
             max_till =0;
         }
         max_so_far = max(max_so_far,max_till);
     }

     return (countZeros + max_so_far);
 }

 int main(){
     int arr[]= {0, 0, 0, 1, 0, 1};
     int n = sizeof(arr)/sizeof(arr[0]);
     cout<<maxZeros(arr,n);
 }