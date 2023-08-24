#include<iostream>
using namespace std;
bool check(int arr[],int size,int key)
{
    if(size==0) return false;
    if(arr[0]==key) return true;
    else{
        bool rem=check(arr+1,size-1,key);
        return rem;
    }

}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int key=4;
    bool ans=check(arr,size,key);
    if(ans)cout<<" present ";
    else cout<<"not present ";



    return 0;
}