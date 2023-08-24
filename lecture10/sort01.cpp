#include<iostream>
using namespace std;
void sortarr(int n[],int size)
{
    int i=0,j=size-1;
    while(i<j)
    {
        while(n[i]==0&&i<j){i++;}
        while(n[j]==1&&i<j){j--;}
        //if here means a[i]=1 and a[j]=1
        if(n[i]==1&&n[j]==0&&i<j)
        {
            swap(n[i],n[j]);
            i++;
            j--;
        }
    }
     cout<<endl;
     cout<<"new"<<endl;
     for(int i=0;i<size;i++){
        cout<<n[i]<<" ";
    }

}
int main(){
    int n[8]={0,0,1,0,1,1,0,0};
    int arysize=sizeof(n)/sizeof(int);
    cout<<"og arry"<<endl;
    for(int i=0;i<arysize;i++){
        cout<<n[i]<<" ";
    }
    sortarr(n,arysize);


    return 0;
}