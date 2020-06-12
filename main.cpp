
#include "stak.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Stak<int> stak1;
    stak1.print();
    cout<<"\n";
    stak1.push(15);
    stak1.push(16);
    stak1.push(12);
    stak1.push(-20);
    stak1.print();
    cout<<"\n"<< stak1.pop() <<"\n";
    cout<<"\n"<< stak1.top() <<"\tSize: " << stak1.size() <<"\n";
    cout<<"\n"<< stak1.top() <<"\n";
    cout<<"\n"<< stak1.pop() <<"\n";
    Stak<int> stak2(stak1);
    stak2.print();
    stak2.clear();
    cout<<"\n";
    stak2.print();
    stak2 = stak1;
    cout<<"\n";
    stak2.print();
    return 0;
}
