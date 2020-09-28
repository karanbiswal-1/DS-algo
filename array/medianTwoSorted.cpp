//Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

#include<bits/stdc++.h>
using namespace std;

void csort(vector<int>& nums){
    int k = nums[0];
    int i =1;
    for( i=1;i<nums.size() && nums[i]<k;i++){
        nums[i-1]=nums[i];
    }
    if(i != 1){
    nums[i-1] = k;
    }
}

double findMedian(vector<int>& nums1,vector<int>& nums2){

 int m= nums1.size();
 int n = nums2.size();

 if(n == 0){
    if(m%2){
        return (double)nums1[m/2];
    }else{
        return (double)(nums1[(m-1)/2] + nums1[m/2])/2;
    }
 }
 
 for(int i =0;i<m;i++){
     if(nums1[i] > nums2[0]){
         swap(nums1[i],nums2[0]);
         csort(nums2);
     }
 }
 
 if( (m+n) % 2 != 0 ){
     if((m+n)/2 < m){
        return (double)nums1[(m+n)/2];
     }else{
         return (double)nums2[(m+n)/2 - m]; 
     }
 }else{
     if((m+n)/2 < m){
         return (double)(nums1[(m+n-1)/2] +nums1[(m+n)/2])/2  ;
     }else if((m+n-1)/2 >= m){
         return (double)(nums2[(m+n-1)/2 -m] + nums2[(m+n)/2 - m])/2 ;
     }else if((m+n)/2 == m){
         return (double)(nums1[(m+n-1)/2] + nums2[(m+n)/2 - m])/2 ;
     }

 }
}

int main(){
    vector<int> nums1{0,0,0,0,0};
    vector<int> nums2{-1,0,0,0,0,0,1};
    double ans = findMedian(nums1,nums2);
    cout<<ans;
    return 0;
}
