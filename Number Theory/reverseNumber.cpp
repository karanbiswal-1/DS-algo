//Given a 32-bit signed integer, reverse digits of an integer.

//Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

#include<bits/stdc++.h>
using namespace std;

 int reverse(int x) {
       
        int res =0 ;
        while(x){
            int rem = x%10;
            if(abs(res) > (INT_MAX/10) ||  (abs(res) > (INT_MAX/10)  && rem>2) ){
                return 0;
            }
            res = res*10 + rem;
            x = x/10;
        }
        
        return res;
}

int main(){
    int x = 1463847413;
    cout<<reverse(x);
}