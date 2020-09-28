//elements are repeating 3 number of times

#include<bits/stdc++.h>
using namespace std;

int occurOnce(int arr[],int n){
    int once=0,twos=0;
    int common_bit_mask;

    for(int i =0;i<n;i++){
        twos = twos | (once&arr[i]);
        once = once^arr[i];
        common_bit_mask = ~(once&twos);
        once &= common_bit_mask;
        twos &= common_bit_mask;
    }
    return once;
}
int main() 
{ 
    int arr[] = { 3, 3, 2, 3 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "The element with single occurrence is  " << occurOnce(arr, n); 
    return 0; 
} 