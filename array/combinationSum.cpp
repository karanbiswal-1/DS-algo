//Given a set of candidate numbers (candidates) (without duplicates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    int n = candidates.size();
    vector<vector<int>> ans;
    
    if(n<1){
        return ans;
    }    
    for(int p=0;p<n;p++){

    }

    for(int i =0;i<n;i++){
        if( candidates[i] <= target){
            for(int j = 1; j*candidates[i]<=target;j++)

            if(target % candidates[i] == 0){
                int k = target/candidates[i];
                vector<int> vec(k,candidates[i]);
                ans.push_back(vec);
            }
        }
    }
}