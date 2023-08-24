#include<iostream>
using namespace std;
int m=4; //global var used by multiple fnc
//bad practise instead use reference variable;
void fn()
{
     cout<<"in fn = "<<m<<endl;
}
int main(){
    cout<<"in main = "<<m<<endl;
    fn();


    return 0;
}