#include<iostream>
using namespace std;
int sumarr(int n[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+n[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"enter array size";
    cin>>size;
    int arr[100];
    cout<<"enter elements\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"sum is "<<endl;
    cout<<sumarr(arr,size);




    return 0;
}