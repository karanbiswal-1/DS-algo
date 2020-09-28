//
//Given an array nums of n integers and an integer target, are there elements a, b, c, and d in nums such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    for(int i =0;i<n-3;i++){

        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        for(int j =i+1;j<n-2;j++){
            if(j>i+1 && nums[j]==nums[j-1]){
                continue;
            }
            int l = j+1;
            int r = n-1;
            while(l<r){
                int sum = nums[i]+nums[j]+nums[l]+nums[r];
                if(sum == target){
                    ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                    l++;
                    r--;

                     while(l<r && nums[l]==nums[l-1]){
                       l++;
                     }
                     while(l<r && nums[r]==nums[r+1]){
                       r--;
                      }
                }else if(sum > target){
                    r--;
                }else{
                    l++;
                }
            }
        }
    }
    
    
return ans;    
}

int main(){
    vector<int> nums{-4,-1,-1,0,1,2};
    int target = -1;
    vector<vector<int>> ans ;
    ans = fourSum(nums,target);
    cout<<ans.size();
    return 0;
}