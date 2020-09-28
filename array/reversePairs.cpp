//find the number of pair where i < j and arr[i] > 2*arr[j]
//using merge sort

#include<bits/stdc++.h>
using namespace std;

int merge(int &arr[],int low,int mid,int high){
    int i=low,j=mid+1;
    int count =0;
    while(i <= mid){
        while(j <= high){
            if(arr[i] > 2*arr[j]){
                j++;
            }else{
                break;
            }
        }
        count+=(j-(mid+1));
        i++;
    }
    vector<int> temp;
    int left = low, right= mid+1;
    while(left <= mid || right <=high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[i]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left++]);
    }
    while(right <= high){
        temp.push_back(arr[right++]);
    } 

    for(int i =low;i<=high;i++){
        arr[i] = temp[i-low];
    }
    return count;
  
}


int mergeSort(int &arr[],int low, int high){
    int mid = (low + high)/2;

    int inv=mergeSort(arr,low,mid);
    inv+=mergeSort(arr,mid+1,high);

    inv+==merge(arr,low,mid,high);
    return inv;
}

int main(){
    int arr[] = {40,25,19,12,2,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    cout<<mergeSort(arr,low,high);
    return 0;
}