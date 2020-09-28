#include<bits/stdc++.h>
using namespace std;

int nextSparse(int x){
    vector<bool> bin;

    while(x){
        bin.push_back((x & 1));
        x >>= 1;
    }
    bin.push_back(0);
    int n = bin.size();
    int last_bit = 0;
    int ans =0;

    for(int i =1;i<n;i++){
        if( bin[i]==1 && bin[i-1]==1 && bin[i+1]!=1 ){
            bin[i+1]=1;
            for(int j =i ; j>=last_bit; j--){
                bin[j] = 0;
            }
            last_bit = i+1;
        }
    }

    for(int i =0;i<n;i++){
        ans+= bin[i]*(1<<i) ;
    }

    return ans;
}

int main(){
    int x = 12;
    cout<<nextSparse(x);
}