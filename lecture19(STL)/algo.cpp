#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v; 
    v.push_back(1);
    v.push_back(1);
    v.push_back(6);
    v.push_back(9);
    v.push_back(7);
    cout<<"fiinding 7 "<<binary_search(v.begin(),v.end(),6)<<endl; //1 if present;
    cout<<"lower bound of 7 "<<lower_bound(v.begin(),v.end(),7)-v.begin()<<endl;
    cout<<"upper bound of 7 "<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;
    int a=3;
    int b=5;
    cout<<"max "<<max(a,b);
    cout<<"min "<<min(a,b);
    cout<<endl;
    string abc="abcd";
    reverse(abc.begin(),abc.end());
    cout<<abc;
    cout<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after rotation "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"after sort "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    




    return 0;
}