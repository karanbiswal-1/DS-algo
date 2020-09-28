//Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array

#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int res = n;
    int xorAll =0;
    for(int i =0;i<n;i++){
     xorAll  = xorAll^nums[i]^i;
    }
    return res^xorAll;
         
}

int main(){
    vector<int> nums{1,2,3,4,5,6,7,9,0};
    cout<<missingNumber(nums);
    return 0;
}