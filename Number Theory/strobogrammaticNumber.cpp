//check a number is strobogrammatic or not (looks same upside down)

#include<bits/stdc++.h>
using namespace std;


bool strobogrammatic(string num){
    unordered_map<char,char> hash;
    hash.insert(make_pair('0','0')); 
     hash.insert(make_pair('1','1')); 
      hash.insert(make_pair('8','8')); 
       hash.insert(make_pair('6','9')); 
        hash.insert(make_pair('9','6')); 

    int i =0; int j = num.length()-1;
    while(i <= j){
        if(hash.find(num.at(i))!=hash.end() && hash.find(num.at(j))!=hash.end()){
         if(num.at(i) != hash[num.at(j)]){
            return false;
        }
     }else{
         
         return false;
     }
     i++;
     j--;
    }
    return true;
}



int main(){
    string num = "18681";
    cout<<strobogrammatic(num);
    return 0;
}