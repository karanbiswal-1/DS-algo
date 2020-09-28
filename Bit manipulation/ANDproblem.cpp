//finding AND between a and b;

#include<bits/stdc++.h>
using namespace std;

int getResult(int a,int b){
    int res=0;
    int d = b-a+1;
    int i =0;
    while(b >= (1<<i)){
        if(d <= (1<<i)){
            if(!((b+1) % (1<<i))){
                if(b & (1<<i)){
                    res+=(1<<i);
                }
            }
        }
        i++;
    }
    return res;
    
}

int main(){
    int a=4,b=7;
    cout<<getResult(a,b);
}