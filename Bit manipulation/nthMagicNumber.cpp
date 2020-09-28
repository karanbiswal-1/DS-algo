#include<bits/stdc++.h>
using namespace std;

int getMagicNumber(int n){
 int i =0;
 int res=1;
 while(n >= (1<<i)){
     if( n & (1<<i)){
         res += pow(5,(i+1));
     }
     i++;
 }
 return res;
}

int main(){
    int n =3;
    cout<<getMagicNumber(n);
}