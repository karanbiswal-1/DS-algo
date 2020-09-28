//Given a positive integer n, break it into the sum of at least two positive integers and maximize the product of those integers. Return the maximum product you can get.

#include<bits/stdc++.h>
using namespace std;

 int integerBreak(int n) {
      if(n<2){
          return 0;
      }

    vector<int> maxMul(n+1,0);
    maxMul[1] =0;
    maxMul[2] = 1;

    for(int i=3;i<=n;i++){
      for(int j =1;j<i;j++){
         maxMul[i] = max(maxMul[i], max(j*(i-j),j*maxMul[i-j]) );
      }
    }
    return maxMul[n];
}        


int main(){
    int n = 10;
    cout<<integerBreak(n);
    return 0;
}