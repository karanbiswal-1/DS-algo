//check if a number  is ugly number

#include<bits/stdc++.h>
using namespace std;




   bool isUgly(int num) {
       while(num%2 == 0){
           num=num/2;
       }
       while(num%3 == 0){
           num = num/3;
       }
       while(num % 5 == 0){
           num = num/5;
       }
       return (num==1);
}

int main(){
    int n = 6;
    cout<<isUgly(n);
    return 0;
}