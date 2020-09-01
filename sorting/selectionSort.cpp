#include<bits/stdc++.h>
using namespace std ;

void swap( int *xp, int *yp){
	int temp = *xp ;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n ) {
	int i ,j , min ;
	//one by one movig in an unsorted array
	for (i =0;i<n-1;i++) {
		min = i;
		//finding the minimum element in unsorted array
		for(j=i+1 ; j<n ; j++) {
			if(arr[j] < arr[i]){
				min = j ;
				//swap the minimum element with the selected one
				swap(&arr[min], &arr[i]);
			}
		}
		
	}
}
//printing the sorted array
void printArray(int arr[], int n ){
	for ( int i =0 ; i < n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl ;
	} 


int main() {
	int arr[] = { 65,25,12,22,11 };
	int n  = sizeof(arr)/sizeof(arr[0]) ;
	selectionSort(arr,n);
	cout<<"sorted array is :" ;
	printArray(arr,n);
	return 0;
}
