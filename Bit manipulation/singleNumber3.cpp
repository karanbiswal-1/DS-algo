//Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.

#include<bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    vector<int> ans;
    int n =nums.size();
    int xorAll = 0;
    for(int i =0;i<n;i++){
        xorAll = xorAll ^ nums[i];
    }
    xorAll = xorAll & -xorAll ;
     int a = 0;
        int b = 0;

    for(auto it: nums){
       if( it & xorAll){
           a = a ^ it;
       }else{
           b = b ^ it;
       }
    }
    ans.push_back(a);
    ans.push_back(b);
   return ans;       
}

int main(){
    vector<int> nums{1,1,2,2,3,3,4,5};
    vector<int> ans = singleNumber(nums);
    for(auto it: ans){
        cout<<it;
    }
    return 0;
}