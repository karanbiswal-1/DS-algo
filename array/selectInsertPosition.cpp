//Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

#include<bits/stdc++.h>
using namespace std;

 int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    if(n<0){
        return 0;
    }
    int l =0;
    int r= n-1;
   
    while(l<=r){
        int mid = (l+r)/2;
        int value = nums[mid];

        if(target == value){
            return mid;
            break;
        }
        if(target < value){
            r=mid-1;
            if(l==r && nums[l]!=target){
                 if(target > nums[l]){
                    return l+1;
                }else{
                    return l;
                }
            }
        }else{
            l = mid+1;
            if(l==r && nums[r]!=target){
                if(target < nums[r]){
                    return r;
                }else{
                    return r+1;
                }
            }
        }
    }
    if(r < l){
        return l;
    }else if(l>r){
        return r+1;
    }else{
        return -1;
    }       
}

int main(){
    vector<int> nums{1};
    int target = 0;
    cout<<searchInsert(nums,target);    
}