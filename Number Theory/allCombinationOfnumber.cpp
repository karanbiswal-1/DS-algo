//You can win three kinds of basketball points, 1 point, 2 points, and 3 points. Given a total score n, print out all the combination to compose n.

#include<bits/stdc++.h>
using namespace std;

void allCombination(int n){
    if(n>0){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    for(int i =1;i<=3;i++){
        for(int j =1;j<=3;j++){
        cout<<i;
        
    }
    }
}
}

int main(){
    int n = 3;
    allCombination(n);
}