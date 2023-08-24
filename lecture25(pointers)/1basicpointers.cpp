#include<iostream>
using namespace std;
int main(){
  int num=5;
  int *p=&num;
//   int *p=0;
//   p=&num;  line 6,7 does the same as line 5
  //cout<<"the value is "<<num<<endl;
   cout<<"the  pointer value is "<<*p<<endl;
    cout<<"the address is "<<p<<endl;
    cout<<"old value of num "<<(*p)++<<endl;
    cout<<"after new value "<<*p<<endl;

    int *q=p;//copying a pntr 
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;


    return 0;
}