#include<iostream>
using namespace std;
class a
{
  public:
  void fn()
  {
    cout<<"A fn"<<endl;
  }
  void fn(int m) //fnction overloading same name
  {
    cout<<"function overloading "<<m<<endl;
  }
};
 class b
 {
   public:
   int a;
   void fn()
   {
    cout<<"b"<<endl;
   }
    void operator+ (b &obj) //operator overloading
    {
      int value1 =this->a; //5 b::a can also be used
      int value2 = obj.a; //7
      cout<<"output is "<<value2-value1<<endl;
    }

    void operator() ()  //() this operator overloaded
    {
      cout<<" () operator overloaded "<<this->a<<endl;
    }
 };
 
 //runtime polymorphism(method overiding)
 class animal
 {
  public:
  void speak() //same fn in dog
  {
    cout<<"speaking "<<endl;
  }
 };

 class dog:public animal
 {
   public:
   void speak() //same fn in parent class
   {
    cout<<"barking"<<endl;
   }
 };

 class c:public a,public b
 {

 };
int main()
{
    c ab;
    ab.a::fn(); //if same name of function  
    ab.b::fn();
    ab.a::fn(7);//function overloading
           
    b obj1,obj2;
    obj1.a=5;
    obj2.a=7;
     
    obj1+obj2; // + is now changed
    obj1(); //bracket is overloaded

    dog t;
    t.animal::speak(); //speak of animal
    t.speak(); //calls speak of dog

    return 0;
}