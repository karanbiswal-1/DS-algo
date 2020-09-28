#include<bits/stdc++.h>
using namespace std;

int findGCD(int a,int b){
    return b ? findGCD(b,a%b) : a;
}

int findLCM(int a,int b,int gcd){
    return (a/gcd)*b;
}

int main(){
    int a =10;
    int b = 6;
    int gcd = findGCD(a,b);
    int lcm = findLCM(a,b,gcd);
    cout<<gcd<<" "<<lcm;
    return 0;
}