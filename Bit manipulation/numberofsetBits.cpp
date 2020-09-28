//Write a function that takes an unsigned integer and return the number of '1' bits it has (also known as the Hamming weight).
#include<bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n) {
    int count =0;
    for(int i =0;i<32;i++){
        if(n & (1<<i)){
            count++;
        }
    }
    return count;        
}

int main(){
    uint32_t n = 00000000000000000000000000001011;
    cout<<hammingWeight(n);
}

