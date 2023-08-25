#include<iostream>
using namespace std;
class Stack{
    int top;
    int *arr;
    int size;

    public:

    Stack(int size){
        arr = new int[size];
        top = -1;
        this->size = size;
    };

    //  Push element in stack

    void push(int data){

        if(top == size-1){
            cout << "Stack-Overflow" << endl;
            return;
        }
        top++;
        arr[top] = data;
    };

    //  Pop an element from stack

    void Pop(){

        if(top == -1){
            cout << "stack-underflow" << endl;
            return;
        }
        top--;
        return;
    };

    //  to Check top element in stack

    int Peek(){
        if(top == -1){
            cout << "StackUndrflow" << endl;
            return -1;
        }
        return arr[top];
    };

    // to check stack is empty or not
    bool empty(){

        return top == -1;
    };
};
int main(){
    //  create stack

    Stack s(5);
    //  push element
    s.push(12);
    s.push(22);
    s.push(32);
    s.push(43);
    s.push(123);
    //  print peak element
    cout << s.Peek() << endl;

    //  pop an element
    s.Pop();
    //  print peak after pop
    cout << s.Peek() << endl;
    //  check stack empty(1 return) or not( 0 return)
    cout << s.empty() << endl;;

    return 0;
}