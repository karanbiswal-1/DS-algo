//find the nth ugly number 
//using DP

#include<bits/stdc++.h>
using namespace std;

int NthUgly(int n){
    int ugly[n];
    ugly[0] = 1;
    int i2 = 0;
    int i3 =0;
    int i5 = 0;
    int nexti2 = 2;
    int nexti3 = 3;
    int nexti5 = 5;
    int nextUgly = 0;
    for(int i =1;i<n;i++){
        nextUgly = min(nexti2, min(nexti3,nexti5) );
        ugly[i] = nextUgly;
        if(nextUgly == nexti2){
            i2++;
            nexti2=ugly[i2]*2;
        }
         if(nextUgly == nexti3){
            i3++;
            nexti3 = ugly[i3]*3;
        }
         if(nextUgly == nexti5){
            i5++;
            nexti5 = ugly[i5]*5;
        }
    }
    return nextUgly;
}

int main(){
    int n = 150;
    cout<<NthUgly(n);
    return 0;
}