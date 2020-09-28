//A Problem on Sticks  codechef

#include<bits/stdc++.h>
using namespace std;

int max_operation(vector<int> v){
    int n = v.size();
    int min_op=0;
    sort(v.begin(), v.end(), greater<int>());
      for(int i=1;i<n;i++){
          if(v[i] < v[i-1]){
              min_op++;
          }
      }
      min_op++;
      return min_op;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int size;
        int length;
        cin>>size;
        while(size--){
            cin>>length;
            v.push_back(length);
            }
            cout<<max_operation(v);
    }
}