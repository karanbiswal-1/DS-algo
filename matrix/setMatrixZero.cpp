#include<bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> matrix){
	int temp=0;
	int row = matrix.size();
	int col= matrix[0].size();
	
	for(int i =0;i<row;i++){
		if(matrix[i][0] == 0){
			temp =1;
		}
		for(int j =1;j<col;j++){
			if(matrix[i][j]==0){
				matrix[i][0] =0;
				matrix[0][j] =0;
			}
		}
	}
	
	for(int i = row-1;i>=0;i--){
		for(int j=col-1;j>=1;j--){
			if(matrix[i][0]==0 || matrix[0][j]==0){
				matrix[i][j] =0;
			}
			if(temp ==1){
				matrix[i][0] =0;
			}
		}
	}
}
