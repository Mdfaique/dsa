// insetion at head,tail,printing,and position wise insertion
#include <iostream>
#include <map>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~node()
    {
        int value = this->data;
        // mem free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "mem is free " << value << endl;
    }
};
// creating singly linked list
// head is the first node of LL containg data and next pointer (which points to address of next node)
void insertathead(node *&head, int d)
{
    // creating new node
    node *temp = new node(d);
    temp->next = head; // new node added comes before head so next of new node points to last head
    head = temp;       // now new node(temp)becomes head
}

void insertattail(node *&tail, int d) // iinserts at end .
{
    node *temp = new node(d);
    tail->next = temp; // here tail next is pointing to our temp
    tail = temp;       // now tail is temp
}

void insertatposition(node *&head, node *&tail, int position, int d) // inserts node at a position in LL
{
    if (position == 1) // inserting at 1st postion
    {
        insertathead(head, d);
        return;
    }
    node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL) // inserting at last
    {
        insertattail(tail, d);
        return;
    }

    // creating node for d
    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next; // when cnt reaches position then temp will points to next node addres so nodetoinsert will point to next node address instead of temp;
    temp->next = nodetoinsert;       // and temp next will now point to nodetoinsert as it has been inserted at a position
}

void print(node *&head) // to print LL
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deletenode(int position, node *&head, node *&tail) // provides starting point of a loop
{
    // deleting 1st node
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        // mem free
        temp->next = NULL;
        delete temp;
    }

    else
    {
        node *prev = NULL;
        node *curr = head;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // deleting last node and assing tail
        if (curr->next == NULL)
        {
            prev->next = NULL;
            tail = prev;
            delete curr;
        }

        // deleting nodes btw head and tail
        else
        {
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }
}

node *floydDetectLoop(node *head) // provides intersection point in a loop
{
    if (head == NULL)
        return NULL;
    node *slow = head;
    node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << "flyod loop pesent at " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

bool detectLoop(node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<node *, bool> visited;
    node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "Present in detectLoop " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

node *getStartingNode(node *head)
{
    if (head == NULL)
        return NULL;
    node *intersection = floydDetectLoop(head);
    node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(node *head)
{
    if (head == NULL)
        return;
    node *startNode = getStartingNode(head);
    node *temp = startNode;
    while (temp->next != startNode)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    node *node1 = new node(10); // creating object node1 of class node and assinging data10
    // cout<<node1->data<<endl; //calling data of node 1
    // cout<<node1->next<<endl; //alling next of node 1

    // head pointed to node1
    node *head = node1;
    node *tail = node1; // tail pointed to node1
    print(head);

    // insertathead(head,12);
    // print(head);

    //  insertathead(head,15);
    // print(head);

    // cout<<"inserted at head "<<endl;

    insertattail(tail, 13);
    print(head);

    insertattail(tail, 14);
    print(head);

    insertattail(tail, 15);
    print(head);

    insertatposition(head, tail, 5, 22);
    print(head);
    cout << "inserted at position " << endl;

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    // deletenode(4,head,tail);
    // print(head);
    //  cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;

    tail->next = head->next; // created a loop(toggle line to creaate a loop)
    // floyd loop check space compl O(1) and time O(n)
    if (floydDetectLoop(head) != NULL)
    {
        cout << "floydLoop is present" << endl;
    }
    else
        cout << "No floydLoop" << endl;

    // normal loop detect space complx O(n) and time O(n)
    if (detectLoop(head))
    {
        cout << "detectLoop is present" << endl;
    }
    else
        cout << "No detectLoop" << endl;

    node *startNode = getStartingNode(head);
    cout << "starting Node = " << startNode->data << endl;

    removeLoop(head);
    if (detectLoop(head))
    {
        cout << "detectLoop is present after" << endl;
    }
    else
        cout << "No detectLoop after" << endl;

    return 0;
}