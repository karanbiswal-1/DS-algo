//Write a program to find the nth super ugly number.

//Super ugly numbers are positive numbers whose all prime factors are in the given prime list primes of size k.

#include<bits/stdc++.h>
using namespace std;

 int nthSuperUglyNumber(int n, vector<int>& primes) {
   int size = primes.size();  
  int superUgly[n];
  vector<int> p(size,0);
  superUgly[0] = 1;

  for(int i=1;i<n;i++){
      int nextno = INT_MAX;
      int id =0;
      for(int j =0;j<size;j++){
          int possible = primes[j] * superUgly[p[j]];
          if(possible < nextno){
              nextno = possible;
              id = j;
          }else if(possible == nextno){
              p[j]++;
          }
      }
      superUgly[i] = nextno;
      p[id]++;
  }
  return superUgly[n-1];
    
}

int main(){
    int n = 12;
    vector<int> primes{2,7,13,19};
    cout<<nthSuperUglyNumber(n,primes);
}