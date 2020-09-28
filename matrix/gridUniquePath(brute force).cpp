#include<bits/stdc++.h>
using namespace std;

int pathNo(int si,int sj,int ei,int ej,int m,int n){
    int i = si;
    int j = sj;

    if( i > m || j > n ){
        return 0;
    }else if(i==ei || j==ej){
        return 1;
    }else
    {
      return pathNo(i+1,j,ei,ej,m,n) + pathNo(i,j+1,ei,ej,m,n);  
    }
    
        
    
}

int main(){
    int m = 2;
    int n = 3;
    cout<<pathNo(0,0,1,2,m,n);
}
