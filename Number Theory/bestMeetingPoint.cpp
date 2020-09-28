//A group of two or more people wants to meet and minimize the total travel distance. You are given a 2D grid of values 0 or 1, where each 1 marks the home of someone in the group. The distance is calculated using Manhattan Distance, where distance(p1, p2) = |p2.x - p1.x| + |p2.y - p1.y|.


#include<bits/stdc++.h>
using namespace std;

int calDist(vector<int> nums){
    int dist=0;
    int mid = nums[nums.size()/2];
    for(auto it:nums){
        dist+=abs(it-mid);
    }
    return dist;
}

int minDistance(vector<vector<int> > grid){
    int n  = grid.size();
    int m = grid[0].size();
    vector<int> rows;
    vector<int> col;

    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(grid[i][j] == 1){
                rows.push_back(i);
                col.push_back(j);
            }
        }
    }
    sort(col.begin(),col.end());
   
    return calDist(rows) + calDist(col);

}




int main(){
    vector<vector<int> > grid{{1,0,0,0,1},{0,0,0,0,0},{0,0,1,0,0}};
    cout<<minDistance(grid);
    return 0;
}