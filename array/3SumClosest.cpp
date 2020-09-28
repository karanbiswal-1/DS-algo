//Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    int diff=1000;
    int ans;
    int p=0;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    if(n<3){
        return 0;
    }
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r= n-1;
        while(l<r){
            int sum = nums[i] + nums[l] + nums[r];
        if(sum == target){
            diff = 0;
            break;
        }
        if(abs(sum-target) < abs(diff)){
            diff =   target - sum;
            
        }
        if(sum > target){
            r--;
        }else{
            l++;
        }
        }
    }
    
    return target-diff; 
}

int main(){
    vector<int> nums{0,2,1,3};
    int target = 1;
    cout<<threeSumClosest(nums,target);
}