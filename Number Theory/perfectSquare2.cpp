//perfect square question using lagendra equation

#include<bits/stdc++.h>
using namespace std;

int numSqaures(int n){
    if(ceil(sqrt(n)) == floor(sqrt(n))){
        return 1;
    }
    int temp = n;
    while(temp%4==0){
        temp=temp/4;
    }
    if(temp%8==7){
        return 4;
    }

    for(int i = 1;i*i<=n;i++){
        if(ceil(sqrt(n-i*i)) == floor(sqrt(n-i*i))){
            return 2;
        }
    }

    return 3;

    
}

int main(){
    int n= 12;
    cout<<numSqaures(n);
    return 0;
}
