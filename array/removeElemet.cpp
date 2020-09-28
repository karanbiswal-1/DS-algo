//Given an array nums and a value val, remove all instances of that value in-place and return the new length.

//Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

//The order of elements can be changed. It doesn't matter what you leave beyond the new length.

#include<bits/stdc++.h>
using namespace std;

 int removeElement(vector<int>& nums, int val) {
    int n = nums.size();
    int count =0;
    int i =0;
    int j = n-1;
    while(i<=j){
        if(nums[i]==val && nums[j]!=val){
            swap(nums[i],nums[j]);
            count++;
            i++;
            j--;
        }else if(nums[i]==val && nums[j]==val){
            count++;
            j--;
        }else if(nums[i]!=val && nums[j]!=val){
            i++;
        }else{
            i++;
            j--;
            count++;
        }
    }
    return n-count;        
}

int main(){
    vector<int> nums{0,1,2,2,3,0,4,2};
    int val =2;
    cout<<removeElement(nums,val);
}