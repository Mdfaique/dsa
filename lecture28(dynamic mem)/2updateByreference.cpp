#include<iostream>
using namespace std;
void update(int &n) //updates n for main fnc
{
    n=n+1;
}
int main(){
   int n=5;
   cout<<"before update = "<<n<<endl;
   update(n);
   cout<<"after update = "<<n<<endl;



    return 0;
}