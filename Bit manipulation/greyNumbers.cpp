//differ bt only one bit

#include<bits/stdc++.h>
using namespace std;

int checkGrey(int a,int b){
    int res = a^b;
    if(!(res & (res-1))){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int a = 2;
    int b=1;
    cout<<checkGrey(a,b);
}