// code studio prob solved(doesnt work here)
// #include <bits/stdc++.h>

 
// bool ispossible( vector<int> arr,int n, int m,int mid)
// {
//    int studentcount=1;
//    int pagesum=0;
//    for(int i=0;i<n;i++)
//    {
//         if(pagesum+arr[i]<=mid)
//         {
//             pagesum=pagesum+arr[i];
//         }
//         else{
//             studentcount++;
//             if(studentcount>m || arr[i]>mid)
//             return false;
//              pagesum=arr[i];
//         }
       
//    }
//    return true;
// }



// int allocateBooks(vector<int> arr,int n, int m) 
// {    
//     // Write your code here.
//     int s=0;
    
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum=sum+arr[i];
//     }
//     int e=sum;
//     int ans=-1;
//     int mid=s+(e-s)/2;
//     while(s<=e)
//     {
//         if(ispossible(arr,n,m,mid))
//         {
//             ans=mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//          mid=s+(e-s)/2;
//     }
//     return ans;
    
// }