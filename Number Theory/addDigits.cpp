//find the digital root 

#include<bits/stdc++.h>
using namespace std;

 int addDigits(int num) {
    if(num == 0){
        return 0;
    } 
    return (num%9) ? num%9 : 9;
    
 }

 int main(){
     int num = 38;
     cout<<addDigits(num);
    
     return 0;
 }