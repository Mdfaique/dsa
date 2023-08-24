// code studio solved f
// #include <bits/stdc++.h> 
// vector<int> reverse(vector<int> v)
// {
//     int s=0;
//     int e=v.size()-1;
//     while(s<e)
//     {
//         swap(v[s++],v[e--]);
// }
//     return v;
    
// }
// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	int i=n-1;
//     int j=m-1;
//     int carry=0;
//     vector<int> ans;
//     while(i>=0 && j>=0)
//     {
//         int val1=a[i];
//         int val2=b[j];
//         int sum=val1+val2+carry;
//         carry=sum/10;
//         int reqval=sum%10;
//         ans.push_back(reqval);
//         i--;
//         j--;
//     }
//     // 1st case if arr1 is greater than arr2
//     while(i>=0)
//     {
        
//         int val1=a[i];
        
//         int sum=val1+carry;
//         carry=sum/10;
//         int reqval=sum%10;
//         ans.push_back(reqval);
//         i--;
       
        
//     }
//     // second case arry 2 greater than arry 1
//     while(j>=0)
//     {
        
//         int val2=b[j];
        
//         int sum=val2+carry;
//         carry=sum/10;
//         int reqval=sum%10;
//         ans.push_back(reqval);
//         j--;
       
        
//     }
//     //while arry1=aar2 and endterm carry is left
//     while(carry!=0)
//     {
        
        
        
//         int sum=carry;
//         carry=sum/10;
//         int reqval=sum%10;
//         ans.push_back(reqval);
//         i--;
       
        
//     }
//     return reverse(ans);
    
    
// }
// ip arry1 1,2,3
// ip arry2 3
// op 1,2,6 and so on