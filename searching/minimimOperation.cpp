#include<bits/stdc++.h>
using namespace std;

void search(int arr[],int n,int x){
    if(arr[n-1]==x){
        cout<<"found";
    }else{
        int backup = arr[n-1];
        arr[n-1] = x;
    }
    for(int i=0;;i++){
        if(arr[i] == x){
            if(i < (n-1)){
                cout<<"found";
                break;
            }else{
                cout<<"not found";
                break;
            }
            
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    int x = 7;
    search(arr,n,x);
}