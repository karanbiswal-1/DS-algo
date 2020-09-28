//compute the are of two rectilinear rectangle

#include<bits/stdc++.h>
using namespace std;


int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    
    int x = min(C,G)>max(A,E) ? (min(C,G)-max(A,E)) : 0;
    int y = min(D,H)>max(B,F) ? (min(D,H)-max(B,F)) : 0;    
    return (C-A)*(D-B) + (G-E)*(H-F) -(x*y) ;  
}

int main(){
    cout<<computeArea(-3,0,3,4,0,-1,9,2);
   //cout<<overlapping(0,9,-3,3);
}