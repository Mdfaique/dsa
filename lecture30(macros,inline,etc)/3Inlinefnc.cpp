#include<iostream>
using namespace std;
inline int max(int& a , int& b) //inline works for only 1 line fnc maybe take 2,3 line but not more than 3
{
    return(a>b)?a:b; //if a>b then a else b;
}
int main(){
   int a=1, b=2, ans=0;
   ans=max(a,b); //no extra mem usage and no fnc call
   //replaces every max with 1 line fn no call
   cout<<"max is "<<ans<<endl;


    return 0;
}