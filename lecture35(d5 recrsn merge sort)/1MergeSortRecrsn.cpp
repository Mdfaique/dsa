#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
   int mid=s+(e-s)/2;
   int len1=mid-s+1;
   int len2=e-mid;
   int *first=new int[len1]; //dynamic aray
   int *second=new int[len2];

   //copy array or break in 2 parts
   int mainarrayindex=s;
   for(int i=0;i<len1;i++)
   {
    first[i]=arr[mainarrayindex++];
   }
   // 2nd part of array in 2nd dynamic array copy
   mainarrayindex=mid+1;
   for(int i=0;i<len1;i++)
   {
    second[i]=arr[mainarrayindex++];
   }

   //merge 2 sorted array
   int index1=0;
   int index2=0;
   mainarrayindex=s;

   while(index1<len1 && index2<len2)
   {
    if(first[index1]<second[index2])
    {
        arr[mainarrayindex++]=first[index1++];
    }
    else arr[mainarrayindex++]=second[index2++];
   }
   while(index1<len1) arr[mainarrayindex++]=first[index1++];
   while(index2<len1) arr[mainarrayindex]=second[index2++];
   delete []first;
   delete []second;

}

void mergesort(int arr[],int s,int e)
{
    if(s>=e) return;

    int mid=s+(e-s)/2;

    //left part sort
    mergesort(arr,s,mid);

    //rt part solve
    mergesort(arr,mid+1,e);
    
    //merge
    merge(arr,s,e);

}
int main(){ 
    int arr[7]={38,56,56,22,22,0,1};
    int n=7;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    



    return 0;
}