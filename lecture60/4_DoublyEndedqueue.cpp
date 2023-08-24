#include <iostream>
#include <queue>
using namespace std;
int main()
{

    deque<int> d;

    d.push_front(12);
    d.push_back(14);

    cout << "Front " << d.front() << endl;
    cout << "Back " << d.back() << endl;

    d.pop_front();

    cout << "after Front pop " << d.front() << endl;
    cout << "Back, after front pop " << d.back() << endl;

    d.pop_back();

    if(d.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"Queue is not empty "<<endl;
    }

    return 0;
}