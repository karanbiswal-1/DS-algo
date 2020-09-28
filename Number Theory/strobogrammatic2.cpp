//find all strobohrammatic number of length n

#include<bits/stdc++.h>
using namespace std;

  map<char,char> hash;
    hash.insert(make_pair('0','0')); 
     hash.insert(make_pair('1','1')); 
      hash.insert(make_pair('8','8')); 
       hash.insert(make_pair('6','9')); 
        hash.insert(make_pair('9','6')); 

vector<string> strobogrsammatic(int n ){
    vector<string> res ;
   if(n < 1){
     return res;
  }
  int i =0;;
  int j = n-1;
  string curr[n];
  helper(curr,i,j,res);
  return res;
}

void helper(string curr,int i,int j,vector<string> res){
    if(i > j){
        if(curr[0] != '0' || curr.length() == 1){
            res.push_back(curr);
        }
        return;
    }
    for(string it : hash){
        if(i==j  && hash[0]!=hash[1]){
            continue;
        }
        curr.at(i) = it.at(0);
        curr.at(j) = it.at(1);
        helper(curr,i+1,j-1,res); 
    }
}

int main(){
    vector<string> res = strobogrsammatic(2);
    cout<<res.size();
}