//Given a positive integer, return its corresponding column title as appear in an Excel sheet.

#include<bits/stdc++.h>
using namespace std;

 string convertToTitle(int n) {
     string res;
     char temp;
     while(n){
         n-=1;
         temp = 'A'+n%26;
         res = temp + res; 
         n = n/26;
     } 
     return res;   

}

int main(){
    int n = 1500;
    cout<<convertToTitle(n);
    return 0;
}