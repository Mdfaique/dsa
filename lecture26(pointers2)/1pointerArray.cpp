#include<iostream>
using namespace std;
int main(){
  int arr[10]={2,5,4,6};
    cout<<" the address of 1st block "<<arr<<endl;
    cout<<" the address of 1st block = "<<&arr[0]<<endl;
    cout<<" the value  of 1st block "<<*arr<<endl;
    cout<<" the value  of 1st block+1 "<<*arr+1<<endl;
    cout<<" the value  of 2nd block "<<*(arr+1)<<endl;
    int i=3;
    cout<<i[arr]<<" new method "<<endl;
    cout<<" size of arr block "<<sizeof(*arr)<<endl;
    cout<<" size of arr address "<<sizeof(&arr[0])<<endl;
    
    int *p=&arr[0];
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;




    return 0;
}