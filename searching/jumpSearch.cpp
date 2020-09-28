#include<bits/stdc++.h>
using namespace std;

int jumpSearch(vector<int>& nums,int val){
    int n = nums.size();
    int jump = floor(sqrt(n)); 
    int i =0;
     while(i<=n){
         if(nums[i]==val){
             return i;
         }else if(nums[i]<val){
             i+=jump;
         }else{
             for(int j = i-jump;j<i;j++){
                 if(nums[j]==val){
                     return j;
                 }
             }
         }
     }
     return -1;
}

int main(){
    vector<int> nums{1,3,5,6,7,8,9,10};
    int val = 8;
    cout<<jumpSearch(nums,val);
}