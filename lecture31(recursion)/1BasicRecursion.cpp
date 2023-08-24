#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0) return 1; //0!=1 //base case
    return n*factorial(n-1); //5!=5! * (5-1)!
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<"ans is "<<ans<<endl;


    return 0;
}