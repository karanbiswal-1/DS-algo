#include<bits/stdc++.h>
using namespace std;

int min(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

void unsorted(int arr[],int n){
    int b1,b2;
    int mini=100,maxi=0;
    
   for(int i =1;i<n;i++){
       if(arr[i-1]<arr[i]){
           if(arr[i]>arr[i+1]){
               b1 = i;
               break;
           }
       }
   }
   for(int i =n-2;i>=0;i--){
       if(arr[i]<arr[i+1]){
           if(arr[i]<arr[i-1]){
               b2 = i;
               break;
           }
       }
   }

   for(int i = b1;i<=b2;i++){
       mini = min(mini,arr[i]);
       maxi = max(maxi,arr[i]);
   }
   for(int i =0;i<n;i++){
       if(arr[i]>mini){
           cout<<i<<" ";
           break;
       }
      }
     for(int i =0;i<n;i++){
       if(arr[n-1-i]<maxi){
           cout<<n-1-i<<" ";
           break;
       }
      }
    
}

int main(){
    int arr[] = {0,1,15,25,6,7,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    unsorted(arr,n);
    return 0;
}