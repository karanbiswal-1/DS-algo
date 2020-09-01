#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x,int low,int high){
	if(n>0 && low <= high){
		int mid = (low + high)/2;
		if(arr[mid] ==x){
			return mid;
		}
		else if( arr[mid]>=arr[low]){
			if(x >= arr[low] && x < arr[mid]){
				high = mid -1;
				search(arr,n,x,low,high);
			}else{
				low = mid +1;
				search(arr,n,x,low,high);
			}
			
		}
		else if( arr[mid] < arr[low]){
		
		 if(x <= arr[high] && x > arr[mid] ){
				low = mid +1;
				search(arr,n,x,low,high);
			}else{
				high = mid -1;
				search(arr,n,x,low,high);
			}
		}
	
	
	}	else{
			return -1;
		}
}

int main(){
	int arr[]={4,5,6,7,8,0,1,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int low =0;
	int high = 8;
	cout<<search(arr,n,100,low,high);
	return 0;
}
