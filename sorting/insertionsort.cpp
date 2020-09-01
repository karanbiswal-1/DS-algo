#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n){
	int key,i,j;
	for(i=1;i<n;i++){
		key = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j=j-1;
		}
		arr[j+1] = key;
	}
}

void printarray(int arr[],int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[] = {65,25,12,22,11};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,n);
	printarray(arr,n);
	return 0;
}
