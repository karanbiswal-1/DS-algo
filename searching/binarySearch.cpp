#include<bits/stdc++.h>
using namespace std ;

int binarySearch(int arr[], int key,int size) {
	int l=0,h=size-1;
	 while(l<=h){
	 	int mid = (l+h)/2;    //if it is present at the middle
		 if(key == arr[mid]){
		 	return mid;
		 }
		 else if(key < arr[mid]){
		 	h= mid -1 ;     //seraching in the left half
		 }else{
		 	l= mid +1 ;    // seraching in the right half
		 }	
	 }
	 //if the key is not present
	 return -1;
	 }
	 
  main() {
  	int arr[] = {2,3,4,5,6,7,8,9,10,11,12,13};
  	int size  = sizeof(arr)/sizeof(arr[0]);
	int key = 9;
	int result = binarySearch(arr,key,size); 
	  if(result == -1){
	  	cout<<"not found";
	  }else{
	  	cout<<"found at "<<result ;
	  }
	    }
	    //time complexity for this algorithm is o(logn)
	    
	    
	    
