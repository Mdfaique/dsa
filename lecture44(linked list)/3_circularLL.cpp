#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    //constructor
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~node()
    {
        int value=this->data;
        //mem free
        if(this->next !=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"mem is free "<<value<<endl;
    }
};

void insertnode(node* &tail,int elmt,int d)
{
    //empty list
    if(tail==NULL)
    {
        node* newnode=new node(d);
        tail=newnode;
        newnode->next=newnode;
    }

    //non emt list
    //assuming elmnt is present
    else
    {
      node* curr=tail;
      int start=curr->data;
      while(curr->data!=elmt)
      {
        curr=curr->next;
      }
      

      node* temp=new node(d);
      temp->next=curr->next;
      curr->next=temp;
    
    }
}

void deletenode(node* &tail,int elmt)
{
  if(tail==NULL)
  {
    cout<<"list is empt";
  }
  else
  {
    //assuming elmt is present
    // non empt list
    node* prev=tail;
    node* curr=prev->next;

    while(curr->data!=elmt)
    {
        prev=curr;
        curr=curr->next;
    }

    prev->next=curr->next;

    // 1 node circular LL
    if(curr==prev)
    {
        tail=NULL;
    }

    // >2 node cases LL
    else if(curr==tail)
    {
        tail=prev;
    }
    curr->next=NULL;
    delete curr;
  }
}

void print(node* &tail)
{
    node* temp=tail;
    if(tail==NULL)
    {
        cout<<" tail is empt";
        return;
    }
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
       

}
int main(){

    node* tail=NULL;
    //emt list elmt doesnt maaters
    insertnode(tail,5,3);
    print(tail);

    insertnode(tail,3,5);
    print(tail);

    insertnode(tail,5,7);
    print(tail);

    insertnode(tail,7,9);
    print(tail);

    insertnode(tail,5,6);
    print(tail);

    deletenode(tail,3);
    print(tail);

   




    return 0;
}