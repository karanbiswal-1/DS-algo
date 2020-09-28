//dublicates may occur

#include<bits/stdc++.h>
using namespace std;

 int findMin(vector<int>& nums) {
    int l = 0;
    int r = nums.size() -1;
    while(l < r){
        if(nums[l] < nums[r]){
            return nums[l];
        }
        
            int mid = (l+r)/2;
            if(nums[mid] == nums[l] && nums[mid] == nums[r]){
                l++;
                r--;
            }else if(nums[mid] >= nums[r]){
                l=mid+1;
            }else{
                r = mid;
             }
    }
    return nums[l];        
 }
 int main(){
     vector<int> nums{10,1,10,10,10};
     cout<<findMin(nums);
     return 0;
 }
