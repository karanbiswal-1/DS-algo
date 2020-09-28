#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> p,vector<int> w,int x){
    multimap<double,int> pbw;
    int n = p.size();
    double max_profit;

    for(int i =0;i<n;i++){
        pbw.insert(make_pair((double)p[i]/w[i],i));
    }
    
    multimap<double,int>::reverse_iterator it;
    for(it = pbw.rbegin(); it != pbw.rend(); it++){
        double fraction = (double)x / w[it->second];

        if(x > w[it->second] && x>0){
            max_profit += p[it->second];
            x -= w[it->second];
        }else{
            max_profit += fraction * p[it->second];
            break;
        }
    }
    return max_profit;   
   
}

int main(){
    int size =3;
    int x = 50;
    vector<int> p(size),w(size);
    p[0]=60,p[1]=100,p[2]=120;
    w[0]=10,w[1]=20;w[2]=30;
    cout<<maxProfit(p,w,x);

}