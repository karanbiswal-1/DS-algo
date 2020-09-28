//find the number of prime less than or equal to n

#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
    vector<bool> p(n+1,true);
    
    for(int i =2;i*i<n;i++){
        if(p[i]){
            for(int j = i*i;j<n;j+=i){
                p[j]=false;
            }
        }
    }
    for(int i = 1;i<n;i++){
        if(p[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n = 10;
    sieve(n);
    return 0;
}