//Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

//Notice that the solution set must not contain duplicate triplets.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    if(n< 3){
        return ans;
    }
    
    for(int i = 0;i<n-2;i++){
        int l = i+1;
        int r = n-1;
        if( i>0 && nums[i]==nums[i-1]){
            continue;
        }
        while(l<r){
            if(nums[i] + nums[l] + nums[r] == 0){
                ans.push_back({nums[i],nums[l],nums[r]});
                l++;
                r--;
            
               while(l<r && nums[l]==nums[l-1]){
                l++;
               }
               while(l<r && nums[r]==nums[r+1]){
                 r--;
               }
            }   
            else if(nums[i] + nums[l] + nums[r] < 0){
                l++;
            }else{
                r--;
            }
        }
    }
 

    return ans;
}

int main(){
    vector<int> nums{-1,0,2,1,-1,-4};
    vector<vector<int>> ans;
    ans = threeSum(nums);
    cout<<ans[0][0];
}