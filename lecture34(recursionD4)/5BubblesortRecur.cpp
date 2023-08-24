#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    if(n==0 || n==1) return;
    for(int i=0;i<n-1;i++) //to pplace largest no at end
    {
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    }

    sort(arr,n-1); //n-1 bcz largest no is at farmost right now its done so n-1 size 
}
int main(){
     int arr[5]={4,3,2,1,5};
     sort(arr,5);
     for(int i=0;i<5;i++)
     {
        cout<<arr[i]<<" ";
     }



    return 0;
}