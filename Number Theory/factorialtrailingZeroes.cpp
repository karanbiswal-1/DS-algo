//find trailing zeroes in factorial

#include<bits/stdc++.h>
using namespace std;

 int trailingZeroes(int n) {
    int count =0;
    int i =5;
    if(n<5){
        return 0;
    }
    while(n >= i){
        count+=(n/i);
        i = i*5;
    }
    return count;        
}

int main(){
    int n = 200;
    cout<<trailingZeroes(n);
    return 0;
}