#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;
    q.push("1");
    q.push("2");
    q.push("3");
    cout<<" og size "<<q.size()<<endl;
    cout<<"og front  "<<q.front()<<endl;
    q.pop();
    cout<<"new queue front  "<<q.front()<<endl;
    cout<<"new size "<<q.size();




    return 0;
}