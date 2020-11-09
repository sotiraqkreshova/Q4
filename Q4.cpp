#include <iostream>
#include <string>
#include "stack.h"

using namespace std;

int main()
{
    cout << "Q4\nCreate a stack and initialize it\n";
    Stack s = Stack();
    cout << "push a to the stack\n";
    s.push('a');
    cout << "push b to the stack\n";
    s.push('b');
    cout << "push c to the stack\n";
    s.push('c');
    cout << "push d to the stack\n";
    s.push('d');
    cout << "---------- print all items -------------\n";
    s.printAll();
    cout << "pop : " << s.pop() << endl;
    cout << "update item in position 1 to x\n";
    s.update(1, 'x');
    cout << "---------- print all items -------------\n";
    s.printAll();
}
