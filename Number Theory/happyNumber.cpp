//check happy  number

#include<bits/stdc++.h>
using namespace std;

int subSQ(int n){
    int s =0;
    while(n){
        s += (n%10)*(n%10);
        n=n/10;
    }
    return s;
}

 bool isHappy(int n) {
    map<int,int> hash;
    while(1){
        if(hash[n]==1){
            return false;
        }
        else if(n ==1){
            return true;
        }else{
            hash[n] = 1;
          n = subSQ(n);
        
        }
    }
    return false;        
}

int main(){
    int n = 19;
    cout<<isHappy(n);
}