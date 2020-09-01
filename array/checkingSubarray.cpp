#include<bits/stdc++.h>
using namespace std;

swap(int x,int y){
	int temp= x;
	x=y;
	y=temp;
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

bool isSubset(int a[],int b[],int m,int n){
	if(m<n){
		return false;
	}
	sort(a,m);
	sort(b,n);
	
	while(int i<m &&  int j<n){
		if(a[i] < b[j]){
			i++;
		}
		else if(a[i] == b[j]){
			i++;
			j++;
		}
		else{
			return false;
		}
	}
	
	if(j>n){
		return true;
	}else{
		retturn false;
	}
}

int main(){
	int a[] = {1,2,3,4,5,6,7,8};
	int b[] = {2,3,4,5};
	int m = sizeof(a)/sizeof(a[0]);
	int n = sizeof(b)/sizeof(b[0]);
	cout<<issubset(a,b,m,n);
}
