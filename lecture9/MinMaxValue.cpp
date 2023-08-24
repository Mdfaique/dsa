#include<iostream>
#include<math.h>
using namespace std;
int getmax(int n[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++)
    maxi=max(maxi,n[i]);
    return maxi;
}
int getmini(int n[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++)
    mini=min(mini,n[i]);
    return mini;
}
int main(){
    int size;
    cout<<"enter size\n";
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"max value is "<<getmax(num,size);
    cout<<" min value is \n"<<getmini(num,size);




    return 0;
}