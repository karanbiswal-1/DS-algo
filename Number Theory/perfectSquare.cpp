//give the least number of perfect square that sum up to n

#include<bits/stdc++.h>
using namespace std;

 int numSquares(int n) {
    
    int psq[n+1];
    psq[0] = 0;
    for(int i =1;i<=n;i++){
        psq[i] = i;
        for(int j = 1;j*j<=n;j++){
            psq[i] = min( psq[i] , 1+psq[i-(j*j)]);
        }
    }
    return psq[n];
            
}

int main(){
    int n = 3;
    cout<<numSquares(n);
}