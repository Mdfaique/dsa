//og arry 1,2,3,6,7,8(sorted arry)
//ip-6,7,8,1,2,3(sorted rotated arry)
//op-1(cuz 1 is min value of 2nd half)
//exp vid 14
#include<iostream>
using namespace std;
int pivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else e=mid;
    
    mid=s+(e-s)/2;
}
return mid;
}


int main(){
    int arr[6]={3,8,9,0,1,2};
    int arysize=sizeof(arr)/sizeof(int);
    cout<<"pivot is "<<pivot(arr,arysize)<<endl;
}