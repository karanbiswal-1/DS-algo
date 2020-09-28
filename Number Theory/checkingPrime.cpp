//cheking primes  in root n time.
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int count =0;
    for(int i=2;i*i<n;i++){
        if(n%i == 0){
            count++;
        }
    }
    return (count==0);
}

int main(){
    int n = 6;
    cout<<isPrime(n);
}