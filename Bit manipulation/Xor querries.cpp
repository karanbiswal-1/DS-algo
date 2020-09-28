#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> getResult(vector<int>& arr, vector<vector<int>>& q){
    int n = arr.size();
    int pre[n];
    pre[0] = arr[0];
    vector<int> res;

    for(int i =1;i<n;i++){
        pre[i] = pre[i-1]^arr[i];
    }
     for(int j =0;j<q.size();j++){
         int l = q[j][0];
         int r = q[j][1];

         if(l==0){
            res.push_back(pre[r]);
         }else{
             res.push_back(pre[r]^pre[l-1]);
         }
     }
    
     return res;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    vector<vector<int>> q = { {1,2},{0,3}};
    getResult(arr,q);
}