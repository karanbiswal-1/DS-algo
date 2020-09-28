//Given two integers dividend and divisor, divide two integers without using multiplication, division and mod operator.

//Return the quotient after dividing dividend by divisor.

#include<bits/stdc++.h>
using namespace std;


  int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int count=0;
        int sign = 1;;
    int dvd = abs(dividend);
    int dvs = abs(divisor);
    
   if( dividend>0 ^ divisor>0){
       sign = -1;
   }

   while(dvd >= dvs){
       int i = 1;
       int accum = dvs;
       while(accum > INT_MIN>>1 && dvd>=(accum+accum)){
           i+=i;
           accum+=accum;
       }
       dvd-=accum;
       count+=i;
   }
   if(sign == 1){
       return count;
   }else{
       return -count;
   }       
}

int main(){
    int dividend= 7;
    int divisor =  -1;
    cout<<divide(dividend,divisor);
}