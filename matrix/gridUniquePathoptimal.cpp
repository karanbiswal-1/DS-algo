//using combination.

#include<bits/stdc++.h>
using namespace std;

int fact(int x,int y){
    int num=1;
    int den=1;
    int ans;
    for(int i =1;i<=y;i++){
        num*=i;
    }
    for(int j=0;j<y;j++){
        den*=(x-j);
    }
    ans = den/num;
    return ans;

}

int total_path(int si,int sj,int ei,int ej,int m,int n){
   int x = (ei-si) + (ej-sj);
   int y = (ei-si);
   return fact(x,y);
}
 int main(){
     int m = 2;
    int n = 3;
    cout<<total_path(0,0,1,2,m,n);
    return 0;
 }