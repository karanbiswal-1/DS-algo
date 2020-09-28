//xor of all subset of an array
#include<bits/stdc++.h>
using namespace std;

int getResult(int arr[],int n){
    int res=0;
     if (n%2 != 0){
         res = res ^ arr[0] ^ arr[n-1];
     }
     return res;
}

int main(){
    int arr[] = {3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<getResult(arr,n);
}
