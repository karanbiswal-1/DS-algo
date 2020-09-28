#include<bits/stdc++.h>
using namespace std;

int getSwapped(int &n){
    int x = n & 0xAAAAAAAA;
     x = x >> 1;
     int y = n & (0xAAAAAAAA>>1);
     y = y<<1;
    n = x|y;
}

int main(){
    int n = 21;
    getSwapped(n);
    cout<<n;
}