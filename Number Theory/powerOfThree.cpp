//check if a number is power of 3

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

 bool isPowerOfThree(int n) {
    return fmod(log10(n)/log10(3),1)==0;        
}

int main(){
    int n = 243;
    cout<<isPowerOfThree(n);
    return 0;
}