//Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.

#include<bits/stdc++.h>
using namespace std;

long rangeBitwiseAnd(long m, long n) {
  int step =0;
  while(m != n){
     m =  m >> 1;
     n = n >> 1;
     step++;
  }
  m = m << step;
  return m;
}

int main(){
    long m = 5;
    long  n = 7;
    cout<<rangeBitwiseAnd(m,n);
}