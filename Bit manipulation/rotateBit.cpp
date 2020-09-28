#include<bits/stdc++.h>
using namespace std;

int getBits(int n){
    int i =0;
    while(n >=(1<<i)){
        i++;
    }
    return i;
}

int getResult(int n,int x){
    int num = getBits(n) - x;
    int a = n >> x;
    int b =n << num;
    int res = a | b;
    
    return res;
}

int main(){
    cout<<getResult(5,2);
}