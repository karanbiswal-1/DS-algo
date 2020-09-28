//multiply with 7

#include<bits/stdc++.h>
using namespace std;

int mul7(int n){
    if(n == 0){
        return 0;
    }
    if(n ==1 ){
        return 7;
    }
    if(n < 0){
        n = -n;
    }
    int sign = (n<0) ? -1:1;
    return sign* ((n << 3) - n);
}

int main(){
    int n = 7;
    cout<<mul7(n);
}
