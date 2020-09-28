//There are n bulbs that are initially off. You first turn on all the bulbs. Then, you turn off every second bulb. On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on). For the i-th round, you toggle every i bulb. For the n-th round, you only toggle the last bulb. Find how many bulbs are on after n rounds.

#include<bits/stdc++.h>
using namespace std;

 int bulbSwitch(int n) {
    vector<int> nums(n,1);
    int count =0;
     for(int i = 2;i<=n;i++){
         for(int j =i-1;j<n;j+=i){
             nums[j] = 1 - nums[j];
         }
     }
     for(auto it:nums){
         if(it == 1){
             count++;
         }
     }
     return count;        
}

int main(){
    int n = 1;
    cout<<bulbSwitch(n);
    return 0;
}

//or

//just return sqrt(n);