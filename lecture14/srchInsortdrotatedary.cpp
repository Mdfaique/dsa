#include<iostream>
using namespace std;
int pivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else e=mid;
    
    mid=s+(e-s)/2;
}
return mid;
}
int binarysrch(int arr[],int s,int e,int key)
{
    int start=s;
    int end=e;
    //mid=(start + end)/2 changed in below form to avoid 2^31-1(max int value) error;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return -1;
}


int main(){
    int arr[6]={3,8,9,0,1,2};
    int n=sizeof(arr)/sizeof(int);
    int k=8;
    int s;
    cout<<"pivot is "<<pivot(arr,n)<<endl;
    int pvt=pivot(arr,n);
   if(k>=arr[pvt]&&k<arr[n-1]) {
   s=binarysrch(arr,pvt,n-1,k);
   s=pvt;
   }
   else s=binarysrch(arr,0,pvt-1,k);
   cout<<"value is "<<s;

}



// code studio code
// #include <bits/stdc++.h> 
// int pivot(vector<int>& arr,int n)
// {
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<e)
//     {
//         if(arr[mid]>=arr[0])
//         {
//             s=mid+1;
//         }
//         else e=mid;
    
//     mid=s+(e-s)/2;
// }
// return mid;
// }
// int binarysrch(vector<int>& arr,int s,int e,int key)
// {
//     int start=s;
//     int end=e;
//     //mid=(start + end)/2 changed in below form to avoid 2^31-1(max int value) error;
//     int mid=start+(end-start)/2;
//     while(start<=end)
//     {
//         if(arr[mid]==key)
//         {
//             return mid;
//         }
//         if(key>arr[mid])
//         {
//             start=mid+1;
//         }
//         else
//         {
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;

//     }
//     return -1;
// }
// int findPosition(vector<int>& arr, int n, int k)
// {
//     // Write your code hre.
//     // Return the position of K in ARR else return -1.
//     int pivot1=pivot(arr,n);
//     if(k>=arr[pivot1] && k<=arr[n-1])
//     {
//         return binarysrch(arr,pivot1,n-1,k);
//     }
//     else return binarysrch(arr,0,pivot1-1,k); 
    
    
// }