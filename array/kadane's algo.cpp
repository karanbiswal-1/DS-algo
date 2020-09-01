#include<bits/stdc++.h>
using namespace std;

class solution {
	public:
		int subarraysum(int arr1[],int n){
			int sum =0;
			int maxi = arr1[0];
			for(int i=0;i<n;i++){
				sum+=arr1[i];
				if(sum>maxi){
				}
					maxi = sum;
				}
				if(sum<0){
					sum=0;
				}
				
			}
			return maxi;
		}
};

main() {
	solution s;
	int arr[] = {-1,-2,-3,4,-1,-2,1,5,-3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int result =  s.subarraysum(arr,n);
	cout<<result;
}
