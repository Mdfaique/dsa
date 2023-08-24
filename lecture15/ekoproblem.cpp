bool possible(int arr[],int arysize,int wood,int mid)
{
  int sum=0;
  for(int i=0;i<arysize;i++)
  {
    if(arr[i]>mid)
    {
        sum=sum+(arr[i]-mid);
        if(i==4 && sum>=wood)
         {
            return true;
            }
        
    }
    
    } 
        return false;
        
}

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={4,42,40,26,46};
    int arysize=sizeof(arr)/sizeof(int);
    int sum=0;
    // for(int i=0;i<arysize;i++)
    // {
    //     sum=sum+arr[i];
    // }
    // int avg=sum/arysize;
    int s=0;
    int maxi=-1;
    for(int i=0;i<arysize;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
     int ans=-1;
     int wood=20;
   
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(possible(arr,arysize,wood,mid))
        {
            ans=mid;
            e=mid+1;
        }
        else e=mid-1;
        mid=s+(e-s)/2; 
    }
    return ans;
    cout<<"fiinal ans "<<endl;
    cout<<ans;
    


}