#include<iostream>
using namespace std;
bool check(int arr[],int s,int e,int key)
{
    if(s>e) return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==key) return true;
    if(arr[mid]<key) return check(arr,mid+1,e,key);
    else return check(arr,s,mid-1,key);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int key=5;
    bool ans=check(arr,0,5,key);
    if(ans) cout<<"found";
    else cout<<" no ";
     



    return 0;
}