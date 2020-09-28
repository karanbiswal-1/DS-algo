#include<bits/stdc++.h>
using namespace std;

int minFlips(int a,int b,int c){
 
 int count =0;

 for(int i=0;i<32;i++){
     bool x=false,y=false,z=false;
     if(a & (1<<i)){
         x = true;
     }
     if(b & (1<<i)){
         y=true;
     }
     if(c & (1<<i)){
         z= true;
     }
    
     if(z == false){
        if(x==true && y==true){
            count = count + 2;
        }
        else if(x==true || y==true){
            count++;
        }
     }else{
         if(x==false && y==false){
             count++;
         }
     }
 }
 return count;
}

int main(){
    int a= 3;
    int b = 4;
    int c= 5;
    cout<<minFlips(a,b,c);
    return 0;
}