//Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

#include<bits/stdc++.h>
using namespace std;

int maxContainer(vector<int> height){
    int i =0;
    int j = height.size()-1;
    int max_area =0;;
    while(i<j){
        max_area = max( max_area , (min(height[i],height[j]) * (j-i)) );
        if(height[i] < height[j] ){
            i++;
        }else if(height[i] > height[j]){
            j--;
        }else{
            i++;
            j--;
        }
    }
    return max_area;  
}

int main(){
    vector<int> height{1,8,6,2,5,4,8,3,7};
    cout<<maxContainer(height);
}