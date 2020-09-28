#include<bits/stdc++.h>
using namespace std;

void backtracking(vector<vector<int> >& ans,vector<int>& current,vector<int>& nums,int index){
    ans.push_back(current);
    for(int i = index;i<nums.size();i++){
        current.push_back(nums[i]);
        backtracking(ans,current,nums,i+1);
        current.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int> > ans;
    vector<int> current;
    int index =0;
     backtracking(ans,current,nums,index);
     return ans;       
}

int main(){
    vector<int> nums={1,2,3};
    vector<vector<int> > ans = subsets(nums);
   for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) 
            cout << ans[i][j] << " "; 
        cout << endl; 
    } 
}