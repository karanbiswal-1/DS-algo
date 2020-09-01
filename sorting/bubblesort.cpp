#include <bits/stdc++.h>
using namespace std;

void swap(int *p,int *q){
	int temp = *p;
	*p = *q;
	*q = temp;
}

void bubblesort(int arr[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]> arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
 void printarray(int arr[],int n){
 	for(int i =0;i<n;i++){
 		cout<<arr[i]<<" ";
	 }
 }
 
 int main() {
 	int arr[] = {65,25,12,22,11};
 	int n = sizeof(arr)/sizeof(arr[0]);
 	bubblesort(arr,n);
 	cout<<"the sorted array is:";
 	printarray(arr,n);
 	return 0;
 }
