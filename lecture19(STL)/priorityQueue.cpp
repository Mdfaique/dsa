#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max heap always gives max value stored when called or used pop
    priority_queue<int> maxi;

    // min heap always gives mins value stored in it when called or pop
    priority_queue<int,vector<int>,greater<int>> mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(0);
    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();//to remove top(max) element after showingg 
    }
    cout<<endl;
    
    mini.push(1);
    mini.push(3);
    mini.push(4);
    mini.push(0);
    int m=mini.size();
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();//to remove top(min) element after showingg 
    }
    cout<<endl;
    cout<<"empty mini ? "<<mini.empty();



    return 0;
}