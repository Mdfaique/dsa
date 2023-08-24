#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;//takes unique value and stores in increasing order
    s.insert(1);
    s.insert(2);
    s.insert(2);//takes only unique value;
    s.insert(4);
    s.insert(3);
    s.insert(0);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(int i:s){
        cout<<i<<" ";// erases a particular location

    }
    cout<<endl;
    cout<<"4 is present or not "<<s.count(4)<<endl;

    set<int>::iterator itr=s.find(3);// finds a number and prints all the elements including that number till the end of set
    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}