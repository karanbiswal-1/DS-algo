#include<bits/stdc++.h>
using namespace std;

int jobSenquencing(vector<int> p,vector<int> d){
    int slot = 0;
    int n = p.size();
    int tot_profit =0;
    vector<int>::iterator it;
    for(it=d.begin();it != d.end(); it++){
        slot = max(slot , *it);
    }

    vector<int> jobs(slot,-1);

    multimap<int, int> pro;
    for(int i =0;i<n;i++){
        pro.insert(make_pair(p[i],i));
    }

    multimap<int,int>::reverse_iterator pp;
    for(pp=pro.rbegin();pp != pro.rend(); pp++){
        if(jobs[d[pp->second]-1] == -1){
            jobs[d[pp->second]-1] = pp->second ;
            tot_profit+=pp->first;
        }else{
            for(int j = d[pp->second]-2;j>=0;j--){
                if(jobs[j] == -1){
                    jobs[j] = pp->second;
                    tot_profit+=pp->first;
                    break;
                }
            }
        }

    }
    cout<<jobs[0];
    cout<<jobs[1];
    cout<<jobs[2];
    cout<<jobs[3];
    return tot_profit;
    
}

int main(){
    int size = 7;
    vector<int> p(size);
    vector<int> d(size);
    p[0]=35,p[1]=30,p[2]=25,p[3]=20,p[4]=15,p[5]=12,p[6]=5;
    d[0]=3,d[1]=4,d[2]=4,d[3]=2,d[4]=3,d[5]=1,d[6]=2;
    cout<<jobSenquencing(p,d);
    
}