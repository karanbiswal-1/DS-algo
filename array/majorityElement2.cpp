//find the number appering more than floor valur of n/3
//voyer moore voting algo

#include<bits/stdc++.h>
using namespace std;

void majorityElement(int arr[],int n){
    int num1 = -1;
    int num2 = -1;
    int c1=0,c2=0;

    for(int i =0;i<n;i++){
        if(arr[i] == num1){
            c1++;
        }else if(arr[i] == num2){
            c2++;
        }else if(c1 == 0){
            num1 = arr[i];
            c1+=1;
        }else if(c2 == 0){
            num2 = arr[i];
            c2+=1;
        }else{
            c2--;
            c1--;
        }

    }
    cout<<num1<<" "<<num2;
}

int main(){
    int arr[] = {1,1,1,2,3,3,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    majorityElement(arr,n);
}