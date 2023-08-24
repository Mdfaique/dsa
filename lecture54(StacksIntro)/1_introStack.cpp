#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    // 2-basics
    // Properties
public:
    int *arr;
    int top;
    int size;

    // Behaviuor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Oveflow " << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow " << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is empty " << endl;
            return -1;
        }
    }

    int isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    // ----------------1-basics--------------------
    /*
    //creation of stack
    stack<int> s;

    //push
    s.push(2);
    s.push(3);

    // pop
    s.pop();

     cout<<"Top element "<<s.top()<<endl;

     if(s.empty()){
        cout<<"empty stack "<<endl;
     }
     else{
        cout<<"not empty stack"<<endl;
     }

     cout<<"Size of Stack Is "<<s.size()<<endl;
     */

    //--------------end1Basics---------------

    // --------------2-basics----------------------

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(21);
    st.push(42);
    st.push(40);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    if (st.isEmpty())
    {
        cout << "stack is Empty " << endl;
    }
    else
    {
        cout << "Stack is not empty " << endl;
    }
    // --------------2-endbasics-----------------------
}