#include<iostream>
using namespace std;
class node
{
  public:
  int data;
  node* prev;
  node* next;

  //constructor
  node(int d)
  {
    this->data=d;
    this->prev=NULL;
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

void print(node* &head)
{
    node* temp=head;
    while(temp!= NULL) //or temp != NULL
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getlength(node* head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}

void insertathead(node* &head,node* &tail,int d )
{
   if(head==NULL)
   {
    node* temp=new node(d);
    head=temp;
    tail=temp;
    return;
   }
   node* temp=new node(d);
   temp->next=head;
   head->prev=temp;
   head=temp;
}

void insertattail(node* &head,node* &tail,int d)
{
    if(tail==NULL)
   {
    node* temp=new node(d);
    tail=temp;
    head=temp;
    return;
   }
   
    
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}

void insertatpos(node* &head,node* &tail,int d,int pos)
{
  if(pos==1) //insert at strart
  {
    insertathead(head,tail,d);
    return;
  }

  node* temp=head;
  int cnt=1;

  while(cnt<pos-1)
  {
    cnt++;
    temp=temp->next;
  }

  if(temp->next==NULL)
  {
    insertattail(head,tail,d);
    return;
  }

  node* nodetoinsert=new node(d);
  //nodetoinsert ke baad waale ko cnnct kra 
  nodetoinsert->next=temp->next;
  temp->next->prev=nodetoinsert;
  //node to insert ke phele waale ko cnnct kra
  temp->next=nodetoinsert;
  nodetoinsert->prev=temp;



}

void deletenode(node* &head,node* &tail,int pos)
{
  //deleting head
  if(pos==1)
  {
    node*temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;

  }
  
  //deleting any mid or tail node
  else
  {
    node* curr=head;
    node*prev=NULL;
    int cnt=1;
    while(cnt<pos)
    {
      prev=curr;
      curr=curr->next;
      cnt++;
    }

    curr->prev=NULL;
    prev->next=curr->next;
    if(curr->next==NULL)
    {
      tail=prev;
      delete curr;
    }

    else
    {
      curr->next=NULL;
      delete curr;
    }


  }
}


int main()
{
  //  node* node1=new node(10);  
   node* head=NULL;
   node* tail=NULL;
   print(head); 
   //cout<<getlength(head)<<endl; //for length
   insertathead(head,tail,11);
   print(head);

   insertathead(head,tail,12);
   print(head);

   insertathead(head,tail,13);
   print(head);

   insertathead(head,tail,14);
   print(head);

   insertattail(head,tail,15);
   print(head);

   insertattail(head,tail,16);
   print(head);

   insertattail(head,tail,17);
   print(head);

   cout<<"head is "<<head->data<<" "<<"tail is "<<tail->data<<endl;

   insertatpos(head,tail,20,8);
   print(head);
    cout<<"head is "<<head->data<<" "<<"tail is "<<tail->data<<endl;

    deletenode(head,tail,8);
    print(head);
    cout<<"head is "<<head->data<<" "<<"tail is "<<tail->data<<endl;

   
   


    return 0;
}