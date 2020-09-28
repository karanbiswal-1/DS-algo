//// CPP program to check if n is a multiple of 3 

#include<bits/stdc++.h>
using namespace std;

int isMultiple(int n){
    if(n < 0){
        n = -n;
    }
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 0;
    }
    int odd=0;
    int even=0;

    while(n){
        if(n&1){
            odd++;
        }
        if(n&2){
            even++;
        }
        n = n >> 2;
    }

    return isMultiple(odd-even);
}

int main(){
    int n = 2147483637;
    cout<<isMultiple(n);
}