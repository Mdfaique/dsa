#include<iostream>
using namespace std;
int rev(int n[],int size)
{
    // int p=size-1;
    // for(int i=0;i<=size/2;i++)
    // {
    //     int temp=n[i];
    //     n[i]=n[p-i];
    //     n[p-i]=temp;
    //     //cout<<" "<<n[i]<<" ";
        
    // }
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(n[start],n[end]);
        start++;
        end--;
    }

    cout<<endl<<"new arry"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<n[i]<<" ";
    }
    return 0;


}

int main(){
    
    
    int arry[7]={0,1,2,3,4,5,6};
    int sizearry=sizeof(arry)/sizeof(int);
    cout<<"size of arry "<<sizearry;
    cout<<endl;
    cout<<"og arry"<<endl;
    
    for(int i=0;i<sizearry;i++)
    {
        cout<<arry[i]<<" ";
    }
    cout<<endl;
    rev(arry,sizearry);



    return 0;
}