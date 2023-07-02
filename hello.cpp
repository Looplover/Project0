#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

#define MAX_SIZE 50

class Stack {
    int DATA[MAX_SIZE];
    int TOP;
    public:
    Stack() {
        TOP = -1;
    }

    
    int pop();
    void push(int data);
    void traverse();
};

void Stack::push(int data) {
    if (TOP == MAX_SIZE-1) {
        cout << "Stack overflow"<<endl;
    }
    else{
    TOP++;
    DATA[TOP] = data;
    cout << "Push success"<<endl;
    }
}

int Stack::pop() {
    if (TOP == -1) {
        cout << "Stack underflow"<<endl;
        return 0;
    }
    else{
    int data = DATA[TOP];
    TOP--;
    cout << data << " "<< "popped susccessfully"<<endl;
    return data;
    }
}

void Stack::traverse() {
    if (TOP == -1) {
        cout << "Empty stack"<<endl;
    }
    else {
    for (int i = 0; i < TOP+1;i++) {
        cout<<DATA[i]<<endl;
    }
    }
}

int main(void) {
    Stack stack;
    string ch = "Y";
    do {
        int num;
        cout<<"Enter:"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.traverse"<<endl;
        cin >> num;
        switch(num) {
            case 1:
                cout << "What int to push ?"<<endl;
                int pushing;
                cin >> pushing;
                stack.push(pushing);
                break;

            case 2:
                stack.pop();
                break;

            case 3:
                stack.traverse();
                break;

            default:
                break;

        }
        cout << "Do you want to proceed?(Y/N)"<<endl;
        cin >> ch;
    } while(ch == "Y"|| ch == "y");
}