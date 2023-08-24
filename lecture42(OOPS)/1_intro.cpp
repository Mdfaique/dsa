#include<iostream>
using namespace std;
class hero
{
  private:
  int health;
  public:
  char level;

  hero(){
    cout<<"constructor"<<endl;
  } //constructor

  //parametarised constructor
  hero(int health)
  {
    cout<<"this -> "<<this<<endl;
    this->health=health; //kind of pointer(this)
  }

  //copy constructor
  hero(hero &temp)
  {
    cout<<"copy constrctr"<<endl;
    this-> health=temp.health;
    this-> level=temp.level;
  }

  int getHealth()
  {
    return health;
  }
   
  char getLevel()
  {
    return level;
  }

  void sethealth(int health)
  {
    this->health=health;
  }

  void setlevel(char ch)
  {
    level=ch;
  }
};

int main(){

    //creation of object
    //static allocation
    hero ramesh(120); //calls paramitarised constructor and gives health=10;
    cout<<"ram health is "<<ramesh.getHealth()<<endl;
    //use setter
    ramesh.sethealth(70);
    ramesh.level='A';
    
    cout<<"health is "<<ramesh.getHealth()<<endl;
    cout<<"level is "<<ramesh.level<<endl; //public
    
    //dynamic allocation
    hero *b= new hero; //non parametraised constructor
    b->sethealth(100);
    b->level='c';

    cout<<"health is "<<(*b).getHealth()<<endl;
    cout<<"level is "<<(*b).level<<endl;

    //alternate method to call dynamic values
    //cout<<"health is "<<b->getHealth()<<endl;
    //cout<<"level is "<<b->level<<endl;

    hero c(*b);//copying b to c
    cout<<"health is "<<c.getHealth()<<endl;
    cout<<"level is "<<c.level<<endl;

    

   



    return 0;
}