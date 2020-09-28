#include<bits/stdc++.h>
using namespace std;

long long fact(long long n); 
  
long long nCr(long long n, long long r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
}

long long fact(long long n) 
{ 
    long long res = 1; 
    for (long long i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 

int niceSwaps(long long n){
   long long sum =0;
   long long sumx =0;
    long long j =n;
   for(long long i =1;i<=n;i++){
       sum += i;
   }
   if(sum % 2 != 0 ){
       return 0;
   }
   if(n<5){
       return 2;
   }else{
       while(j > n/2  && sumx < (sum/2)){
           sumx += j;
           j--;
        }
        if(sumx == (sum/2)){
            return (nCr(n-j,2) + nCr(j,2));
        }else{
            return (n-j);
        }
   }

}

int main(){
    long int t;
    int i=0;
    long long n;
    cin>>t;
    long long arr[t];
    if(t >= 1){
      for(long int i =0;i<t;i++){
        cin>>n;
        arr[i]=n;
      }
      for(long int i =0;i<t;i++){
        
        cout<<niceSwaps(arr[i])<<endl;
      }
    }else{
        return 0;
    }
}