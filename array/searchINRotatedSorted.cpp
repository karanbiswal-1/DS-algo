//You are given an integer array nums sorted in ascending order, and an integer target.

//Suppose that nums is rotated at some pivot unknown to you beforehand (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

//If target is found in the array return its index, otherwise, return -1.

#include<bits/stdc++.h>
using namespace std;




int search(vector<int>& nums, int target) {
   int n = nums.size();
   if(n < 1){
       return -1;
   }
   int l=0;
   int r = n-1;
   int first = nums[l];
   while(l <= r){
       int mid = l + (r-l)/2 ;
       int value = nums[mid];
       if(value == target){
           return mid;
       }
       bool am_big = (value>=first);
       bool target_big = (target>=first);
       if(am_big == target_big){
           if(target > value){
               l = mid+1;
           }else{
               r = mid-1;
           }
       }else {
           if(am_big){
               l=mid+1;
           }else{
               r = mid-1;
           }
       }
   }
   return -1;

}

int main(){
    vector<int> nums{4,5,6,7,0,1,2};
    int target = 2;
    cout<<search(nums,target);
}