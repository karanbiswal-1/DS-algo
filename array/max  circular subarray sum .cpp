#include <bits/stdc++.h>
using namespace std;

int maxi(int x,int y){
	if(x<y){
		return y;
	}else{
		return x;
	}
}
int mini(int x, int y){
	if(x<y){
		return x;
	}else{
		return y;
	}
}

int maxCirSum(int a[],int n){
	int temp_max,temp_min=a[0];
	int min,max = a[0];
	int sum =0;
	
	for(int i =0;i<n;i++){
		sum+=a[i];
		
	}
	
	for(int i =1;i<n;i++){
		
		temp_max= maxi(temp_max+a[i],a[i]);
	    
	
		max = maxi(temp_max,max);
		temp_min= mini(temp_min+a[i],a[i]);
		min = mini(min,temp_min);
	
	}
	
	if(min == sum){
		return max;
	}
	else{
		return maxi(max,(sum - min));
	}
}

main(){
	int a[] = {2,-1,1,3,1};
	int n = sizeof(a)/sizeof(a[0]);
	int result = maxCirSum(a,n);
	cout<<result;
	
}
