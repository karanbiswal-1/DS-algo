#include<bits/stdc++.h>
using namespace std;

int min_change(int n,int arr[],int x){
    int count =0;
    int j = x-1;
    while(n > 0){
        count += n/arr[j];
        n = n % arr[j];
        j--;
    }
    return count;
}

int main(){
    int arr[] = {1,2,5,10,20,50,100,500,1000};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<min_change(5029,arr,n);
}