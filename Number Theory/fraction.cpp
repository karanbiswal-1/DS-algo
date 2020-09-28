//Given two integers representing the numerator and denominator of a fraction, return the fraction in string format.

//If the fractional part is repeating, enclose the repeating part in parentheses.

#include<bits/stdc++.h>
using namespace std;

string fractionToDecimal(int numerator, int denominator) {
    string res;
    string frac;
    int sign=1;
    if(numerator*denominator<0){
        sign = -1;
    }
    if(numerator < 0){
        numerator = -numerator;
    }
    if(denominator < 0){
        denominator = -denominator;
    }
     int a  = numerator/denominator;
     res += to_string(a);
     if(numerator%denominator != 0){
     res = res + ".";
     int rem = numerator%denominator;
     map<int,int> R;
    while(rem){
        if(R.find(rem)!= R.end()){
            frac.insert(R[rem]-1,"(");
            frac.insert(frac.length(),")");
            break;
        }else{
            
             int rem_it = rem*10;
             while(rem_it < denominator){
                 rem_it = rem_it * 10;
                 frac+=to_string(0);
                 R[rem] = 1;
             }
            int rem_set = rem_it/denominator;
            frac+=to_string(rem_set);
            if(R.find(rem)== R.end()){
            R[rem] = frac.length();}
            rem = rem_it%denominator;
            
        }
    }
    }
     if(sign<0){
         res.insert(0,"-");
     }
    return res+frac;        
}

int main(){
    int n = -50;
    int d = 8;
    cout<<fractionToDecimal(n,d);
}