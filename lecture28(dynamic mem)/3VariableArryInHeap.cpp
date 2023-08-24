#include<iostream>
using namespace std;
int sum(int arr[],int n) //*arr can also be used
{
    int add=0;
    for(int i=0;i<n;i++)
    {
     add+=arr[i];
    }
    return add;
}
int main(){
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    int *arr=new int[n]; //var size array (dynamic mem)
    cout<<"enter the values of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=sum(arr,n);
    cout<<"the sum is "<<ans<<endl;

    //in dynamic mem we have to del manually for eg if int*i=new int; then delete i;
    //for array case int*arr=new int[n];
    // delete []arr;



    return 0;
}