//Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

//(i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).

//Find the minimum element.

#include<bits/stdc++.h>
using namespace std;

 int findMin(vector<int>& nums) {
    int n = nums.size();
    if(n == 1){
        return nums[0];
    }
    int i =0;
    int j = n-1;
    if(nums[i] < nums[j]){
        return nums[i];
    }
    while(i<=j){
        int mid = (i+j)/2;
        if( nums[mid] < nums[mid-1]){
            return nums[mid];
        }
        if(nums[mid] > nums[mid+1] ){
            return nums[mid+1];
        }
        if(nums[mid] >= nums[0]){
            i = mid+1;
        }else{
            j=mid;
        }
    }
    return nums[0];

          
}

int main(){
    vector<int> nums{1,2,3,4,0};
    cout<<findMin(nums);
}