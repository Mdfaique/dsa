#include<iostream>
using namespace std;

    long long int squareroot(int n)
{
    
    int s=0;
    int e=n;
    
    long long int mid=s+(e-n)/2;
    long long int ans=-1;
    while(s<=e)
    {
        long long int square=mid*mid;
        
        if(square==n){return mid;}
         if(square<n) {ans=mid; s=mid+1;}
        else {e=mid-1;}
        mid=s+(e-n)/2;
        
        
        
    }
    return ans;
    
}
double precise(int n,int p,int tempsol)
{
    double f=1;
    double ans=tempsol;
    for(int i=0;i<p;i++)
    {
        f=f/10;
        for(double j=ans;j*j<n;j=j+f)
        {
            ans=j;
        }
        
    }
    return ans;
}
    int main(){
        cout<<"enter value";
        int y;
        cin>>y;
        int tempsol,acc;
        cout<<"enter precison "<<endl;
        cin>>acc;
        tempsol=squareroot(y);
        cout<<"ans is "<<precise(y,acc,tempsol);
        
   
}