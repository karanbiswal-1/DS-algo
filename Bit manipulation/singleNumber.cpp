//Given a non-empty array of integers, every element appears twice except for one. Find that single one.

#include<bits/stdc++.h>
using namespace std;

 int singleNumber(vector<int>& nums) {
     int ans = nums[0];
     int n = nums.size();
     for(int i =1;i<n;i++){
         ans = ans ^ nums[i];
     }
     return ans;
           
}

int main(){
    vector<int> nums{1,1,2,2,3,3,4,5,5,6,6};
    cout<<singleNumber(nums);
}