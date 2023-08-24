#include<iostream>
using namespace std;
void update(int **q)
{
  //q=q+1; //only here add  of q incr
  //cout<<q<<endl;
  //*q=*q+1;  //incr add of p by 1
   **q=**q+1; //incr val of a
}

int main() {
    int a=5;
    int *p=&a;
    int**q=&p;
    cout<<*p<<" "<<**q;

    cout<<"before up "<<a<<endl;
    cout<<"before up "<<p<<endl;
    cout<<"before up "<<q<<endl;
    update(q);
    cout<<"af up "<<a<<endl;
    cout<<"af up "<<p<<endl;
    cout<<"af up "<<q<<endl;


}