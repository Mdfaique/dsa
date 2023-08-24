#include<iostream>
using namespace std;
string reverse(string s)
{
  int st=0;
  int e=s.length()-1;
  while(st<e)
  {
    swap(s[st++],s[e--]);
  }
  return s;
}
int main(){
    string str;
    str.push_back('\0');// in str it ignore it 
    str.push_back('a');// initial 0 here
    str.push_back('b');
    str.push_back(' ');// str also prints  space
    str.push_back('a');
    str.push_back('r');
    cout<<" length is "<<str.length()<<endl;
    cout<<str<<endl;
    string ans=reverse(str);
    cout<<ans;
    



    return 0;
}