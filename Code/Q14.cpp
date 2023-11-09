//Stack Implementation-Push POP operation
#include <iostream>
#include <stack>
using namespace std;

int main(){
    
    stack<int>myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.push(60);

    cout<<"Stack elements are: ";
    while(!myStack.empty()){
        cout<<myStack.top()<<" ";
        myStack.pop();
    }
    cout<<"\n";
    return 0;
}
