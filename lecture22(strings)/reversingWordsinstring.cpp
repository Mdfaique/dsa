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
    string str="my name don von";
    int n=str.length();
    cout<<str<<endl;
    cout<<" length is "<<n<<endl;
     string temp;
     string ans;
     string p;
   
    int i=0;
    while(i<=n)
    {
       if(str[i]!=' ' && str[i]!='\0' )
       {
        temp.push_back(str[i]);
        i++;
       }
       else {p=reverse(temp);
             for(int j=0;j<p.length();j++)
             {
                ans.push_back(p[j]);
             }
             ans.push_back(' ');
             temp.clear();
             p.clear();
             i++;
            }
    }
     //cout<<" pk"<<endl;
     cout<<ans;



    return 0;
}