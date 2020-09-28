//0<x<n and n+x = n^x
//n+x = (n^x) + 2*(n & x)

#include<bits/stdc++.h>
using namespace std;

void getNumbers(int n){
    for(int i=0;i<n;i++){
        if(!(n & i)){
            cout<<i<<endl;
        }
    }
}
int main(){
    getNumbers(6);
    return 0;
}