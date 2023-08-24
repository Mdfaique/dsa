#include<iostream>
using namespace std;
void up(int *p)
{
   //*p=*p+1;
   p=p+1;
}
int summ(int arr[],int n) //*arr can also be written
{
    cout<<"the size "<<sizeof(arr)<<endl; //here arr is a pointer
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int m=5;
    int *p=&m;
    cout<<" before "<<*p<<endl;
    up(p);
    cout<<" after "<<*p<<endl;

    int arr[6]={1,2,3,4,5,6};
    cout<<"the sum is "<<summ(arr+3,3)<<endl; //sum from 4+5+6



    return 0;
}