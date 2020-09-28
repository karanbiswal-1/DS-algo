#include<bits/stdc++.h>
using namespace std;

int occurOnce(int arr[],int n){
    int res=0;
    for(int i =0;i<n;i++){
        res = res^arr[i];
    }
    return res;
}

int main() 
{ 
    int arr[] = { 3, 3, 2, 5, 5 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "The element with single occurrence is  " << occurOnce(arr, n); 
    return 0; 
} 