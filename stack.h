//generic stack implementation
//a stack is like a cube where you can put things in but you only can retrieve the last thing that you put in 
#include <iostream>

template<class T>
class STNode{
public:
    STNode<T>(){}
    STNode<T>(T val): value{val}{}
    T value;
    STNode<T>* prev;
};
template<class T>
class Stack{
public:
    Stack(){
        last = nullptr;
    }
    bool isEmpty();
    void insert(T value);
    T pop();
    void printStack();
private:
    STNode<T>* last;
};

template<class T>
bool Stack<T>::isEmpty(){
    return this->last == nullptr;
}

template<class T>
void Stack<T>::insert(T value){
    STNode<T>* tmp = new STNode<T>(value);
    if(this->isEmpty()){
        this->last = tmp;
    }else{
        tmp->prev = this->last;
        this->last = tmp;
    }
}

template<class T>
T Stack<T>::pop(){
    STNode<T>* tmp = this->last;
    this->last = tmp->prev;
    T value = tmp->value;
    delete tmp;
    return value;
}

template<class T>
void Stack<T>::printStack(){
    STNode<T>* tmp = this->last;
    while(tmp != 0){
        std::cout << tmp->value << '\n';
        tmp = tmp->prev;
    }
}