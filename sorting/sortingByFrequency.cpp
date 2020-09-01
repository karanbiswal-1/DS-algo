#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>

using namespace std;

bool camparator(pair<int, pair<int,int> > p1, pair<int, pair<int,int> > p2){
	if(p1.second.second != p2.second.second){
		return (p1.second.second > p2.second.second);
	}else{
		return (p1.second.first < p2.second.first);
	}
}




void sortByFrequency(int arr[],int n){
	unordered_map<int , pair<int,int> > hash;
	
	for(int i=0;i<n;i++){
		if(hash.find(arr[i]) != hash.end()){
			hash[arr[i]].second++;
		}else{
			hash[arr[i]] = make_pair(i,1);
		}
	}
	
	vector<pair<int, pair<int,int> > > B;
	
	for(auto it = hash.begin();it != hash.end(); ++it){
		B.push_back(make_pair(it->first,it->second));
	}
	
	sort(B.begin(),B.end(), camparator);
	
	for(int i =0;i < B.size();i++){
		int count = B[i].second.second;
		while(count--){
			cout<<B[i].first<<" ";
		}
	}
}

int main(){
	int arr[] = {2,3,2,6,-1,99999,5,8,8,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	sortByFrequency(arr,n);
	return 0;
}
