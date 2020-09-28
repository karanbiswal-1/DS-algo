//Length of longest Subarray with equal number of odd and even elements

#include<bits/stdc++.h>
using namespace std;

int longestSubaaraylength(int arr[],int n){
    int curr_sum = 0;
    int max_len = 0;
    unordered_map<int,int> hash;
    for(int i =0;i<n;i++){
        if(arr[i]%2 == 0){
            curr_sum+=1;
        }else{
            curr_sum-=1;
        }
        if(curr_sum == 0){
            max_len = max(max_len,i+1);
        }
        if(hash.find(curr_sum) != hash.end()){
            max_len = max(max_len, i-hash[curr_sum]);
        }else{
            hash[curr_sum] = i;
        }

    }
    return max_len;
}

int main(){
    int arr[] = {12, 4, 7, 8, 9, 2, 11, 0, 2, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<longestSubaaraylength(arr,n);

}