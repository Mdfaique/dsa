#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,4> a={1,2,3,4};
    int sizea=a.size();
    cout<<"size is "<<sizea<<endl;
    cout<<"element at 2 "<<a.at(2)<<endl;
    cout<<"emt or not "<<a.empty()<<endl;
    cout<<"front value "<<a.front()<<endl;
    cout<<"back elemt "<<a.back()<<endl;
     


}