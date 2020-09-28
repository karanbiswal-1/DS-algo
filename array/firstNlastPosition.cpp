//Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

//Your algorithm's runtime complexity must be in the order of O(log n).

#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;
    int n = nums.size();
    if(n<0){
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    int l=0;
    int r = n-1;

    while(l <= r){
        
        int mid = (l+r)/2;
        int j = mid;
        int i =mid;
        int value = nums[mid];

        if(target == value){
            while(j>=l && nums[j]==target ){
                j--;
            }
            while(i<=r && nums[i]==target){
                i++;
            }
            ans.push_back(j+1);
            ans.push_back(i-1);
        }
        if(target > value){
            l = mid +1;
        }else{
            r = mid-1;
        }
    }
    if(ans.empty()){
        ans.push_back(-1);
        ans.push_back(-1);
    }
    return ans;
 }

 int main(){
     vector<int> nums{6};
     int target = 6;
     vector<int> ans = searchRange(nums,target);
     for(auto it:ans){
         cout<<it;
     }
 }