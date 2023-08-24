#include<iostream>
using namespace std;
void print(int arr[], int n ,int start=0) // start is default argu if no start passed then it will take 0
// always rightmost parameter become default then 2nd last rightmost then 3rd and so on
//in above without making start default we cant make n default
{
    for(int i=start;i<n;i++)
    {
      cout<<arr[i]<<endl;
    }
}
int main(){
   int arr[]={1,2,3,4};
   int size=4;
   
   print(arr,size);


    return 0;
}