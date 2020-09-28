//You are given an array x of n positive numbers. You start at point (0,0) and moves x[0] metres to the north, then x[1] metres to the west, x[2] metres to the south, x[3] metres to the east and so on. In other words, after each move your direction changes counter-clockwise

#include<bits/stdc++.h>
using namespace std;

  bool isSelfCrossing(vector<int>& x) {
    x.insert(x.begin(),4,0);
    int len = x.size();
    int i = 4;
    for(;i<len&&x[i]>x[i-2];i++);

    if(i == len){return false;}
    
    if(x[i] >= x[i-2]-x[i-4]){  x[i-1]-=x[i-3];}

    for(i++;i<len&&x[i]<x[i-2];i++);

    return i!=len;
}

int main(){
    vector<int> x{3,3,4,2,3};
    cout<<isSelfCrossing(x);
    return 0;
}