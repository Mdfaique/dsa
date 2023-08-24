#include<iostream>
using namespace std;
int binarysrch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    //mid=(start + end)/2 changed in below form to avoid 2^31-1(max int value) error;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return -1;
}
int main(){
    int even[6]={0,1,2,3,4,5};
    int odd[7]={0,1,2,3,4,5,6};
    int evenIndex=binarysrch(even,6,5);
    int oddIndex=binarysrch(odd,7,4);
    cout<<"Index of 5 is "<<evenIndex<<endl;
    cout<<"Index of 4 is "<<oddIndex<<endl;



    return 0;
}