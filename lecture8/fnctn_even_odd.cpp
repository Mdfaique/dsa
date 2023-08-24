#include<iostream>
using namespace std;
bool isEven(int a){
    cout<<"enter a";
    cin>>a;
    if(a&1)return 0;
    else return 1;
}
int main(){
    int ans,num;
    // ans=isEven(num);
    // cout<<"ans "<<ans;
    
    if(isEven(num)){
    cout<<" number is even "<<endl;}
    else cout<<"no is odd "<<endl; 
    // cout<<"retry?y/n";
    // int temp,y,n;
    // cin>>temp;
    // if(temp==y){if(isEven(num)){
    // cout<<" number is even "<<endl;}
    // else cout<<"no is odd "<<endl; 
    // cout<<"retry?y/n";
    // cin>>temp;}
    // cout<<"end";




    return 0;
}