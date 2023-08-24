// code studio solved

// #include <bits/stdc++.h> 
// bool ispossible(vector<int> &rank, int m,int mid)
// {
//     int count=0;
//     int timesum=0;
//     for(int i=0;i<rank.size();i++)
//     {
//         for(int j=1;j<=m;j++)
//         {
//             timesum=timesum+rank[i]*j;
//             if(timesum<=mid)
//             {
//                 count++;
//                 if(count==m) return true;
//             }
            
//         }
//         timesum=0;
        
//     }
//     return false;
// }


// int minCookTime(vector<int> &rank, int m)
// {
//     // Write your code here
//     int s=0;
//     int ans=-1;
//     int maxi=-1;
//     int e=0;
//       for(int i=1; i<=m; i++){
//        e += rank[rank.size() - 1]*i;
//    }
   
//     int mid=s+(e-s)/2;
//     while(s<=e)
//     {
//         if(ispossible(rank,m,mid))
//         {
//             ans=mid;
//             e=mid-1;
//         }
//         else s=mid+1;
//         mid=s+(e-s)/2; 
//     }
//     return ans;
    
// }