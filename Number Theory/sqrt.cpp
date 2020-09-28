#include<bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    while(x){
        int i =1;
        int j = x;
        while(i < j){
            if(i == j-1){
                return i;
            }
            int mid = (i+j)/2;
            if(pow(mid,2) == x){
                return mid;;
            }else if(pow(mid,2) > x){
                j = mid;
            }else{
                i = mid;
            }
        }
        
    }        
}

int main(){
    int n = 223;
    cout<<mySqrt(n);
}