#include<iostream>
using namespace std;
class hero
{
    public:
    int h=10;
    static int time; //static keyword,independent of obj only linked with class
    hero()
    {
        cout<<"constructor called"<<endl;
    }
    ~hero()
    {
      cout<<"destructor called"<<endl;
    }

    static int call()
    {
        return time; //static function can only access static keywords
    }
};
int hero::time=5; //initialization
int main()
{
    //static allocation
    hero a;// auto calls both constructor n destrcutor
    cout<<"h is "<<a.h<<endl;
    //dynamic allocation
    hero *b=new hero; //doesnt calls destructor automtcly
    delete b;  //b->~hero(); this is also call for destructor and we need to call manally in dynamic alloction

    cout<<hero::call()<<endl; //calls static fnct of class hero
    a.time=10; //static time ccan be changed
    cout<<hero::call()<<endl;


    return 0;
}