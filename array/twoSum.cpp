//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//You can return the answer in any order.

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> nums,int target){
    vector<int> ans;
    unordered_map<int,int> hash;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(hash.find(nums[i]) != hash.end()){
            ans.push_back(hash[nums[i]]);
            ans.push_back(i);
        }else{
            hash[nums[i]] = i;
        }
    }
    if(ans.empty()){
        cout<<"no pair found";
    }else{
        return ans;
    }
}

int main(){
    vector<int> nums{3,6,7,3,2};
    vector<int> ans;
    ans = twoSum(nums,6);
    for (auto x : ans) 
        cout << x << " "; 
  
    return 0;  
    
}