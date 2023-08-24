#include<iostream>
using namespace std;
bool check(int arr[],int size)
{
    if(size==0 || size == 1)
    {
        return true;
    }
    
    if(arr[0]>arr[1]) return false;
    else
    {
        bool ans=check(arr+1,size-1);
        return ans;
    }
    
}
int main(){
   int arr[5]={1,2,3,4,5};
   int size=sizeof(arr)/sizeof(arr[0]);
   bool ans=check(arr,size);
   if(ans){
    cout<<"sorted array "<<endl;
   }
   else cout<<" not sorted array";

    return 0;
}