#include<bits/stdc++.h>
using namespace std;

int singleNumber(int arr[],int n){
    int number =0;
    vector<int> fre(32,0);
    for(int i=0;i<n;i++){
        
        for(int j =0;j<32;j++){
            if(arr[i] & (1<<j)){
                fre[j]++;
            }
            
        }
    }
    for(int i=0;i<32;i++){
        if(fre[i] % 3 ){
            number += (1<<i);
        }
    }
    return number;
}
int main(){
    int arr[]={1,1,1,3,3,3,2};
    int n =7;
    cout<<singleNumber(arr,n);

}