#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &interval){
	vector<vector<int>> mergedInterval;
	
	if(interval.size() ==0){
		return mergedInterval;
	}
	
	sort(interval.start(),interval.end());
	
	vector<int> tempInterval = interval[0];
	
	for(auto it: interval){
		if(it[0] < tempInterval[1]){
			tempInterval[1] = max(it[1],tempInterval[1]);
		}else{
			mergedInterval.push_back(tempInterval);
			tempInterval = it;
		}
	}
	mergedInverval.push_back(tempInterval);
	return tempInterval;
}

int main(){
	vector<vector<int>> interval ={ {2,3},{2,5}.{4,6},{7,8}};
	cout<<merge(interval);
}
