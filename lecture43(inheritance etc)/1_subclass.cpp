#include<iostream>
using namespace std;
class human
{
  public:
  int age;
  int height;
  int weight;
  void setweight(int w)
  {
    this->weight=w;
  }  
};

class male:public human //sub class gets all public members of human
{
    public:
    int skills;
    void sleep()
    {
        cout<<"sleeping not sliping fool "<<endl;
    }
};
int main()
{
    male m;
    cout<<m.weight<<endl; //can access members of human public
    m.setweight(85);
    cout<<m.weight<<endl;
    m.sleep(); 


    return 0;
}