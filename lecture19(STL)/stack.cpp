#include<iostream>
#include<stack>

using namespace std;
int main(){
stack<string> s;
s.push("md");
s.push("faique");
s.push("2");
s.pop();
cout<<"top element is "<<s.top()<<endl;
cout<<" size of stack "<<s.size()<<endl;
cout<<"empty or not "<<s.empty();


    return 0;
}