#include<iostream>
using namespace std;
int power(int a ,int b)//b is power
{
    if(b==0) return 1;
    if(b==1) return a;

    //recusrive call
    int ans=power(a,b/2);
    
    if(b&1) return a*ans*ans;
    else return ans*ans;

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<endl;
    int ans=power(a,b);
    cout<<"ans is = "<<ans<<endl;



    return 0;
}