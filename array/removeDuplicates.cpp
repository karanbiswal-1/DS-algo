//Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

//Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

#include<bits/stdc++.h>
using namespace std;

 int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if(n==1){
        return nums;
    }else{
    int count=1;
    int i =0;
    for(int j = 1;j<n;j++){
        if(nums[j] != nums[j-1]){
            nums[++i] = nums[j];
            count++;
        }
    }
    return count;        
}
 }

int main(){
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums);
}