//count prime upto n

#include<bits/stdc++.h>
using namespace std;;

 int countPrimes(int n) {
     if(n < 2){
         return 0;
     }
      vector<bool> p(n+1,true);
        int count =0;
    for(int i =2;i*i<n;i++){
        if(p[i]){
            for(int j = i*i;j<n;j+=i){
                if(p[j]){
                 p[j]=false;
                 count++;
            }
            }
        }
    }
    
    return n-count-2;
}
int main(){
    int n = 13;
    cout<<countPrimes(n);
    return 0;
}