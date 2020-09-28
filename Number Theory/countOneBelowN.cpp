//Given an integer n, count the total number of digit 1 appearing in all non-negative integers less than or equal to n.

#include<bits/stdc++.h>
using namespace std;

int countDigitOne(int n) {
    if(n < 1){
        return 0;
    }
    int count=0;
    for(long long i = 1;i<=n;i*=10){
        long long div = i*10;
        count+= (n/div)*i;
        if(n%div >= i){
            count+= min(i, (n%div)-i+1);
        }
    }
    return count;

}

int main(){
    int n = 122;
    cout<<countDigitOne(n);
}