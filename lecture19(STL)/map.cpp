#include<iostream>
#include<map>

using namespace std;
int main(){
     map<int,string> m; //always stores in increasing order
     m[1]="A";//key ie 1 here always give unique cant give 2 or more values to same key only 1 value to 1 key
     m[2]="b";
     m[3]="c";
     m[10]="z";
     m[7]="q";
     m.insert({8,"h"});//alt method of inserting 
     cout<<"before find"<<endl;
     for(auto i:m)
     {
        cout<<i.first<<" "<<i.second<<endl;
        //i.first to print key and i second for value of that key
     }
     cout<<"finding 7 "<<m.count(7)<<endl;
     cout<<"after find "<<endl;
     auto it=m.find(3);
     for(auto i=it;i!=m.end();i++)
     {
       cout<<(*i).first<<" "<<(*i).second<<endl;
       // find the elemnet and prints till end
     }






    return 0;
}