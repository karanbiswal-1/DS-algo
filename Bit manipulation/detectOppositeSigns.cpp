#include<bits/stdc++.h>
using namespace std;

bool detect(int a,int b){
    return ((a^b)<0);
}

int main(){
    int a=1;
    int b = 100;
    cout<<"sign of a and b is opposite"<<detect(a,b);
    return 0;
}