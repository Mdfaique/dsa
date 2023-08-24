
#include<iostream>
#include<vector>
using namespace std;
 int binarysrch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    //mid=(start + end)/2 changed in below form to avoid 2^31-1(max int value) error;
    int mid=start+(end-start)/2;
    int i,j;
    
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            i=mid;
            j=mid;
            while(arr[i]==key){i--;}
            while(arr[j]==key){j++;}
            cout<<"1st "<<i+1<<endl;
            cout<<"last "<<j-1<<endl;
            cout<<"total occ "<<j-i-1<<endl;
            break;

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
    return 0;
}
int main(){
    int even[6]={0,2,2,2,2,5};
    // int odd[7]={0,1,2,3,4,5,6};
    int evenIndex=binarysrch(even,6,2);
    // int oddIndex=binarysrch(odd,7,4);
    // cout<<"Index of 2 is "<<evenIndex<<endl;
    // cout<<"Index of 4 is "<<oddIndex<<endl;



    return 0;
}
// code studio ans noTLE
// #include <bits/stdc++.h> 
// int firstocc(vector<int>& arr,int n,int k)
// {
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end)
//     {
//         mid=start+(end-start)/2;
//         if(arr[mid]==k){
//             ans=mid;
//             end=mid-1;
//         }
//         else if(arr[mid]>k){end=mid-1;}
//         else{start=mid+1;}
//     }
//     return ans;
    
// }
// int lastocc(vector<int>& arr,int n,int k)
// {
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//    int ans=-1;
//     while(start<=end)
//     {
//         mid=start+(end-start)/2;
//         if(arr[mid]==k){
//             ans=mid;
//             start=mid+1;
//         }
//         else if(arr[mid]>k){end=mid-1;}
//         else{start=mid+1;}
//     }
//     return ans;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)



// {
//     pair<int,int> ans;
//     ans.first=firstocc(arr,n,k);
//     ans.second=lastocc(arr,n,k);
//     return ans;
   
    
//}