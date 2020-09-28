//find prime factorisaation of a number in log n per query

#include<bits/stdc++.h>
using namespace std;

#define MAXN 10001

int spf[MAXN];

  void sieve(int n){
      for(int i =1;i<=n;i++){
          spf[i] = i;

          if( i % 2 ==0){
              spf[i]=2;
          }
      }
      for(int j = 3; j*j<= n;j+=2){
        for(int k =j*2;k<=n;k+=j){
          if(spf[k]==k){
              spf[k] = j;
          }
      }
      }
  }

  void primefACT(int n){
      sieve(n);
     // cout<<spf[15];
      if(n == 0){
          cout<<"0";
          return;
      }
     while(n!=1){
          
          cout<<spf[n];
          n = n/spf[n];
      }
  }

  int main(){
      int n = 71;
      primefACT(n);
  }