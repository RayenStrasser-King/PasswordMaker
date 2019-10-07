#include <iostream>
#include "dstack.h"
using namespace std;

int main()
{
        double value;
        Dstack stack;

        while (cin >> value)
                stack.push(value);

        cout<<"There are " <<stack.size()<<" numbers in the stack."<<endl;

        while (stack.pop(value))
        {
                cout<<value<<endl;
        }
        
        cout<<"There are "<<stack.size()<<" numbers in the stack."<<endl;
        return 0;
}
