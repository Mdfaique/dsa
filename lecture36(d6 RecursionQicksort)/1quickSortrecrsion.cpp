#include<iostream>
using namespace std;
int pivot(int arr[],int s,int e)
{
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot) count++;
    }
    int pivotindex=s+count;

    //placing pivot at correct posi
    swap(arr[s],arr[pivotindex]);

    //left and right part of pivot sorting(left me sab chote pivot se right me sab bade)
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex)
    {
        while (arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
        j++;
        }
        if(i<pivotindex && j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
        
        
    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e)
{
    if(s>=e) return;
    
    int p=pivot(arr,s,e);
    
    //left part sort
    quicksort(arr,s,p-1);

    //right part sort
    quicksort(arr,p+1,e);
}
int main(){
    int arr[5]={6,2,5,2,4};
    int n=5;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    return 0;
}