#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows){
    vector<vector<int>> R(numRows);
    for(int i=0;i<numRows;i++){
        R.push_back(vector<int>(i+1,1));
        for(int j =1;j<i;j++){
            R[i][j] = R[i-1][j-1] + R[i-1][j];
        }
    }
    return R;
}
int main()
{
	int numRows = 4;

	vector<vector<int> > result = generate (numRows);

	for (int i = 0; i < result.size(); i++)
    {
    	for (int j = 0; j < result[i].size(); j++)
    	{
    		cout<< result[i][j]<<" ";
    	}
    	cout<<endl;
    }
}