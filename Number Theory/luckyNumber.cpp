#include<bits/stdc++.h>
using namespace std;

bool isLucky(int n){
   
    int counter =2;
    while(counter < n ){
        if(n % counter == 0){
            return false;
            
        }
       n -= n/counter;
       counter++;
    }
    return true;
}

int main(){
    int n = 21;
    cout<<isLucky(n);
}