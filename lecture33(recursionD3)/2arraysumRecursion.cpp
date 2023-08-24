#include<iostream>
using namespace std;
int add(int arr[],int size)
{
    if(size==0) return 0;
    if(size==1) return arr[0];
    int rempart=add(arr+1,size-1);
    int sum=arr[0]+rempart;
    
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int sum=add(arr,size);
    cout<<"sum of array is "<<sum<<endl;



    return 0;
}