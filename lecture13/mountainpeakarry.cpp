// leet code 
#include<vector>
#include<iostream>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size()-1,mid;
        mid=start+(end-start)/2;
        while(start<end)
        {
            if(arr[mid]<arr[mid+1])
            {
                start=mid+1;
            }
            else{
                end=mid;
            }
             mid=start+(end-start)/2;
        }
        return mid;
        
    }
