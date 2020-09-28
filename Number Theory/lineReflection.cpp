//line reflection

#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}

bool isReflected(vector<pair<int,int> > points){
    if(points.size() < 2){
        return false;
    }
    sort(points.begin(),points.end(),sortbysec);
    for(int i =0;i<points.size();i++){
        if(points[i].second==points[i+1].second && (points[i+1].first-points[i].second)%2==0){
            return true;
        }
    }
    return false;
    
}

int main(){
    vector<pair<int,int> > points{{1,1},{-1,-1}};
    cout<<isReflected(points);
    return 0;
}