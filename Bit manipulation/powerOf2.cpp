//Given an integer, write a function to determine if it is a power of two.

#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n >0){
    if(!(n & (n-1))){
        return true;
    }else{
        return false;
    }        
}
}

int main(){
    int n = 0;
    if(isPowerOfTwo(n)){
        cout<<"yes it is";
    }else{
        cout<<"no it isnt";
    }
}