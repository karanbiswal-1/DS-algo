//Given a column title as appear in an Excel sheet, return its corresponding column number.

#include<bits/stdc++.h>
using namespace std;

int titleToNumber(string s) {
    int n = s.length();
    int res =0;
    for(int i =0;i<n;i++){
       
        res = res +  pow(26,i)*(s.at(n-1-i)-'A'+1) ;
        
    }
    return res;        
}

int main(){
    string s = "BER";
    cout<<titleToNumber(s);
    return 0;
}