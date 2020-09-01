#include<bits/stdc++.h>
using namespace std ;


	 int linearSearch( int arr[], int n, int x) {
	 	int i ;
	 	for ( i = 0; i<n ; i++) {
	 		if(arr[i] == x){
	 			return i;
			 }
			 } 
	    
		return -1;
			 
		 
	 }
	 int main(void) {
		int arr[] = {2,4,6,7,10};
		int x = 7 ;
		int n = 5;
		int result = linearSearch(arr,n,x);
		if( result == -1){
				cout<<"not found";
		}else{
			cout<<"found at"<<result;
		} 	
		return 0 ;
	 }
	 
