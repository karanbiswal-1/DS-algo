#include<bits/stdc++.h>
using namespace std;

int getCount(int n){
    int i=0;
    int ans =0;

    while(n >= (1<<i)){
        bool b=0;
        int flip = (1<<i);
        for(int j=0;j<=n;j++){
            ans+=b;
            if(flip ==1){
                b=!b;
                flip = (1<<i);
            }else{
                flip--;
            }
         }
         i++;
    }
}

int main(){
    int n = 5;
    cout<<"the number of set bits upto n is"<<" "<<getCount(n);
}