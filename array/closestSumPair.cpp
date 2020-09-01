//closest sum pair in two arrays
//two pointer approach

#include<bits/stdc++.h>
using namespace std;

void csp(int a[],int b[],int n1,int n2,int x){
int temp[n1+n2];
int bi[n1+n2];
int i=0;
int j=0;
int k =0;
int p1=0,p2=n1+n2-1;
int diff = 1000;

while ( i <n1 &&  j<n2)
{
    if(a[i]<b[j]){
        temp[k] = a[i];
        bi[k] = 1;
        i++;
        k++;
    }else{
        temp[k] = b[j];
        j++;
        bi[k] =0;
        k++;
    }
}
while(i<n1){
    temp[k] = a[i];
    i++;
    k++;
}
while(j<n2){
    temp[k] = b[j];
    j++;
    k++;
}
while(p1<p2 && abs(temp[p1]+temp[p2]-x) < diff){
 if(bi[p1]+bi[p2] == 1){
diff = abs(temp[p1]+temp[p2]-x);
 }
 if(temp[p1]+temp[p2]>x){
     p2--;
 }else{
     p1++;
 }
}
cout<<temp[p1]<<" "<<temp[p2]<<" ";
 }

 int main(){
     int a[] ={1,4,5,7};
     int b[] = {10,20,30,40};
     int n1 = sizeof(a)/sizeof(a[0]);
     int n2 = sizeof(b)/sizeof(b[0]);
     int x= 38;
     csp(a,b,n1,n2,x);
     return 0;
 }


