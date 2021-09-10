#include "stack.h"

int main(){
    Stack<int> t;
    t.insert(5);
    t.insert(4);
    t.insert(3);
    t.printStack();
    Stack<std::string> h;
    h.insert("me llamo juan");
    h.insert("me llamo roberto");
    h.printStack();
    h.pop();
    h.printStack();
}