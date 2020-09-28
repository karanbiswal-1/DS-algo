//max point in straight line

#include<bits/stdc++.h>
using namespace std;

     int GCD(int a, int b) {
        
        if(b==0) return a;
        else return GCD(b, a%b);
    }


 int maxPoints(vector<vector<int>>& points) {
        
        
        int result=0;
        
        int n = points.size();
        if( n < 2){
            return 1;
        }
        
        for(int i=0;i<n;i++){

             map<pair<int,int>, int> lines;
            int maxi =0; int overLap =0; int vertical =0;

            for(int j =i+1;j<n;j++){

                if(points[i][0] == points[j][0]  && points[i][1] == points[j][1]){
                    overLap++;
                    continue;
                }
                else if(points[i][0] == points[j][0] ){
                    vertical++;
                }else{
                   
                    int a = (points[j][0] - points[i][0]);
                    int b = (points[j][1] - points[i][1]) ;
                    int gcd = GCD(a,b);
                    a/=gcd;
                    b/=gcd;
                    lines[make_pair(a,b)]++;
                    maxi = max(maxi,lines[make_pair(a,b)]);
                
              }
               maxi = max(maxi,vertical);
            }

      
        result = max(result, maxi+overLap+1);
        }
          
        return result;
    }

    int main(){
        vector<vector<int> > points{{0,0},{0,0}};
        cout<<maxPoints(points);
    }