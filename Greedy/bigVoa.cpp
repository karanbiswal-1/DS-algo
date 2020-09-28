//You're given n positive integers a1,a2,…,an. Using each of them exactly at once, 
//you're to make such sequence b1,b2,…,bn 
//that sequence c1,c2,…,cn is lexicographically maximal, where ci=GCD(b1,…,bi) - the greatest common divisor of the first i elements of b.

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  

void bigVova(vector<int> &p){
    int n = p.size();
    vector<int> temp(n,1);
    sort(p.begin(),p.end(),greater<int>());
    temp[0] =p[0];
     for(int i = 1;i<n;i++){
         int maxgcd = 1;
         for(int j =i;j<n;j++){
            maxgcd = max(gcd(p[j],temp[0]),temp[i]);
         }
         for(int j =n-1;j>=i;j--){
             if(gcd(p[j],temp[0]) == maxgcd){
                 temp[i] = p[j];
                 break;
             }
         }
     }
    for(int k =0;k<n;k++){
        cout<<temp[k]<<" ";
    }
}

int main(){
    int size = 4;
    vector<int> p(size);
    p[0]=1,p[1]=8,p[2]=2,p[3]=3;
    bigVova(p);
    return 0;
}