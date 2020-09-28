//finding out the sqaure root using babylonian method

#include<bits/stdc++.h>
using namespace std;

float findroot(int n){
    float x = n;
    float y = 0;
    while(x-y > 0.00001){
        x = (x+y)/2;
        y = n/x;
    }
    return x;
}

int main(){
    int n = 50;
    cout<<findroot(n);
}