#include<bits/stdc++.h>
using namespace std;

void powerSet(char s[],int n){
    int size = pow(2,n);
    for(int i =0;i<size;i++){
        cout<<"{";
        for(int j =0;j<n;j++){
            
            if(i & (1<<j)){
                cout<<s[j];
            }
        }
        cout<<"}";
        cout<<endl;
    }
}
int main(){
    char s[] = {'a','b','c'};
    powerSet(s,3);
    return 0;
}