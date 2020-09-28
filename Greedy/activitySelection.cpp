#include<bits/stdc++.h>
using namespace std;

void max_activity(vector<int> s,vector<int> f){
    int n = f.size();
    multimap<int,int> time;

    for(int i=0;i<n;i++){
        time.insert(make_pair(f[i],i));
    }
     multimap<int,int>::iterator it;
     int k = time.begin()->second;
     cout<<k<<endl;
     for(it=time.begin();it != time.end(); it++){
         if(s[it->second] >= f[k] ){
             cout<<it->second<<endl;
             k = it->second;
         }
     }
}

int main(){
    int size = 6;
    vector<int> s(size);
    vector<int> f(size);
    s[0]=0,s[1]=3,s[2]=1,s[3]=5;s[4]=5;s[5]=8;
    f[0]=6,f[1]=4,f[2]=2,f[3]=9;f[4]=7;f[5]=9;
    max_activity(s,f);
}