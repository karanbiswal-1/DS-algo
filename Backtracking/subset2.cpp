#include<bits/stdc++.h>
using namespace std;

 void backtracking(vector<vector<int> >& ans,vector<int>& cur,vector<int>& nums, int index){
     ans.push_back(cur);
     for(int i = index;i<nums.size();i++){
         if(i>index && nums[i]==nums[i-1]){
             continue;
         }
         cur.push_back(nums[i]);
         backtracking(ans,cur,nums,i+1);
         cur.pop_back();
     }
 }

 vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     sort(nums.begin(),nums.end());
    vector<vector<int> > ans;
    vector<int> cur;
    int index =0;
    backtracking(ans,cur,nums,index);  
    return ans;      
}

int main(){
    vector<int> nums={4,4,4,1,4};
    vector<vector<int> > ans = subsetsWithDup(nums);
   for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) 
            cout << ans[i][j] << " "; 
        cout << endl; 
    } 
}