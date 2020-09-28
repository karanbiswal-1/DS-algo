//Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

//If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

//The replacement must be in-place and use only constant extra memory.

#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
int i = nums.size() - 2;
        while (i >= 0 && nums[i + 1] <= nums[i]) {
            i--;
        }
        if (i >= 0) {
            int j = nums.size() - 1;
            while (j >= 0 && nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin()+i+1 , nums.end());
}

int main(){
    vector<int> nums{3,2,1};
    nextPermutation(nums);
    for(auto it:nums){
        cout<<it;
    }
}